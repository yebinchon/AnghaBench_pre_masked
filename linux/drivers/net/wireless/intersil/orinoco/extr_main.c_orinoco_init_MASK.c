
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wiphy {int perm_addr; int hw_version; int fw_version; } ;
struct hermes {TYPE_1__* ops; } ;
struct orinoco_private {int prefer_port3; int hw_unavailable; int * wpa_ie; scalar_t__ wpa_ie_len; scalar_t__ key_mgmt; scalar_t__ tkip_cm_active; scalar_t__ wpa_enabled; scalar_t__ tx_key; int encode_alg; scalar_t__ promiscuous; scalar_t__ channel; scalar_t__ has_ibss; scalar_t__ has_port3; int iw_mode; scalar_t__ has_wpa; scalar_t__ has_big_wep; scalar_t__ has_wep; scalar_t__ do_fw_download; scalar_t__ nicbuf_size; struct hermes hw; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int (* init ) (struct hermes*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct orinoco_private*,int ,int,int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct orinoco_private*,int ) ;
 int FUNC_5 (struct orinoco_private*) ;
 int FUNC_6 (struct orinoco_private*) ;
 int FUNC_7 (struct orinoco_private*,int ) ;
 int FUNC_8 (struct orinoco_private*) ;
 scalar_t__ FUNC_9 (struct orinoco_private*) ;
 int FUNC_10 (struct orinoco_private*) ;
 scalar_t__ FUNC_11 (struct wiphy*) ;
 struct wiphy* FUNC_12 (struct orinoco_private*) ;
 int FUNC_13 (struct orinoco_private*) ;
 int FUNC_14 (struct hermes*) ;

int FUNC_15(struct orinoco_private *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct wiphy *VAR_7 = FUNC_12(VAR_5);
 struct hermes *VAR_8 = &VAR_5->hw;
 int VAR_9 = 0;



 VAR_5->nicbuf_size = VAR_2 + VAR_1;


 VAR_9 = VAR_8->ops->init(VAR_8);
 if (VAR_9 != 0) {
  FUNC_2(VAR_6, "Failed to initialize firmware (err = %d)\n",
   VAR_9);
  goto out;
 }

 VAR_9 = FUNC_0(VAR_5, VAR_7->fw_version,
     sizeof(VAR_7->fw_version),
     &VAR_7->hw_version);
 if (VAR_9 != 0) {
  FUNC_2(VAR_6, "Incompatible firmware, aborting\n");
  goto out;
 }

 if (VAR_5->do_fw_download) {




  VAR_9 = FUNC_5(VAR_5);
  if (VAR_9)
   VAR_5->do_fw_download = 0;


  VAR_9 = FUNC_0(VAR_5, VAR_7->fw_version,
      sizeof(VAR_7->fw_version),
      &VAR_7->hw_version);
  if (VAR_9 != 0) {
   FUNC_2(VAR_6, "Incompatible firmware, aborting\n");
   goto out;
  }
 }

 if (VAR_5->has_port3)
  FUNC_3(VAR_6, "Ad-hoc demo mode supported\n");
 if (VAR_5->has_ibss)
  FUNC_3(VAR_6, "IEEE standard IBSS ad-hoc mode supported\n");
 if (VAR_5->has_wep)
  FUNC_3(VAR_6, "WEP supported, %s-bit key\n",
    VAR_5->has_big_wep ? "104" : "40");
 if (VAR_5->has_wpa) {
  FUNC_3(VAR_6, "WPA-PSK supported\n");
  if (FUNC_9(VAR_5)) {
   FUNC_2(VAR_6, "Failed to setup MIC crypto algorithm. "
    "Disabling WPA support\n");
   VAR_5->has_wpa = 0;
  }
 }

 VAR_9 = FUNC_7(VAR_5, VAR_7->perm_addr);
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_6, "Failed to allocate NIC buffer!\n");
  goto out;
 }


 VAR_5->iw_mode = VAR_3;

 VAR_5->prefer_port3 = VAR_5->has_port3 && (!VAR_5->has_ibss);
 FUNC_13(VAR_5);
 VAR_5->channel = 0;

 VAR_5->promiscuous = 0;
 VAR_5->encode_alg = VAR_4;
 VAR_5->tx_key = 0;
 VAR_5->wpa_enabled = 0;
 VAR_5->tkip_cm_active = 0;
 VAR_5->key_mgmt = 0;
 VAR_5->wpa_ie_len = 0;
 VAR_5->wpa_ie = ((void*)0);

 if (FUNC_11(VAR_7)) {
  VAR_9 = -VAR_0;
  goto out;
 }



 FUNC_8(VAR_5);
 VAR_5->hw_unavailable--;
 FUNC_10(VAR_5);

 FUNC_1(VAR_6, "Ready\n");

 out:
 return VAR_9;
}
