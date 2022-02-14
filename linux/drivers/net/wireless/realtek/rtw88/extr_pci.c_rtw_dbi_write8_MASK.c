
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,char*) ;
 scalar_t__ FUNC_2 (struct rtw_dev*,scalar_t__) ;
 int FUNC_3 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_4 (struct rtw_dev*,scalar_t__,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct rtw_dev *VAR_2, u16 VAR_3, u8 VAR_4)
{
 u16 VAR_5;
 u16 VAR_6 = VAR_3 & 0x3;
 u8 VAR_7;
 u8 VAR_8 = 20;

 VAR_5 = ((VAR_3 & 0x0ffc) | (FUNC_0(0) << (VAR_6 + 12)));
 FUNC_4(VAR_2, VAR_1 + VAR_6, VAR_4);
 FUNC_3(VAR_2, VAR_0, VAR_5);
 FUNC_4(VAR_2, VAR_0 + 2, 0x01);

 VAR_7 = FUNC_2(VAR_2, VAR_0 + 2);
 while (VAR_7 && (VAR_8 != 0)) {
  FUNC_5(10);
  VAR_7 = FUNC_2(VAR_2, VAR_0 + 2);
  VAR_8--;
 }

 FUNC_1(VAR_7, "DBI write fail\n");
}
