
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct il_priv {scalar_t__ temperature; int txpower_work; int workqueue; int status; int disable_tx_power_cal; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (char*,int ,...) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct il_priv*) ;
 scalar_t__ FUNC_4 (struct il_priv*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

void
FUNC_9(struct il_priv *VAR_2)
{
 s32 VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (FUNC_1(VAR_3))
  return;

 if (VAR_2->temperature != VAR_3) {
  if (VAR_2->temperature)
   FUNC_0("Temperature changed " "from %dC to %dC\n",
          FUNC_2(VAR_2->temperature),
          FUNC_2(VAR_3));
  else
   FUNC_0("Temperature " "initialized to %dC\n",
          FUNC_2(VAR_3));
 }

 VAR_2->temperature = VAR_3;
 FUNC_6(VAR_1, &VAR_2->status);

 if (!VAR_2->disable_tx_power_cal &&
     FUNC_8(!FUNC_7(VAR_0, &VAR_2->status)) &&
     FUNC_4(VAR_2))
  FUNC_5(VAR_2->workqueue, &VAR_2->txpower_work);
}
