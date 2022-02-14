
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_0, u32 VAR_1,
       u32 *VAR_2, u32 *VAR_3)
{
 if (VAR_1 >= 0x200) {
  if (*VAR_2 >= 0x200) {
   if (*VAR_2 > VAR_1)
    *VAR_2 = VAR_1;
  } else {
   *VAR_2 = VAR_1;
  }
  if (*VAR_3 >= 0x200) {
   if (*VAR_3 < VAR_1)
    *VAR_3 = VAR_1;
  }
 } else {
  if (*VAR_2 < 0x200) {
   if (*VAR_2 > VAR_1)
    *VAR_2 = VAR_1;
  }

  if (*VAR_3 >= 0x200) {
   *VAR_3 = VAR_1;
  } else {
   if (*VAR_3 < VAR_1)
    *VAR_3 = VAR_1;
  }
 }
}
