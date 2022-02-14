
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mib_mac_wep {int encryption_level; int exclude_unencrypted; size_t wep_default_key_id; int wep_default_keyvalue; scalar_t__ privacy_invoked; } ;
struct TYPE_4__ {struct mib_mac_wep wep_mib; } ;
struct TYPE_6__ {int size; scalar_t__ index; int type; TYPE_1__ data; } ;
struct at76_priv {scalar_t__* wep_keys_len; size_t wep_key_id; TYPE_2__* hw; TYPE_3__ mib_buf; int wep_keys; scalar_t__ wep_enabled; } ;
struct TYPE_5__ {int wiphy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct at76_priv*,TYPE_3__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mib_mac_wep*,int ,int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct at76_priv *VAR_2)
{
 int VAR_3 = 0;
 struct mib_mac_wep *VAR_4 = &VAR_2->mib_buf.data.wep_mib;

 VAR_2->mib_buf.type = VAR_0;
 VAR_2->mib_buf.size = sizeof(struct mib_mac_wep);
 VAR_2->mib_buf.index = 0;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 if (VAR_2->wep_enabled) {
  if (VAR_2->wep_keys_len[VAR_2->wep_key_id] > VAR_1)
   VAR_4->encryption_level = 2;
  else
   VAR_4->encryption_level = 1;


  VAR_4->exclude_unencrypted = 1;
 } else {
  VAR_4->exclude_unencrypted = 0;
  VAR_4->encryption_level = 0;
 }

 VAR_4->privacy_invoked = VAR_2->wep_enabled;
 VAR_4->wep_default_key_id = VAR_2->wep_key_id;
 FUNC_1(VAR_4->wep_default_keyvalue, VAR_2->wep_keys,
        sizeof(VAR_2->wep_keys));

 VAR_3 = FUNC_0(VAR_2, &VAR_2->mib_buf);

 if (VAR_3 < 0)
  FUNC_3(VAR_2->hw->wiphy,
     "set_mib (wep) failed: %d\n", VAR_3);

 return VAR_3;
}
