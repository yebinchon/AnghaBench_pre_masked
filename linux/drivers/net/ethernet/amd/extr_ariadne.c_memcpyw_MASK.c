
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_char ;



__attribute__((used)) static void FUNC_0(volatile u_short *VAR_0, u_short *VAR_1, int VAR_2)
{
 while (VAR_2 >= 2) {
  *(VAR_0++) = *(VAR_1++);
  VAR_2 -= 2;
 }
 if (VAR_2 == 1)
  *VAR_0 = (*(u_char *)VAR_1) << 8;
}
