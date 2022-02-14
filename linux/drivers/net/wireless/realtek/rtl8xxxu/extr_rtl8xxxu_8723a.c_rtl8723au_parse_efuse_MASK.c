
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl8723au_efuse {scalar_t__ rtl_id; int version; int xtal_k; int device_name; int vendor_name; int ht20_max_power_offset; int ht40_max_power_offset; int ofdm_tx_power_index_diff; int ht20_tx_power_index_diff; int ht40_1s_tx_power_index_B; int ht40_1s_tx_power_index_A; int cck_tx_power_index_B; int cck_tx_power_index_A; int mac_addr; } ;
struct TYPE_3__ {struct rtl8723au_efuse efuse8723; } ;
struct rtl8xxxu_priv {int has_xtalk; int xtalk; TYPE_2__* udev; int * power_base; TYPE_1__ efuse_wifi; int ht20_max_power_offset; int ht40_max_power_offset; int ofdm_tx_power_index_diff; int ht20_tx_power_index_diff; int ht40_1s_tx_power_index_B; int ht40_1s_tx_power_index_A; int cck_tx_power_index_B; int cck_tx_power_index_A; int mac_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct rtl8xxxu_priv *VAR_2)
{
 struct rtl8723au_efuse *VAR_3 = &VAR_2->efuse_wifi.efuse8723;

 if (VAR_3->rtl_id != FUNC_0(0x8129))
  return -VAR_0;

 FUNC_2(VAR_2->mac_addr, VAR_3->mac_addr);

 FUNC_3(VAR_2->cck_tx_power_index_A,
        VAR_3->cck_tx_power_index_A,
        sizeof(VAR_3->cck_tx_power_index_A));
 FUNC_3(VAR_2->cck_tx_power_index_B,
        VAR_3->cck_tx_power_index_B,
        sizeof(VAR_3->cck_tx_power_index_B));

 FUNC_3(VAR_2->ht40_1s_tx_power_index_A,
        VAR_3->ht40_1s_tx_power_index_A,
        sizeof(VAR_3->ht40_1s_tx_power_index_A));
 FUNC_3(VAR_2->ht40_1s_tx_power_index_B,
        VAR_3->ht40_1s_tx_power_index_B,
        sizeof(VAR_3->ht40_1s_tx_power_index_B));

 FUNC_3(VAR_2->ht20_tx_power_index_diff,
        VAR_3->ht20_tx_power_index_diff,
        sizeof(VAR_3->ht20_tx_power_index_diff));
 FUNC_3(VAR_2->ofdm_tx_power_index_diff,
        VAR_3->ofdm_tx_power_index_diff,
        sizeof(VAR_3->ofdm_tx_power_index_diff));

 FUNC_3(VAR_2->ht40_max_power_offset,
        VAR_3->ht40_max_power_offset,
        sizeof(VAR_3->ht40_max_power_offset));
 FUNC_3(VAR_2->ht20_max_power_offset,
        VAR_3->ht20_max_power_offset,
        sizeof(VAR_3->ht20_max_power_offset));

 if (VAR_2->efuse_wifi.efuse8723.version >= 0x01) {
  VAR_2->has_xtalk = 1;
  VAR_2->xtalk = VAR_2->efuse_wifi.efuse8723.xtal_k & 0x3f;
 }

 VAR_2->power_base = &VAR_1;

 FUNC_1(&VAR_2->udev->dev, "Vendor: %.7s\n",
   VAR_3->vendor_name);
 FUNC_1(&VAR_2->udev->dev, "Product: %.41s\n",
   VAR_3->device_name);
 return 0;
}
