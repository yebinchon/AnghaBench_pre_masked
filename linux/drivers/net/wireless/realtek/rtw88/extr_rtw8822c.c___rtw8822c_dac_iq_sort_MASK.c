
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int*,int*) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 if (*VAR_1 >= 0x200 && *VAR_2 >= 0x200) {
  if (*VAR_1 > *VAR_2)
   FUNC_0(VAR_1, VAR_2);
 } else if (*VAR_1 < 0x200 && *VAR_2 < 0x200) {
  if (*VAR_1 > *VAR_2)
   FUNC_0(VAR_1, VAR_2);
 } else if (*VAR_1 < 0x200 && *VAR_2 >= 0x200) {
  FUNC_0(VAR_1, VAR_2);
 }
}
