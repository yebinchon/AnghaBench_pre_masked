
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3)
{
 unsigned int VAR_4;
 if (VAR_3 < 15)
  return -VAR_0;

 VAR_4 = ((VAR_3 + 15) + 29) / 30;

 if (VAR_4 > 255)
  return -VAR_0;





 VAR_2 = VAR_4;
 VAR_1 = (VAR_2 * 30) - 15;
 return 0;
}
