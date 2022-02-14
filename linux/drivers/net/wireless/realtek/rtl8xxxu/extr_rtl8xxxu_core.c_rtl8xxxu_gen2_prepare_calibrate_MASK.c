
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;
struct TYPE_2__ {int data; int cmd; } ;
struct h2c_cmd {TYPE_1__ bt_wlan_calibration; } ;


 int VAR_0 ;
 int FUNC_0 (struct h2c_cmd*,int ,int) ;
 int FUNC_1 (struct rtl8xxxu_priv*,struct h2c_cmd*,int) ;

void FUNC_2(struct rtl8xxxu_priv *VAR_1, u8 VAR_2)
{
 struct h2c_cmd VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(struct h2c_cmd));
 VAR_3.bt_wlan_calibration.cmd = VAR_0;
 VAR_3.bt_wlan_calibration.data = VAR_2;

 FUNC_1(VAR_1, &VAR_3, sizeof(VAR_3.bt_wlan_calibration));
}
