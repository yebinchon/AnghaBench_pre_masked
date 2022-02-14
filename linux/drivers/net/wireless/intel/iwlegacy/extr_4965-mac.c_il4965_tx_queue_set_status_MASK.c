
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; } ;
struct il_tx_queue {int sched_retry; TYPE_1__ q; } ;
struct il_priv {int txq_ctx_active_msk; } ;


 int FUNC_0 (char*,char*,char*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct il_priv*,int ,int) ;
 scalar_t__ FUNC_3 (int,int *) ;

void
FUNC_4(struct il_priv *VAR_5, struct il_tx_queue *VAR_6,
      int VAR_7, int VAR_8)
{
 int VAR_9 = VAR_6->q.id;


 int VAR_10 = FUNC_3(VAR_9, &VAR_5->txq_ctx_active_msk) ? 1 : 0;


 FUNC_2(VAR_5, FUNC_1(VAR_9),
     (VAR_10 << VAR_1) |
     (VAR_7 << VAR_3) |
     (VAR_8 << VAR_4) |
     (VAR_8 << VAR_2) |
     VAR_0);

 VAR_6->sched_retry = VAR_8;

 FUNC_0("%s %s Queue %d on AC %d\n", VAR_10 ? "Activate" : "Deactivate",
        VAR_8 ? "BA" : "AC", VAR_9, VAR_7);
}
