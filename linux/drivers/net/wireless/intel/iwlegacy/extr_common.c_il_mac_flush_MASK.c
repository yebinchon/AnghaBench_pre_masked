
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct il_queue {scalar_t__ read_ptr; scalar_t__ write_ptr; int id; } ;
struct TYPE_3__ {int max_txq_num; } ;
struct il_priv {int cmd_queue; int mutex; TYPE_2__* txq; TYPE_1__ hw_params; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct TYPE_4__ {struct il_queue q; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 unsigned long VAR_0 ;
 unsigned long FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

void FUNC_7(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2,
    u32 VAR_3, bool VAR_4)
{
 struct il_priv *VAR_5 = VAR_1->priv;
 unsigned long VAR_6 = VAR_0 + FUNC_2(500);
 int VAR_7;

 FUNC_4(&VAR_5->mutex);
 FUNC_0("enter\n");

 if (VAR_5->txq == ((void*)0))
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_5->hw_params.max_txq_num; VAR_7++) {
  struct il_queue *VAR_8;

  if (VAR_7 == VAR_5->cmd_queue)
   continue;

  VAR_8 = &VAR_5->txq[VAR_7].q;
  if (VAR_8->read_ptr == VAR_8->write_ptr)
   continue;

  if (FUNC_6(VAR_0, VAR_6)) {
   FUNC_1("Failed to flush queue %d\n", VAR_8->id);
   break;
  }

  FUNC_3(20);
 }
out:
 FUNC_0("leave\n");
 FUNC_5(&VAR_5->mutex);
}
