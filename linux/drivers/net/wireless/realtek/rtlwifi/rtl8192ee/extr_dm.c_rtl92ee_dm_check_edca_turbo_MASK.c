
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
struct TYPE_6__ {int num_non_be_pkt; } ;
struct TYPE_9__ {int is_any_nonbepkts; int is_cur_rdlstate; int current_turbo_edca; int disable_framebursting; TYPE_1__ dbginfo; } ;
struct rtl_priv {TYPE_5__ stats; TYPE_4__ dm; TYPE_3__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {TYPE_2__* ops; } ;
struct TYPE_7__ {int (* set_hw_reg ) (struct ieee80211_hw*,int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ,int) ;
 int FUNC_3 (struct ieee80211_hw*,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);

 static u64 VAR_5;
 static u64 VAR_6;
 u64 VAR_7 = 0;
 u64 VAR_8 = 0;
 u32 VAR_9 = 0x5ea42b;
 u32 VAR_10 = 0x5ea42b;
 u32 VAR_11 = 0x5ea42b;
 bool VAR_12;
 bool VAR_13 = 0;

 if (VAR_4->dm.dbginfo.num_non_be_pkt > 0x100)
  VAR_4->dm.is_any_nonbepkts = 1;
 VAR_4->dm.dbginfo.num_non_be_pkt = 0;

 VAR_7 = VAR_4->stats.txbytesunicast - VAR_5;
 VAR_8 = VAR_4->stats.rxbytesunicast - VAR_6;


 VAR_13 = ((!VAR_4->dm.is_any_nonbepkts) &&
      (!VAR_4->dm.disable_framebursting)) ?
     1 : 0;

 if (FUNC_0(VAR_3))
  goto check_exit;

 if (VAR_13) {
  VAR_12 = (VAR_8 > VAR_7 * 4) ?
        1 : 0;

  VAR_11 = VAR_12 ? VAR_10 : VAR_9;
  FUNC_2(VAR_4 , VAR_2 , VAR_11);
  VAR_4->dm.is_cur_rdlstate = VAR_12;
  VAR_4->dm.current_turbo_edca = 1;
 } else {
  if (VAR_4->dm.current_turbo_edca) {
   u8 VAR_14 = VAR_0;

   VAR_4->cfg->ops->set_hw_reg(VAR_3, VAR_1,
            (u8 *)(&VAR_14));
  }
  VAR_4->dm.current_turbo_edca = 0;
 }

check_exit:
 VAR_4->dm.is_any_nonbepkts = 0;
 VAR_5 = VAR_4->stats.txbytesunicast;
 VAR_6 = VAR_4->stats.rxbytesunicast;
}
