
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct registry_priv {int rf_config; int mp_mode; int wifi_test; int low_power; int vcs_type; int vrtl_carrier_sense; int cbw40_enable; } ;
struct fw_priv {int mp_mode; int turbo_mode; int low_power_mode; int vcs_mode; int vcs_type; int rf_config; int bw_40MHz_en; scalar_t__ usb_ep_num; int hci_sel; } ;
struct dvobj_priv {scalar_t__ nr_endpoint; } ;
struct _adapter {struct registry_priv registrypriv; struct dvobj_priv dvobjpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (struct fw_priv*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct _adapter *VAR_4, struct fw_priv *VAR_5)
{
 struct dvobj_priv *VAR_6 = &VAR_4->dvobjpriv;
 struct registry_priv *VAR_7 = &VAR_4->registrypriv;

 FUNC_0(VAR_5, 0, sizeof(struct fw_priv));

 VAR_5->hci_sel = VAR_0;
 VAR_5->usb_ep_num = (u8)VAR_6->nr_endpoint;
 VAR_5->bw_40MHz_en = VAR_7->cbw40_enable;
 switch (VAR_7->rf_config) {
 case 130:
  VAR_5->rf_config = VAR_1;
  break;
 case 128:
  VAR_5->rf_config = VAR_3;
  break;
 case 129:
 default:
  VAR_5->rf_config = VAR_2;
 }
 VAR_5->mp_mode = (VAR_7->mp_mode == 1) ? 1 : 0;

 VAR_5->vcs_type = VAR_7->vrtl_carrier_sense;
 VAR_5->vcs_mode = VAR_7->vcs_type;

 VAR_5->turbo_mode = ((VAR_7->wifi_test == 1) ? 0 : 1);
 VAR_5->low_power_mode = VAR_7->low_power;
}
