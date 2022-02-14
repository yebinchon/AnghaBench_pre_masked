
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rt2x00lib_erp {int ht_opmode; int beacon_int; int basic_rates; int eifs; int difs; int pifs; int sifs; int slot_time; int cts_protection; int short_preamble; } ;
struct rt2x00_intf {int dummy; } ;
struct rt2x00_dev {TYPE_2__* ops; int beacon_int; int last_beacon; int aid; } ;
struct ieee80211_bss_conf {int ht_operation_mode; int beacon_int; int sync_tsf; int aid; scalar_t__ assoc; int basic_rates; scalar_t__ use_short_slot; int use_cts_prot; int use_short_preamble; } ;
typedef int erp ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* config_erp ) (struct rt2x00_dev*,struct rt2x00lib_erp*,int) ;} ;


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
 int FUNC_0 (struct rt2x00lib_erp*,int ,int) ;
 int FUNC_1 (struct rt2x00_dev*,struct rt2x00lib_erp*,int) ;

void FUNC_2(struct rt2x00_dev *VAR_10,
     struct rt2x00_intf *VAR_11,
     struct ieee80211_bss_conf *VAR_12,
     u32 VAR_13)
{
 struct rt2x00lib_erp VAR_14;

 FUNC_0(&VAR_14, 0, sizeof(VAR_14));

 VAR_14.short_preamble = VAR_12->use_short_preamble;
 VAR_14.cts_protection = VAR_12->use_cts_prot;

 VAR_14.slot_time = VAR_12->use_short_slot ? VAR_7 : VAR_9;
 VAR_14.sifs = VAR_8;
 VAR_14.pifs = VAR_12->use_short_slot ? VAR_6 : VAR_3;
 VAR_14.difs = VAR_12->use_short_slot ? VAR_4 : VAR_1;
 VAR_14.eifs = VAR_12->use_short_slot ? VAR_5 : VAR_2;

 VAR_14.basic_rates = VAR_12->basic_rates;
 VAR_14.beacon_int = VAR_12->beacon_int;


 VAR_10->aid = VAR_12->assoc ? VAR_12->aid : 0;
 VAR_10->last_beacon = VAR_12->sync_tsf;


 VAR_10->beacon_int = VAR_12->beacon_int;

 if (VAR_13 & VAR_0)
  VAR_14.ht_opmode = VAR_12->ht_operation_mode;

 VAR_10->ops->lib->config_erp(VAR_10, &VAR_14, VAR_13);
}
