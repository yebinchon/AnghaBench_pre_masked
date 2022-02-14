
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {int have_rekey_data; int mutex; int replay_ctr; int kck; int kek; TYPE_1__* contexts; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_gtk_rekey_data {int replay_ctr; int kck; int kek; } ;
typedef int __be64 ;
struct TYPE_4__ {scalar_t__ swcrypto; } ;
struct TYPE_3__ {struct ieee80211_vif* vif; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_4,
          struct ieee80211_vif *VAR_5,
          struct cfg80211_gtk_rekey_data *VAR_6)
{
 struct iwl_priv *VAR_7 = FUNC_1(VAR_4);

 if (VAR_3.swcrypto)
  return;

 FUNC_0(VAR_7, "enter\n");
 FUNC_5(&VAR_7->mutex);

 if (VAR_7->contexts[VAR_0].vif != VAR_5)
  goto out;

 FUNC_4(VAR_7->kek, VAR_6->kek, VAR_2);
 FUNC_4(VAR_7->kck, VAR_6->kck, VAR_1);
 VAR_7->replay_ctr =
  FUNC_3(FUNC_2((__be64 *)&VAR_6->replay_ctr));
 VAR_7->have_rekey_data = 1;

 out:
 FUNC_6(&VAR_7->mutex);
 FUNC_0(VAR_7, "leave\n");
}
