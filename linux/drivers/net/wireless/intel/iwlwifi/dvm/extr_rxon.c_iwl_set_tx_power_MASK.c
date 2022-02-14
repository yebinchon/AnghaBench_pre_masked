
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rxon_context {int staging; int active; } ;
struct iwl_priv {int calib_disabled; scalar_t__ tx_power_user_lmt; scalar_t__ tx_power_next; int status; TYPE_1__* nvm_data; int mutex; struct iwl_rxon_context* contexts; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {scalar_t__ max_tx_pwr_half_dbm; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct iwl_priv*,char*,scalar_t__,scalar_t__) ;
 int VAR_5 ;
 int FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct iwl_priv *VAR_6, s8 VAR_7, bool VAR_8)
{
 int VAR_9;
 s8 VAR_10;
 bool VAR_11;
 struct iwl_rxon_context *VAR_12 = &VAR_6->contexts[VAR_3];

 if (VAR_6->calib_disabled & VAR_4)
  return 0;

 FUNC_5(&VAR_6->mutex);

 if (VAR_6->tx_power_user_lmt == VAR_7 && !VAR_8)
  return 0;

 if (VAR_7 < VAR_2) {
  FUNC_2(VAR_6,
    "Requested user TXPOWER %d below lower limit %d.\n",
    VAR_7,
    VAR_2);
  return -VAR_0;
 }

 if (VAR_7 > FUNC_0(VAR_6->nvm_data->max_tx_pwr_half_dbm, 2)) {
  FUNC_2(VAR_6,
   "Requested user TXPOWER %d above upper limit %d.\n",
    VAR_7, VAR_6->nvm_data->max_tx_pwr_half_dbm);
  return -VAR_0;
 }

 if (!FUNC_3(VAR_6))
  return -VAR_1;



 VAR_6->tx_power_next = VAR_7;


 VAR_11 = FUNC_7(VAR_5, &VAR_6->status) ||
  FUNC_6(&VAR_12->active, &VAR_12->staging, sizeof(VAR_12->staging));
 if (VAR_11 && !VAR_8) {
  FUNC_1(VAR_6, "Deferring tx power set\n");
  return 0;
 }

 VAR_10 = VAR_6->tx_power_user_lmt;
 VAR_6->tx_power_user_lmt = VAR_7;

 VAR_9 = FUNC_4(VAR_6);


 if (VAR_9) {
  VAR_6->tx_power_user_lmt = VAR_10;
  VAR_6->tx_power_next = VAR_10;
 }
 return VAR_9;
}
