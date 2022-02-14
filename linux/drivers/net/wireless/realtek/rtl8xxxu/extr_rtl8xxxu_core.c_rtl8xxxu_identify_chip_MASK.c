
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rtl8xxxu_txdesc40 {int dummy; } ;
struct rtl8xxxu_priv {int chip_cut; int rtl_chip; int usb_interrupts; int rf_paths; int rx_paths; int tx_paths; int has_wifi; int has_bluetooth; int has_gps; int is_multi_func; int vendor_smic; int vendor_umc; int rom_rev; int ep_tx_high_queue; int ep_tx_normal_queue; int ep_tx_low_queue; int nr_out_eps; int ep_tx_count; int chip_vendor; int chip_name; TYPE_2__* fops; TYPE_1__* udev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int tx_desc_size; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;



 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct rtl8xxxu_priv *VAR_27)
{
 struct device *VAR_28 = &VAR_27->udev->dev;
 u32 VAR_29, VAR_30;
 u16 VAR_31;

 VAR_29 = FUNC_2(VAR_27, VAR_14);
 VAR_27->chip_cut = (VAR_29 & VAR_21) >>
  VAR_22;
 if (VAR_29 & VAR_23) {
  FUNC_0(VAR_28, "Unsupported test chip\n");
  return -VAR_0;
 }

 if (VAR_29 & VAR_20) {
  if (VAR_27->chip_cut >= 3) {
   FUNC_3(VAR_27->chip_name, "8723BU");
   VAR_27->rtl_chip = 131;
  } else {
   FUNC_3(VAR_27->chip_name, "8723AU");
   VAR_27->usb_interrupts = 1;
   VAR_27->rtl_chip = VAR_19;
  }

  VAR_27->rf_paths = 1;
  VAR_27->rx_paths = 1;
  VAR_27->tx_paths = 1;

  VAR_29 = FUNC_2(VAR_27, VAR_12);
  if (VAR_29 & VAR_6)
   VAR_27->has_wifi = 1;
  if (VAR_29 & VAR_4)
   VAR_27->has_bluetooth = 1;
  if (VAR_29 & VAR_5)
   VAR_27->has_gps = 1;
  VAR_27->is_multi_func = 1;
 } else if (VAR_29 & VAR_24) {
  VAR_30 = FUNC_2(VAR_27, VAR_11);
  VAR_30 &= VAR_3;
  if (VAR_27->fops->tx_desc_size ==
      sizeof(struct rtl8xxxu_txdesc40)) {
   if (VAR_30 == VAR_2) {
    FUNC_3(VAR_27->chip_name, "8191EU");
    VAR_27->rf_paths = 2;
    VAR_27->rx_paths = 2;
    VAR_27->tx_paths = 1;
    VAR_27->rtl_chip = VAR_17;
   } else {
    FUNC_3(VAR_27->chip_name, "8192EU");
    VAR_27->rf_paths = 2;
    VAR_27->rx_paths = 2;
    VAR_27->tx_paths = 2;
    VAR_27->rtl_chip = 132;
   }
  } else if (VAR_30 == VAR_2) {
   FUNC_3(VAR_27->chip_name, "8191CU");
   VAR_27->rf_paths = 2;
   VAR_27->rx_paths = 2;
   VAR_27->tx_paths = 1;
   VAR_27->usb_interrupts = 1;
   VAR_27->rtl_chip = VAR_16;
  } else {
   FUNC_3(VAR_27->chip_name, "8192CU");
   VAR_27->rf_paths = 2;
   VAR_27->rx_paths = 2;
   VAR_27->tx_paths = 2;
   VAR_27->usb_interrupts = 1;
   VAR_27->rtl_chip = VAR_18;
  }
  VAR_27->has_wifi = 1;
 } else {
  FUNC_3(VAR_27->chip_name, "8188CU");
  VAR_27->rf_paths = 1;
  VAR_27->rx_paths = 1;
  VAR_27->tx_paths = 1;
  VAR_27->rtl_chip = VAR_15;
  VAR_27->usb_interrupts = 1;
  VAR_27->has_wifi = 1;
 }

 switch (VAR_27->rtl_chip) {
 case 133:
 case 132:
 case 131:
  switch (VAR_29 & VAR_25) {
  case 129:
   FUNC_3(VAR_27->chip_vendor, "TSMC");
   break;
  case 130:
   FUNC_3(VAR_27->chip_vendor, "SMIC");
   VAR_27->vendor_smic = 1;
   break;
  case 128:
   FUNC_3(VAR_27->chip_vendor, "UMC");
   VAR_27->vendor_umc = 1;
   break;
  default:
   FUNC_3(VAR_27->chip_vendor, "unknown");
  }
  break;
 default:
  if (VAR_29 & VAR_26) {
   FUNC_3(VAR_27->chip_vendor, "UMC");
   VAR_27->vendor_umc = 1;
  } else {
   FUNC_3(VAR_27->chip_vendor, "TSMC");
  }
 }

 VAR_29 = FUNC_2(VAR_27, VAR_10);
 VAR_27->rom_rev = (VAR_29 & VAR_1) >> 28;

 VAR_31 = FUNC_1(VAR_27, VAR_13);
 if (VAR_31 & VAR_7) {
  VAR_27->ep_tx_high_queue = 1;
  VAR_27->ep_tx_count++;
 }

 if (VAR_31 & VAR_9) {
  VAR_27->ep_tx_normal_queue = 1;
  VAR_27->ep_tx_count++;
 }

 if (VAR_31 & VAR_8) {
  VAR_27->ep_tx_low_queue = 1;
  VAR_27->ep_tx_count++;
 }




 if (!VAR_27->ep_tx_count) {
  switch (VAR_27->nr_out_eps) {
  case 4:
  case 3:
   VAR_27->ep_tx_low_queue = 1;
   VAR_27->ep_tx_count++;

  case 2:
   VAR_27->ep_tx_normal_queue = 1;
   VAR_27->ep_tx_count++;

  case 1:
   VAR_27->ep_tx_high_queue = 1;
   VAR_27->ep_tx_count++;
   break;
  default:
   FUNC_0(VAR_28, "Unsupported USB TX end-points\n");
   return -VAR_0;
  }
 }

 return 0;
}
