
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct rtw_dev*,scalar_t__,int ) ;
 int FUNC_2 (struct rtw_dev*,int ,int ) ;
 int FUNC_3 (struct rtw_dev*,scalar_t__,int ,int) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_3, u8 VAR_4, u16 VAR_5, bool VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 u8 VAR_9;

 FUNC_2(VAR_3, VAR_1, VAR_5);

 VAR_7 = VAR_4 < 0x20 ? 0 : 1;
 VAR_7 += VAR_6 ? 0 : 2;
 FUNC_4(VAR_3, VAR_2, VAR_4 & 0x1f);
 FUNC_4(VAR_3, VAR_2 + 3, VAR_7);

 FUNC_3(VAR_3, VAR_2, VAR_0, 1);
 VAR_8 = FUNC_1(VAR_3, VAR_2, VAR_0);

 VAR_9 = 20;
 while (VAR_8 && (VAR_9 != 0)) {
  FUNC_5(10);
  VAR_8 = FUNC_1(VAR_3, VAR_2,
     VAR_0);
  VAR_9--;
 }

 FUNC_0(VAR_8, "MDIO write fail\n");
}
