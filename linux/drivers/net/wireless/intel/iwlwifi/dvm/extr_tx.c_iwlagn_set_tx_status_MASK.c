
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int status; } ;
struct iwlagn_tx_resp {int rate_n_flags; scalar_t__ failure_frame; TYPE_1__ status; } ;
struct iwl_priv {int dummy; } ;
struct TYPE_6__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_3__ status; } ;
struct TYPE_5__ {scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_priv*,int ) ;
 int FUNC_3 (struct iwl_priv*,int ,struct ieee80211_tx_info*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_1,
     struct ieee80211_tx_info *VAR_2,
     struct iwlagn_tx_resp *VAR_3)
{
 u16 VAR_4 = FUNC_4(VAR_3->status.status);

 VAR_2->flags &= ~VAR_0;

 VAR_2->status.rates[0].count = VAR_3->failure_frame + 1;
 VAR_2->flags |= FUNC_1(VAR_4);
 FUNC_3(VAR_1, FUNC_5(VAR_3->rate_n_flags),
        VAR_2);
 if (!FUNC_0(VAR_4))
  FUNC_2(VAR_1, VAR_4);
}
