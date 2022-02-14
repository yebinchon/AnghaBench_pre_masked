
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rxon_context {scalar_t__ ctxid; } ;
struct iwl_priv {int sta_lock; TYPE_1__* stations; } ;
struct TYPE_2__ {scalar_t__ ctxid; int used; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct iwl_priv *VAR_2,
         struct iwl_rxon_context *VAR_3)
{
 int VAR_4;
 bool VAR_5 = 0;

 FUNC_0(VAR_2, "Clearing ucode stations in driver\n");

 FUNC_1(&VAR_2->sta_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3 && VAR_3->ctxid != VAR_2->stations[VAR_4].ctxid)
   continue;

  if (VAR_2->stations[VAR_4].used & VAR_1) {
   FUNC_0(VAR_2,
    "Clearing ucode active for station %d\n", VAR_4);
   VAR_2->stations[VAR_4].used &= ~VAR_1;
   VAR_5 = 1;
  }
 }
 FUNC_2(&VAR_2->sta_lock);

 if (!VAR_5)
  FUNC_0(VAR_2,
          "No active stations found to be cleared\n");
}
