
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtw_hal {int antenna_rx; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtw_dev*,int ,int) ;
 int FUNC_1 (struct rtw_dev*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct rtw_dev *VAR_4)
{
 struct rtw_hal *VAR_5 = &VAR_4->hal;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_1, 0x7f);
 FUNC_1(VAR_4, VAR_1, 0x7f, VAR_6 - 2);
 FUNC_1(VAR_4, VAR_1, 0x7f, VAR_6);
 FUNC_1(VAR_4, VAR_2, 0x7f, VAR_6 - 2);
 FUNC_1(VAR_4, VAR_2, 0x7f, VAR_6);

 FUNC_1(VAR_4, VAR_3, VAR_0, 0x0);
 FUNC_1(VAR_4, VAR_3, VAR_0,
    VAR_5->antenna_rx | (VAR_5->antenna_rx << 4));
}
