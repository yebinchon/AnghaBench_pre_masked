
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef enum immed_shift { ____Placeholder_immed_shift } immed_shift ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(u32 VAR_3, u16 *VAR_4, enum immed_shift *VAR_5)
{
 if (!(VAR_3 & 0xffff0000)) {
  *VAR_4 = VAR_3;
  *VAR_5 = VAR_0;
 } else if (!(VAR_3 & 0xff0000ff)) {
  *VAR_4 = VAR_3 >> 8;
  *VAR_5 = VAR_1;
 } else if (!(VAR_3 & 0x0000ffff)) {
  *VAR_4 = VAR_3 >> 16;
  *VAR_5 = VAR_2;
 } else {
  return 0;
 }

 return 1;
}
