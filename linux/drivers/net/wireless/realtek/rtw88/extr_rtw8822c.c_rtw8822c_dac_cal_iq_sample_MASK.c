
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rtw_dev*,int) ;
 int FUNC_1 (struct rtw_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0, VAR_6 = 0;

 while (VAR_5 < VAR_0 && VAR_6 < 10000) {
  VAR_6++;
  VAR_4 = FUNC_1(VAR_1, 0x2dbc, 0x3fffff);
  VAR_2[VAR_5] = (VAR_4 & 0x3ff000) >> 12;
  VAR_3[VAR_5] = VAR_4 & 0x3ff;

  if (FUNC_0(VAR_1, VAR_2[VAR_5]) &&
      FUNC_0(VAR_1, VAR_3[VAR_5]))
   VAR_5++;
 }
}
