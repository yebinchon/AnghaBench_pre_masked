
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtw_hal {scalar_t__ rf_path_num; void* antenna_rx; void* antenna_tx; int rf_type; } ;
struct rtw_dev {struct rtw_hal hal; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static void FUNC_1(struct rtw_dev *VAR_3, u8 VAR_4)
{
 struct rtw_hal *VAR_5 = &VAR_3->hal;

 if (VAR_4 == VAR_1 ||
     VAR_4 >= VAR_5->rf_path_num)
  return;

 switch (VAR_4) {
 case 1:
  VAR_5->rf_type = VAR_2;
  VAR_5->rf_path_num = 1;
  VAR_5->antenna_tx = VAR_0;
  VAR_5->antenna_rx = VAR_0;
  break;
 default:
  FUNC_0(1, "invalid hw configuration from efuse\n");
  break;
 }
}
