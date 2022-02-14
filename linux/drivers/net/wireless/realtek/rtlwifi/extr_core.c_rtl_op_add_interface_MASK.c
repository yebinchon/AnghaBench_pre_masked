
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct TYPE_8__ {int conf_mutex; } ;
struct TYPE_5__ {int current_bandtype; } ;
struct rtl_priv {TYPE_4__ locks; TYPE_3__* cfg; TYPE_1__ rtlhal; } ;
struct rtl_mac {int beacon_enabled; int basic_rates; void** mac_addr; void* retry_short; void* retry_long; struct ieee80211_vif* opmode; struct ieee80211_vif* vif; scalar_t__ p2p; void* link_state; } ;
struct ieee80211_vif {int addr; struct ieee80211_vif* type; int driver_flags; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_7__ {TYPE_2__* ops; int * maps; } ;
struct TYPE_6__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,void**) ;int (* set_network_type ) (struct ieee80211_hw*,struct ieee80211_vif*) ;int (* set_bcn_reg ) (struct ieee80211_hw*) ;int (* update_interrupt_mask ) (struct ieee80211_hw*,int ,int ) ;} ;


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
 void* VAR_11 ;






 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (void**,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,struct ieee80211_vif*) ;
 int FUNC_6 (struct ieee80211_hw*) ;
 struct rtl_mac* FUNC_7 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_10 (struct ieee80211_hw*,int ,void**) ;
 int FUNC_11 (struct ieee80211_hw*,int ,void**) ;
 int FUNC_12 (struct ieee80211_hw*) ;
 int FUNC_13 (struct ieee80211_hw*,int ,void**) ;
 int FUNC_14 (struct ieee80211_hw*) ;
 int FUNC_15 (struct ieee80211_hw*,int ,void**) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 int FUNC_17 (struct ieee80211_hw*,int ,void**) ;
 int FUNC_18 (struct ieee80211_hw*,int ,void**) ;
 int FUNC_19 (struct ieee80211_hw*,struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_20(struct ieee80211_hw *VAR_15,
  struct ieee80211_vif *VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_8(VAR_15);
 struct rtl_mac *VAR_18 = FUNC_7(FUNC_8(VAR_15));
 int VAR_19 = 0;
 u8 VAR_20 = 0x30;

 if (VAR_18->vif) {
  FUNC_0(VAR_17, VAR_1, VAR_4,
    "vif has been set!! mac->vif = 0x%p\n", VAR_18->vif);
  return -VAR_5;
 }

 VAR_16->driver_flags |= VAR_10;

 FUNC_6(VAR_15);

 FUNC_3(&VAR_17->locks.conf_mutex);
 switch (FUNC_1(VAR_16)) {
 case 130:
  VAR_18->p2p = VAR_12;

 case 128:
  if (VAR_18->beacon_enabled == 1) {
   FUNC_0(VAR_17, VAR_2, VAR_3,
     "NL80211_IFTYPE_STATION\n");
   VAR_18->beacon_enabled = 0;
   VAR_17->cfg->ops->update_interrupt_mask(VAR_15, 0,
     VAR_17->cfg->maps[VAR_14]);
  }
  break;
 case 133:
  FUNC_0(VAR_17, VAR_2, VAR_3,
    "NL80211_IFTYPE_ADHOC\n");

  VAR_18->link_state = VAR_11;
  VAR_17->cfg->ops->set_bcn_reg(VAR_15);
  if (VAR_17->rtlhal.current_bandtype == VAR_0)
   VAR_18->basic_rates = 0xfff;
  else
   VAR_18->basic_rates = 0xff0;
  VAR_17->cfg->ops->set_hw_reg(VAR_15, VAR_7,
    (u8 *)(&VAR_18->basic_rates));

  VAR_20 = 0x07;
  break;
 case 129:
  VAR_18->p2p = VAR_13;

 case 132:
  FUNC_0(VAR_17, VAR_2, VAR_3,
    "NL80211_IFTYPE_AP\n");

  VAR_18->link_state = VAR_11;
  VAR_17->cfg->ops->set_bcn_reg(VAR_15);
  if (VAR_17->rtlhal.current_bandtype == VAR_0)
   VAR_18->basic_rates = 0xfff;
  else
   VAR_18->basic_rates = 0xff0;
  VAR_17->cfg->ops->set_hw_reg(VAR_15, VAR_7,
           (u8 *)(&VAR_18->basic_rates));

  VAR_20 = 0x07;
  break;
 case 131:
  FUNC_0(VAR_17, VAR_2, VAR_3,
    "NL80211_IFTYPE_MESH_POINT\n");

  VAR_18->link_state = VAR_11;
  VAR_17->cfg->ops->set_bcn_reg(VAR_15);
  if (VAR_17->rtlhal.current_bandtype == VAR_0)
   VAR_18->basic_rates = 0xfff;
  else
   VAR_18->basic_rates = 0xff0;
  VAR_17->cfg->ops->set_hw_reg(VAR_15, VAR_7,
    (u8 *)(&VAR_18->basic_rates));

  VAR_20 = 0x07;
  break;
 default:
  FUNC_5("operation mode %d is not supported!\n",
         VAR_16->type);
  VAR_19 = -VAR_5;
  goto out;
 }

 if (VAR_18->p2p) {
  FUNC_0(VAR_17, VAR_2, VAR_3,
    "p2p role %x\n", VAR_16->type);
  VAR_18->basic_rates = 0xff0;
  VAR_17->cfg->ops->set_hw_reg(VAR_15, VAR_7,
    (u8 *)(&VAR_18->basic_rates));
 }
 VAR_18->vif = VAR_16;
 VAR_18->opmode = VAR_16->type;
 VAR_17->cfg->ops->set_network_type(VAR_15, VAR_16->type);
 FUNC_2(VAR_18->mac_addr, VAR_16->addr, VAR_6);
 VAR_17->cfg->ops->set_hw_reg(VAR_15, VAR_8, VAR_18->mac_addr);

 VAR_18->retry_long = VAR_20;
 VAR_18->retry_short = VAR_20;
 VAR_17->cfg->ops->set_hw_reg(VAR_15, VAR_9,
   (u8 *)(&VAR_20));
out:
 FUNC_4(&VAR_17->locks.conf_mutex);
 return VAR_19;
}
