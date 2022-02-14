
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rxon_context {scalar_t__ ctxid; TYPE_1__* vif; int staging; int rxon_cmd; int active; } ;
struct iwl_rxon_cmd {int dummy; } ;
struct iwl_priv {int tx_power_next; scalar_t__ start_calib; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int FUNC_0 (struct iwl_priv*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct iwl_priv*,int ,int ,int,int *) ;
 int FUNC_2 (struct iwl_priv*) ;
 int FUNC_3 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_4 (struct iwl_priv*,int ,int) ;
 int FUNC_5 (struct iwl_priv*,TYPE_1__*) ;
 int FUNC_6 (struct iwl_priv*,struct iwl_rxon_context*) ;
 int FUNC_7 (struct iwl_rxon_cmd*,int *,int) ;

__attribute__((used)) static int FUNC_8(struct iwl_priv *VAR_3,
          struct iwl_rxon_context *VAR_4)
{
 int VAR_5;
 struct iwl_rxon_cmd *VAR_6 = (void *)&VAR_4->active;


 if (VAR_4->ctxid == VAR_0) {
  VAR_5 = FUNC_3(VAR_3, VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_3, "Failed to send timing (%d)!\n", VAR_5);
   return VAR_5;
  }
 }

 FUNC_6(VAR_3, VAR_4);






 if (VAR_4->vif && (VAR_4->vif->type == VAR_2)) {
  VAR_5 = FUNC_5(VAR_3, VAR_4->vif);
  if (VAR_5) {
   FUNC_0(VAR_3,
    "Error sending required beacon (%d)!\n",
    VAR_5);
   return VAR_5;
  }
 }

 VAR_3->start_calib = 0;






 VAR_5 = FUNC_1(VAR_3, VAR_4->rxon_cmd, 0,
        sizeof(struct iwl_rxon_cmd), &VAR_4->staging);
 if (VAR_5) {
  FUNC_0(VAR_3, "Error setting new RXON (%d)\n", VAR_5);
  return VAR_5;
 }
 FUNC_7(VAR_6, &VAR_4->staging, sizeof(*VAR_6));


 if (VAR_4->vif && (VAR_4->vif->type == VAR_1))
  if (FUNC_5(VAR_3, VAR_4->vif))
   FUNC_0(VAR_3, "Error sending IBSS beacon\n");
 FUNC_2(VAR_3);
 VAR_5 = FUNC_4(VAR_3, VAR_3->tx_power_next, 1);
 if (VAR_5) {
  FUNC_0(VAR_3, "Error sending TX power (%d)\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
