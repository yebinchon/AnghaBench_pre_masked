
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int speed_t ;


 unsigned int FUNC_0 (int,int) ;

__attribute__((used)) static speed_t FUNC_1(speed_t VAR_0)
{
 unsigned int VAR_1 = 1;
 unsigned int VAR_2;

 if (VAR_0 <= 365)
  VAR_1 = 4;

 VAR_2 = FUNC_0(48000000, 2 * VAR_1 * VAR_0);
 VAR_0 = 48000000 / (2 * VAR_1 * VAR_2);

 return VAR_0;
}
