
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_pdev_tpc_final_table_event {int rate_max; int num_tx_chain; int twice_max_rd_power; int power_limit; int twice_antenna_reduction; int twice_antenna_gain; int reg_domain; int ctl; int phy_mode; int chan_freq; } ;
struct sk_buff {scalar_t__ data; } ;
struct ath10k_tpc_stats_final {int chan_freq; int phy_mode; int ctl; int reg_domain; int twice_antenna_reduction; int power_limit; int twice_max_rd_power; int num_tx_chain; int rate_max; int twice_antenna_gain; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,int ,char*,int,int,int,int,int ,int,int,int,int,int) ;
 int FUNC_3 (struct ath10k*,struct ath10k_tpc_stats_final*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct ath10k*,struct wmi_pdev_tpc_final_table_event*,struct ath10k_tpc_stats_final*,int *,int *,int ) ;
 struct ath10k_tpc_stats_final* FUNC_6 (int,int ) ;

void FUNC_7(struct ath10k *VAR_7, struct sk_buff *VAR_8)
{
 u32 VAR_9;
 u8 VAR_10[VAR_2];
 u16 VAR_11[VAR_3];
 struct wmi_pdev_tpc_final_table_event *VAR_12;
 struct ath10k_tpc_stats_final *VAR_13;

 VAR_12 = (struct wmi_pdev_tpc_final_table_event *)VAR_8->data;

 VAR_13 = FUNC_6(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return;

 VAR_9 = FUNC_0(VAR_12->num_tx_chain);

 FUNC_4(VAR_10, VAR_11,
         VAR_9);

 VAR_13->chan_freq = FUNC_0(VAR_12->chan_freq);
 VAR_13->phy_mode = FUNC_0(VAR_12->phy_mode);
 VAR_13->ctl = FUNC_0(VAR_12->ctl);
 VAR_13->reg_domain = FUNC_0(VAR_12->reg_domain);
 VAR_13->twice_antenna_gain = FUNC_1(VAR_12->twice_antenna_gain);
 VAR_13->twice_antenna_reduction =
  FUNC_0(VAR_12->twice_antenna_reduction);
 VAR_13->power_limit = FUNC_0(VAR_12->power_limit);
 VAR_13->twice_max_rd_power = FUNC_0(VAR_12->twice_max_rd_power);
 VAR_13->num_tx_chain = FUNC_0(VAR_12->num_tx_chain);
 VAR_13->rate_max = FUNC_0(VAR_12->rate_max);

 FUNC_5(VAR_7, VAR_12, VAR_13,
            VAR_10, VAR_11,
            VAR_4);
 FUNC_5(VAR_7, VAR_12, VAR_13,
            VAR_10, VAR_11,
            VAR_5);
 FUNC_5(VAR_7, VAR_12, VAR_13,
            VAR_10, VAR_11,
            VAR_6);

 FUNC_3(VAR_7, VAR_13);

 FUNC_2(VAR_7, VAR_0,
     "wmi event tpc final table channel %d mode %d ctl %d regd %d gain %d %d limit %d max_power %d tx_chanins %d rates %d\n",
     FUNC_0(VAR_12->chan_freq),
     FUNC_0(VAR_12->phy_mode),
     FUNC_0(VAR_12->ctl),
     FUNC_0(VAR_12->reg_domain),
     FUNC_1(VAR_12->twice_antenna_gain),
     FUNC_0(VAR_12->twice_antenna_reduction),
     FUNC_0(VAR_12->power_limit),
     FUNC_0(VAR_12->twice_max_rd_power) / 2,
     FUNC_0(VAR_12->num_tx_chain),
     FUNC_0(VAR_12->rate_max));
}
