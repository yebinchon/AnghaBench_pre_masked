
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct wmi_pdev_tpc_config_event {int rate_max; int num_tx_chain; int twice_max_rd_power; int power_limit; int twice_antenna_reduction; int twice_antenna_gain; int reg_domain; int ctl; int phy_mode; int chan_freq; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k_tpc_stats {int chan_freq; int phy_mode; int ctl; int reg_domain; int twice_antenna_reduction; int power_limit; int twice_max_rd_power; int num_tx_chain; int rate_max; int twice_antenna_gain; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int,int,int ,int,int,int,int,int) ;
 int FUNC_3 (struct ath10k*,struct ath10k_tpc_stats*) ;
 int FUNC_4 (struct ath10k*,struct wmi_pdev_tpc_config_event*,struct ath10k_tpc_stats*,int *,int *,int ) ;
 int FUNC_5 (struct ath10k*,char*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 struct ath10k_tpc_stats* FUNC_7 (int,int ) ;

void FUNC_8(struct ath10k *VAR_8, struct sk_buff *VAR_9)
{
 u32 VAR_10;
 u8 VAR_11[VAR_3];
 u16 VAR_12[VAR_2];
 struct wmi_pdev_tpc_config_event *VAR_13;
 struct ath10k_tpc_stats *VAR_14;

 VAR_13 = (struct wmi_pdev_tpc_config_event *)VAR_9->data;

 VAR_10 = FUNC_0(VAR_13->num_tx_chain);

 if (VAR_10 > VAR_7) {
  FUNC_5(VAR_8, "number of tx chain is %d greater than TPC configured tx chain %d\n",
       VAR_10, VAR_7);
  return;
 }

 VAR_14 = FUNC_7(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return;

 FUNC_6(VAR_11, VAR_12,
         VAR_10);

 VAR_14->chan_freq = FUNC_0(VAR_13->chan_freq);
 VAR_14->phy_mode = FUNC_0(VAR_13->phy_mode);
 VAR_14->ctl = FUNC_0(VAR_13->ctl);
 VAR_14->reg_domain = FUNC_0(VAR_13->reg_domain);
 VAR_14->twice_antenna_gain = FUNC_1(VAR_13->twice_antenna_gain);
 VAR_14->twice_antenna_reduction =
  FUNC_0(VAR_13->twice_antenna_reduction);
 VAR_14->power_limit = FUNC_0(VAR_13->power_limit);
 VAR_14->twice_max_rd_power = FUNC_0(VAR_13->twice_max_rd_power);
 VAR_14->num_tx_chain = FUNC_0(VAR_13->num_tx_chain);
 VAR_14->rate_max = FUNC_0(VAR_13->rate_max);

 FUNC_4(VAR_8, VAR_13, VAR_14,
          VAR_11, VAR_12,
          VAR_4);
 FUNC_4(VAR_8, VAR_13, VAR_14,
          VAR_11, VAR_12,
          VAR_5);
 FUNC_4(VAR_8, VAR_13, VAR_14,
          VAR_11, VAR_12,
          VAR_6);

 FUNC_3(VAR_8, VAR_14);

 FUNC_2(VAR_8, VAR_0,
     "wmi event tpc config channel %d mode %d ctl %d regd %d gain %d %d limit %d max_power %d tx_chanins %d rates %d\n",
     FUNC_0(VAR_13->chan_freq),
     FUNC_0(VAR_13->phy_mode),
     FUNC_0(VAR_13->ctl),
     FUNC_0(VAR_13->reg_domain),
     FUNC_1(VAR_13->twice_antenna_gain),
     FUNC_0(VAR_13->twice_antenna_reduction),
     FUNC_0(VAR_13->power_limit),
     FUNC_0(VAR_13->twice_max_rd_power) / 2,
     FUNC_0(VAR_13->num_tx_chain),
     FUNC_0(VAR_13->rate_max));
}
