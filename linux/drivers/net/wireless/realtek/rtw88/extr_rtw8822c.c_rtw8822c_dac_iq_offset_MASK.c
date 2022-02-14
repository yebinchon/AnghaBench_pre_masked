
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct rtw_dev *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_5 = 0;
 VAR_4 = 0;
 for (VAR_7 = 10; VAR_7 < VAR_0 - 10; VAR_7++) {
  if (VAR_2[VAR_7] > 0x200)
   VAR_5 = (0x400 - VAR_2[VAR_7]) + VAR_5;
  else
   VAR_4 = VAR_2[VAR_7] + VAR_4;
 }

 if (VAR_4 > VAR_5) {
  VAR_6 = VAR_4 - VAR_5;
  VAR_6 = VAR_6 / (VAR_0 - 20);
 } else {
  VAR_6 = VAR_5 - VAR_4;
  VAR_6 = VAR_6 / (VAR_0 - 20);
  if (VAR_6 != 0x0)
   VAR_6 = 0x400 - VAR_6;
 }

 *VAR_3 = VAR_6;
}
