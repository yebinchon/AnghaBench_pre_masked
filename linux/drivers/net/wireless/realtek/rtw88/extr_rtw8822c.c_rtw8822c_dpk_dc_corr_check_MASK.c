
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct rtw_dev*,int ,int ) ;
 int FUNC_3 (struct rtw_dev*,int ,int) ;

__attribute__((used)) static u8 FUNC_4(struct rtw_dev *VAR_2, u8 VAR_3)
{
 u16 VAR_4, VAR_5;
 u8 VAR_6, VAR_7;

 FUNC_3(VAR_2, VAR_0, 0x000900f0);
 VAR_4 = (u16)FUNC_2(VAR_2, VAR_1, FUNC_1(27, 16));
 VAR_5 = (u16)FUNC_2(VAR_2, VAR_1, FUNC_1(11, 0));

 if (VAR_4 & FUNC_0(11))
  VAR_4 = 0x1000 - VAR_4;
 if (VAR_5 & FUNC_0(11))
  VAR_5 = 0x1000 - VAR_5;

 FUNC_3(VAR_2, VAR_0, 0x000000f0);
 VAR_7 = (u8)FUNC_2(VAR_2, VAR_1, FUNC_1(7, 0));
 VAR_6 = (u8)FUNC_2(VAR_2, VAR_1, FUNC_1(15, 8));

 if (VAR_4 > 200 || VAR_5 > 200 || VAR_7 < 40 || VAR_7 > 65)
  return 1;
 else
  return 0;

}
