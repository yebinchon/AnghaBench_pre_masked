
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {scalar_t__ cb; } ;
struct rtl_tcb_desc {int last_inipkt; int cmd_or_init; int queue_index; } ;
struct rtl_priv {TYPE_2__* cfg; } ;
struct rtl_hal {int h2c_txcmd_seq; } ;
struct ieee80211_hw {int dummy; } ;
struct h2c_wpa_two_way_parm {int dummy; } ;
struct h2c_set_pwrmode_parm {int dummy; } ;
struct h2c_joinbss_rpt_parm {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* tx_polling ) (struct ieee80211_hw*,int ) ;} ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int ,int,int*,int*,int**,int *) ;
 int FUNC_2 (int ,int,int*) ;
 struct sk_buff* FUNC_3 (int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static bool FUNC_7(struct ieee80211_hw *VAR_8, u8 VAR_9,
      u8 *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_5(VAR_8);
 struct rtl_hal *VAR_12 = FUNC_4(FUNC_5(VAR_8));
 struct rtl_tcb_desc *VAR_13;
 struct sk_buff *VAR_14;
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17;

 switch (VAR_9) {
 case 131:
  VAR_15 = VAR_2 ;
  VAR_16 = sizeof(struct h2c_set_pwrmode_parm);
  break;
 case 132:
  VAR_15 = VAR_1;
  VAR_16 = sizeof(struct h2c_joinbss_rpt_parm);
  break;
 case 129:
  VAR_15 = VAR_4;
  VAR_16 = sizeof(struct h2c_wpa_two_way_parm);
  break;
 case 128:
  VAR_15 = VAR_5;
  VAR_16 = sizeof(unsigned long long);
  break;
 case 130:
  VAR_15 = VAR_3;
  VAR_16 = sizeof(u8);
  break;
 default:
  break;
 }

 VAR_17 = FUNC_2(VAR_6, 1, &VAR_16);
 VAR_14 = FUNC_3(VAR_17);
 if (!VAR_14)
  return 0;
 VAR_13 = (struct rtl_tcb_desc *)(VAR_14->cb);
 VAR_13->queue_index = VAR_7;
 VAR_13->cmd_or_init = VAR_0;
 VAR_13->last_inipkt = 0;

 FUNC_1(VAR_14, VAR_6, 1, &VAR_15,
   &VAR_16, &VAR_10, &VAR_12->h2c_txcmd_seq);
 FUNC_0(VAR_8, VAR_14, 0);
 VAR_11->cfg->ops->tx_polling(VAR_8, VAR_7);

 return 1;
}
