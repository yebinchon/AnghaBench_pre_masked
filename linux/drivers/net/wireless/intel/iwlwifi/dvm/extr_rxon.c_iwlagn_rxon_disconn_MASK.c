
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_rxon_context {scalar_t__ ctxid; int staging; scalar_t__ vif; int active; } ;
struct iwl_rxon_cmd {int dummy; } ;
struct iwl_priv {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_4 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_6 (struct iwl_priv*,struct iwl_rxon_context*,int *) ;
 int FUNC_7 (struct iwl_priv*,struct iwl_rxon_context*,int *) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_rxon_context*,int *) ;
 int FUNC_9 (struct iwl_rxon_cmd*,int *,int) ;

__attribute__((used)) static int FUNC_10(struct iwl_priv *VAR_1,
          struct iwl_rxon_context *VAR_2)
{
 int VAR_3;
 struct iwl_rxon_cmd *VAR_4 = (void *)&VAR_2->active;

 if (VAR_2->ctxid == VAR_0) {
  VAR_3 = FUNC_6(VAR_1, VAR_2, &VAR_2->staging);
 } else {
  VAR_3 = FUNC_7(VAR_1, VAR_2, &VAR_2->staging);
  if (VAR_3)
   return VAR_3;
  if (VAR_2->vif) {
   VAR_3 = FUNC_4(VAR_1, VAR_2);
   if (VAR_3) {
    FUNC_0(VAR_1, "Failed to send timing (%d)!\n", VAR_3);
    return VAR_3;
   }
   VAR_3 = FUNC_8(VAR_1, VAR_2, &VAR_2->staging);
  }
 }
 if (VAR_3)
  return VAR_3;





 FUNC_1(VAR_1, VAR_2);

 FUNC_5(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2);
 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_1, "Failed to restore WEP keys (%d)\n", VAR_3);
  return VAR_3;
 }

 FUNC_9(VAR_4, &VAR_2->staging, sizeof(*VAR_4));
 return 0;
}
