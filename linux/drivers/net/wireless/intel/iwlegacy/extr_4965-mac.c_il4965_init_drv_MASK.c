
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int reset_duration; } ;
struct TYPE_4__ {int smps; } ;
struct il_priv {int * ieee_rates; TYPE_3__* ops; TYPE_2__ force_reset; int missed_beacon_threshold; TYPE_1__ current_ht_config; int iw_mode; int band; int * ieee_channels; int mutex; int free_frames; int hcmd_lock; int sta_lock; } ;
struct TYPE_6__ {int (* set_rxon_chain ) (struct il_priv*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct il_priv*,int *) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct il_priv*) ;

__attribute__((used)) static int
FUNC_10(struct il_priv *VAR_5)
{
 int VAR_6;

 FUNC_8(&VAR_5->sta_lock);
 FUNC_8(&VAR_5->hcmd_lock);

 FUNC_1(&VAR_5->free_frames);

 FUNC_7(&VAR_5->mutex);

 VAR_5->ieee_channels = ((void*)0);
 VAR_5->ieee_rates = ((void*)0);
 VAR_5->band = VAR_3;

 VAR_5->iw_mode = VAR_4;
 VAR_5->current_ht_config.smps = VAR_0;
 VAR_5->missed_beacon_threshold = VAR_2;


 VAR_5->force_reset.reset_duration = VAR_1;


 if (VAR_5->ops->set_rxon_chain)
  VAR_5->ops->set_rxon_chain(VAR_5);

 FUNC_6(VAR_5);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_0("initializing regulatory failed: %d\n", VAR_6);
  goto err;
 }

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6) {
  FUNC_0("initializing geos failed: %d\n", VAR_6);
  goto err_free_channel_map;
 }
 FUNC_2(VAR_5, VAR_5->ieee_rates);

 return 0;

err_free_channel_map:
 FUNC_3(VAR_5);
err:
 return VAR_6;
}
