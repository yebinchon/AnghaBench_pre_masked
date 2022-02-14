
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct rtw_dev*,scalar_t__) ;
 int FUNC_2 (struct rtw_dev*,int ,int) ;
 int FUNC_3 (struct rtw_dev*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct rtw_dev *VAR_6, u8 VAR_7)
{
 FUNC_2(VAR_6, VAR_3, 0x0000000c);

 if (VAR_7 == VAR_4) {
  FUNC_3(VAR_6, VAR_0, FUNC_0(24), 0x0);
  FUNC_2(VAR_6, VAR_1, 0x30000080);
 } else if (VAR_7 == VAR_5) {
  FUNC_3(VAR_6, VAR_0, FUNC_0(24), 0x1);
  FUNC_2(VAR_6, VAR_2, 0x30000080);
 }

 FUNC_1(VAR_6, VAR_7);
}
