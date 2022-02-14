
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_10__ {int txbytesunicast; int rxbytesunicast; } ;
struct TYPE_9__ {int current_turbo_edca; int is_any_nonbepkts; int is_cur_rdlstate; int disable_framebursting; } ;
struct TYPE_6__ {scalar_t__ pairwise_enc_algorithm; } ;
struct rtl_priv {TYPE_5__ stats; TYPE_4__ dm; TYPE_3__* cfg; TYPE_1__ sec; } ;
struct rtl_mac {scalar_t__ link_state; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct rtl_mac* FUNC_0 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_1(VAR_7);
 struct rtl_mac *VAR_9 = FUNC_0(FUNC_1(VAR_7));
 static u64 VAR_10;
 static u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 u32 VAR_14 = 0x5ea42b;
 u32 VAR_15 = 0x5ea42b;

 if (VAR_9->link_state != VAR_2) {
  VAR_8->dm.current_turbo_edca = 0;
  goto exit;
 }



 if ((!VAR_8->dm.disable_framebursting) &&
     (VAR_8->sec.pairwise_enc_algorithm == VAR_6 ||
     VAR_8->sec.pairwise_enc_algorithm == VAR_5 ||
     VAR_8->sec.pairwise_enc_algorithm == VAR_4)) {

  if (!(VAR_14 & 0xffff0000))
   VAR_14 |= 0x005e0000;

  if (!(VAR_15 & 0xffff0000))
   VAR_15 |= 0x005e0000;
 }

 if ((!VAR_8->dm.is_any_nonbepkts) &&
     (!VAR_8->dm.disable_framebursting)) {
  VAR_12 = VAR_8->stats.txbytesunicast - VAR_10;
  VAR_13 = VAR_8->stats.rxbytesunicast - VAR_11;
  if (VAR_13 > 4 * VAR_12) {
   if (!VAR_8->dm.is_cur_rdlstate ||
       !VAR_8->dm.current_turbo_edca) {
    FUNC_2(VAR_8, VAR_3,
      VAR_15);
    VAR_8->dm.is_cur_rdlstate = 1;
   }
  } else {
   if (VAR_8->dm.is_cur_rdlstate ||
       !VAR_8->dm.current_turbo_edca) {
    FUNC_2(VAR_8, VAR_3,
      VAR_14);
    VAR_8->dm.is_cur_rdlstate = 0;
   }
  }
  VAR_8->dm.current_turbo_edca = 1;
 } else {
  if (VAR_8->dm.current_turbo_edca) {
   u8 VAR_16 = VAR_0;
   VAR_8->cfg->ops->set_hw_reg(VAR_7, VAR_1,
            &VAR_16);
   VAR_8->dm.current_turbo_edca = 0;
  }
 }

exit:
 VAR_8->dm.is_any_nonbepkts = 0;
 VAR_10 = VAR_8->stats.txbytesunicast;
 VAR_11 = VAR_8->stats.rxbytesunicast;
}
