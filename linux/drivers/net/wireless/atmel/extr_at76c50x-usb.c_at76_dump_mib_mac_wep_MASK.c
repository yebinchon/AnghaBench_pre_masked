
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mib_mac_wep {int encryption_level; int * wep_default_keyvalue; int wep_default_key_id; int wep_excluded_count; int wep_icv_error_count; int exclude_unencrypted; int wep_key_mapping_len; int privacy_invoked; } ;
struct at76_priv {TYPE_1__* hw; int udev; } ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ,int,int,int ,...) ;
 int FUNC_1 (int ,int ,struct mib_mac_wep*,int) ;
 int FUNC_2 (struct mib_mac_wep*) ;
 struct mib_mac_wep* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct at76_priv *VAR_6)
{
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct mib_mac_wep *VAR_10 = FUNC_3(sizeof(struct mib_mac_wep), VAR_1);

 if (!VAR_10)
  return;

 VAR_8 = FUNC_1(VAR_6->udev, VAR_2, VAR_10,
      sizeof(struct mib_mac_wep));
 if (VAR_8 < 0) {
  FUNC_5(VAR_6->hw->wiphy,
     "at76_get_mib (MAC_WEP) failed: %d\n", VAR_8);
  goto exit;
 }

 FUNC_0(VAR_0, "%s: MIB MAC_WEP: priv_invoked %u def_key_id %u "
   "key_len %u excl_unencr %u wep_icv_err %u wep_excluded %u "
   "encr_level %u key %d", FUNC_6(VAR_6->hw->wiphy),
   VAR_10->privacy_invoked, VAR_10->wep_default_key_id,
   VAR_10->wep_key_mapping_len, VAR_10->exclude_unencrypted,
   FUNC_4(VAR_10->wep_icv_error_count),
   FUNC_4(VAR_10->wep_excluded_count), VAR_10->encryption_level,
   VAR_10->wep_default_key_id);

 VAR_9 = (VAR_10->encryption_level == 1) ?
     VAR_5 : VAR_4;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_0(VAR_0, "%s: MIB MAC_WEP: key %d: %*phD",
    FUNC_6(VAR_6->hw->wiphy), VAR_7,
    VAR_9, VAR_10->wep_default_keyvalue[VAR_7]);
exit:
 FUNC_2(VAR_10);
}
