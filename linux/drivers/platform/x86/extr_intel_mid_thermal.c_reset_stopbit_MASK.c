
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(uint16_t VAR_0)
{
 int VAR_1;
 uint8_t VAR_2;
 VAR_1 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_1)
  return VAR_1;

 return FUNC_1(VAR_0, (VAR_2 & 0xEF));
}
