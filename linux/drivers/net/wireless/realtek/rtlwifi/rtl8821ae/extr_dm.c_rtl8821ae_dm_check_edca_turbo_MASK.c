
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_14__ {scalar_t__ rxbytesunicast; scalar_t__ txbytesunicast; } ;
struct TYPE_8__ {int num_non_be_pkt; } ;
struct TYPE_13__ {int is_any_nonbepkts; int is_cur_rdlstate; int current_turbo_edca; int disable_framebursting; TYPE_1__ dbginfo; } ;
struct TYPE_10__ {scalar_t__ hw_type; } ;
struct TYPE_9__ {size_t vendor; } ;
struct rtl_priv {TYPE_7__ stats; TYPE_6__ dm; TYPE_5__* cfg; TYPE_3__ rtlhal; TYPE_2__ mac80211; } ;
struct rtl_mac {scalar_t__ mode; } ;
struct rtl_dm {scalar_t__ last_rx_ok_cnt; scalar_t__ last_tx_ok_cnt; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_12__ {TYPE_4__* ops; } ;
struct TYPE_11__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,size_t*) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 scalar_t__ VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_1 (struct ieee80211_hw*,scalar_t__,scalar_t__,int,int*) ;
 struct rtl_dm* FUNC_2 (struct rtl_priv*) ;
 struct rtl_mac* FUNC_3 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct ieee80211_hw*,int ,size_t*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_4(VAR_10);
 struct rtl_mac *VAR_12 = FUNC_3(FUNC_4(VAR_10));
 struct rtl_dm *VAR_13 = FUNC_2(FUNC_4(VAR_10));


 u64 VAR_14 = 0;
 u64 VAR_15 = 0;
 u32 VAR_16 = 0x5ea42b;
 u32 VAR_17 = 0x5ea42b;
 u32 VAR_18 = 0x5ea42b;
 u8 VAR_19 = 0;
 bool *VAR_20 = ((void*)0);
 bool VAR_21 = 0;
 bool VAR_22 = 0;

 FUNC_0(VAR_11, VAR_1, VAR_2,
   "rtl8821ae_dm_check_edca_turbo=====>\n");
 FUNC_0(VAR_11, VAR_1, VAR_2,
   "Original BE PARAM: 0x%x\n",
   FUNC_5(VAR_11, VAR_3));

 if (VAR_11->dm.dbginfo.num_non_be_pkt > 0x100)
  VAR_11->dm.is_any_nonbepkts = 1;
 VAR_11->dm.dbginfo.num_non_be_pkt = 0;





 VAR_20 = &VAR_11->dm.is_cur_rdlstate;

 VAR_14 = VAR_11->stats.txbytesunicast - VAR_13->last_tx_ok_cnt;
 VAR_15 = VAR_11->stats.rxbytesunicast - VAR_13->last_rx_ok_cnt;

 VAR_13->last_tx_ok_cnt = VAR_11->stats.txbytesunicast;
 VAR_13->last_rx_ok_cnt = VAR_11->stats.rxbytesunicast;

 VAR_19 = VAR_11->mac80211.vendor;
 VAR_21 = 0;
 VAR_22 = ((!VAR_11->dm.is_any_nonbepkts) &&
      (!VAR_11->dm.disable_framebursting)) ?
      1 : 0;

 if (VAR_11->rtlhal.hw_type != VAR_4) {
  if ((VAR_19 == VAR_6) &&
   (VAR_12->mode == VAR_7)) {
   VAR_17 = VAR_8[VAR_19];
   VAR_16 = VAR_9[VAR_19];
  }
 }

 FUNC_0(VAR_11, VAR_1, VAR_2,
   "bIsAnyNonBEPkts : 0x%x  bDisableFrameBursting : 0x%x\n",
   VAR_11->dm.is_any_nonbepkts,
   VAR_11->dm.disable_framebursting);

 FUNC_0(VAR_11, VAR_1, VAR_2,
   "bEdcaTurboOn : 0x%x bBiasOnRx : 0x%x\n",
   VAR_22, VAR_21);

 if (VAR_22) {
  FUNC_0(VAR_11, VAR_1, VAR_2,
    "curTxOkCnt : 0x%llx\n", VAR_14);
  FUNC_0(VAR_11, VAR_1, VAR_2,
    "curRxOkCnt : 0x%llx\n", VAR_15);
  if (VAR_21)
   FUNC_1(VAR_10, VAR_14,
    VAR_15, 1, VAR_20);
  else
   FUNC_1(VAR_10, VAR_14,
    VAR_15, 0, VAR_20);

  VAR_18 = (*VAR_20) ? VAR_17 : VAR_16;

  FUNC_6(VAR_11, VAR_3, VAR_18);

  FUNC_0(VAR_11, VAR_1, VAR_2,
    "EDCA Turbo on: EDCA_BE:0x%x\n", VAR_18);

  VAR_11->dm.current_turbo_edca = 1;

  FUNC_0(VAR_11, VAR_1, VAR_2,
    "EDCA_BE_DL : 0x%x  EDCA_BE_UL : 0x%x  EDCA_BE : 0x%x\n",
    VAR_17, VAR_16, VAR_18);
 } else {
  if (VAR_11->dm.current_turbo_edca) {
   u8 VAR_23 = VAR_0;
   VAR_11->cfg->ops->set_hw_reg(VAR_10, VAR_5,
            (u8 *)(&VAR_23));
  }
  VAR_11->dm.current_turbo_edca = 0;
 }

 VAR_11->dm.is_any_nonbepkts = 0;
 VAR_13->last_tx_ok_cnt = VAR_11->stats.txbytesunicast;
 VAR_13->last_rx_ok_cnt = VAR_11->stats.rxbytesunicast;
}
