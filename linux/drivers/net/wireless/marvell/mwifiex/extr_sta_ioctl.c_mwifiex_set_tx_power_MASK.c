
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct mwifiex_types_power_group {void* length; void* type; } ;
struct mwifiex_private {scalar_t__ min_tx_power_level; scalar_t__ max_tx_power_level; int adapter; } ;
struct mwifiex_power_group {int first_rate_code; int last_rate_code; int ht_bandwidth; void* power_max; void* power_min; scalar_t__ power_step; void* modulation_class; } ;
struct mwifiex_power_cfg {scalar_t__ is_power_fixed; int is_power_auto; scalar_t__ power_level; } ;
struct host_cmd_ds_txpwr_cfg {int mode; void* action; } ;
typedef void* s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct mwifiex_private*,int ,int,int ,int *,int) ;

int FUNC_6(struct mwifiex_private *VAR_12,
    struct mwifiex_power_cfg *VAR_13)
{
 int VAR_14;
 struct host_cmd_ds_txpwr_cfg *VAR_15;
 struct mwifiex_types_power_group *VAR_16;
 struct mwifiex_power_group *VAR_17;
 u8 *VAR_18;
 u16 VAR_19 = 0;

 if (!VAR_13->is_power_auto) {
  VAR_19 = (u16) VAR_13->power_level;
  if ((VAR_19 < VAR_12->min_tx_power_level) ||
      (VAR_19 > VAR_12->max_tx_power_level)) {
   FUNC_4(VAR_12->adapter, VAR_1,
        "txpower value %d dBm\t"
        "is out of range (%d dBm-%d dBm)\n",
        VAR_19, VAR_12->min_tx_power_level,
        VAR_12->max_tx_power_level);
   return -1;
  }
 }
 VAR_18 = FUNC_3(VAR_10, VAR_2);
 if (!VAR_18)
  return -VAR_0;

 VAR_15 = (struct host_cmd_ds_txpwr_cfg *) VAR_18;
 VAR_15->action = FUNC_0(VAR_5);
 if (!VAR_13->is_power_auto) {
  u16 VAR_20 = VAR_13->is_power_fixed ?
         VAR_19 : VAR_12->min_tx_power_level;

  VAR_15->mode = FUNC_1(1);
  VAR_16 = (struct mwifiex_types_power_group *)
    (VAR_18 + sizeof(struct host_cmd_ds_txpwr_cfg));
  VAR_16->type = FUNC_0(VAR_11);
  VAR_16->length =
   FUNC_0(4 * sizeof(struct mwifiex_power_group));
  VAR_17 = (struct mwifiex_power_group *)
       (VAR_18 + sizeof(struct host_cmd_ds_txpwr_cfg)
        + sizeof(struct mwifiex_types_power_group));

  VAR_17->first_rate_code = 0x00;
  VAR_17->last_rate_code = 0x03;
  VAR_17->modulation_class = VAR_7;
  VAR_17->power_step = 0;
  VAR_17->power_min = (s8) VAR_20;
  VAR_17->power_max = (s8) VAR_19;
  VAR_17++;

  VAR_17->first_rate_code = 0x00;
  VAR_17->last_rate_code = 0x07;
  VAR_17->modulation_class = VAR_9;
  VAR_17->power_step = 0;
  VAR_17->power_min = (s8) VAR_20;
  VAR_17->power_max = (s8) VAR_19;
  VAR_17++;

  VAR_17->first_rate_code = 0x00;
  VAR_17->last_rate_code = 0x20;
  VAR_17->modulation_class = VAR_8;
  VAR_17->power_step = 0;
  VAR_17->power_min = (s8) VAR_20;
  VAR_17->power_max = (s8) VAR_19;
  VAR_17->ht_bandwidth = VAR_3;
  VAR_17++;

  VAR_17->first_rate_code = 0x00;
  VAR_17->last_rate_code = 0x20;
  VAR_17->modulation_class = VAR_8;
  VAR_17->power_step = 0;
  VAR_17->power_min = (s8) VAR_20;
  VAR_17->power_max = (s8) VAR_19;
  VAR_17->ht_bandwidth = VAR_4;
 }
 VAR_14 = FUNC_5(VAR_12, VAR_6,
          VAR_5, 0, VAR_18, 1);

 FUNC_2(VAR_18);
 return VAR_14;
}
