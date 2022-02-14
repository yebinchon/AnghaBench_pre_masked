
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_duration; } ;
struct il_priv {int retry_rate; int * ieee_rates; TYPE_1__ force_reset; int missed_beacon_threshold; int iw_mode; int band; int * ieee_channels; int mutex; int free_frames; int hcmd_lock; int sta_lock; int * beacon_skb; scalar_t__ eeprom; } ;
struct il3945_eeprom {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct il_priv*,int *) ;
 scalar_t__ FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (struct il_priv*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct il_priv *VAR_7)
{
 int VAR_8;
 struct il3945_eeprom *VAR_9 = (struct il3945_eeprom *)VAR_7->eeprom;

 VAR_7->retry_rate = 1;
 VAR_7->beacon_skb = ((void*)0);

 FUNC_9(&VAR_7->sta_lock);
 FUNC_9(&VAR_7->hcmd_lock);

 FUNC_2(&VAR_7->free_frames);

 FUNC_8(&VAR_7->mutex);

 VAR_7->ieee_channels = ((void*)0);
 VAR_7->ieee_rates = ((void*)0);
 VAR_7->band = VAR_5;

 VAR_7->iw_mode = VAR_6;
 VAR_7->missed_beacon_threshold = VAR_4;


 VAR_7->force_reset.reset_duration = VAR_3;

 if (VAR_9->version < VAR_0) {
  FUNC_1("Unsupported EEPROM version: 0x%04X\n",
   VAR_9->version);
  VAR_8 = -VAR_1;
  goto err;
 }
 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8) {
  FUNC_0("initializing regulatory failed: %d\n", VAR_8);
  goto err;
 }


 if (FUNC_4(VAR_7)) {
  VAR_8 = -VAR_2;
  goto err_free_channel_map;
 }

 VAR_8 = FUNC_7(VAR_7);
 if (VAR_8) {
  FUNC_0("initializing geos failed: %d\n", VAR_8);
  goto err_free_channel_map;
 }
 FUNC_3(VAR_7, VAR_7->ieee_rates);

 return 0;

err_free_channel_map:
 FUNC_5(VAR_7);
err:
 return VAR_8;
}
