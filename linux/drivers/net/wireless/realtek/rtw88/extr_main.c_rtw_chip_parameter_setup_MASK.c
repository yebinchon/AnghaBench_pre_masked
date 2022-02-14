
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtw_hal {int chip_version; int fab_version; int mp_chip; int rf_path_num; int rcr; void* antenna_rx; void* antenna_tx; int rf_type; int cut_version; } ;
struct rtw_efuse {int protect_size; int logical_size; int physical_size; } ;
struct TYPE_2__ {int rpwm_addr; } ;
struct rtw_dev {struct rtw_hal hal; TYPE_1__ hci; struct rtw_efuse efuse; struct rtw_chip_info* chip; } ;
struct rtw_chip_info {int ptct_efuse_size; int log_efuse_size; int phy_efuse_size; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int FUNC_2 (struct rtw_dev*,char*) ;
 int FUNC_3 (struct rtw_dev*) ;
 int FUNC_4 (struct rtw_dev*,int ) ;

__attribute__((used)) static int FUNC_5(struct rtw_dev *VAR_9)
{
 struct rtw_chip_info *VAR_10 = VAR_9->chip;
 struct rtw_hal *VAR_11 = &VAR_9->hal;
 struct rtw_efuse *VAR_12 = &VAR_9->efuse;
 int VAR_13 = 0;

 switch (FUNC_3(VAR_9)) {
 case 128:
  VAR_9->hci.rpwm_addr = 0x03d9;
  break;
 default:
  FUNC_2(VAR_9, "unsupported hci type\n");
  return -VAR_5;
 }

 VAR_11->chip_version = FUNC_4(VAR_9, VAR_6);
 VAR_11->fab_version = FUNC_1(VAR_11->chip_version) >> 2;
 VAR_11->cut_version = FUNC_0(VAR_11->chip_version);
 VAR_11->mp_chip = (VAR_11->chip_version & VAR_3) ? 0 : 1;
 if (VAR_11->chip_version & VAR_2) {
  VAR_11->rf_type = VAR_8;
  VAR_11->rf_path_num = 2;
  VAR_11->antenna_tx = VAR_1;
  VAR_11->antenna_rx = VAR_1;
 } else {
  VAR_11->rf_type = VAR_7;
  VAR_11->rf_path_num = 1;
  VAR_11->antenna_tx = VAR_0;
  VAR_11->antenna_rx = VAR_0;
 }

 if (VAR_11->fab_version == 2)
  VAR_11->fab_version = 1;
 else if (VAR_11->fab_version == 1)
  VAR_11->fab_version = 2;

 VAR_12->physical_size = VAR_10->phy_efuse_size;
 VAR_12->logical_size = VAR_10->log_efuse_size;
 VAR_12->protect_size = VAR_10->ptct_efuse_size;


 VAR_9->hal.rcr |= VAR_4;

 return VAR_13;
}
