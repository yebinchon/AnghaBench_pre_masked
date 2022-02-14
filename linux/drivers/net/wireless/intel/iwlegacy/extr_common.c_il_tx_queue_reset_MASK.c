
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct il_tx_queue {int q; scalar_t__ need_update; int meta; } ;
struct il_priv {size_t cmd_queue; TYPE_1__* ops; struct il_tx_queue* txq; } ;
struct il_cmd_meta {int dummy; } ;
struct TYPE_2__ {int (* txq_init ) (struct il_priv*,struct il_tx_queue*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct il_priv*,int *,int,size_t) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct il_priv*,struct il_tx_queue*) ;

void
FUNC_3(struct il_priv *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 struct il_tx_queue *VAR_6 = &VAR_2->txq[VAR_3];

 if (VAR_3 == VAR_2->cmd_queue) {
  VAR_4 = VAR_0;
  VAR_5 = VAR_0 + 1;
 } else {
  VAR_4 = VAR_1;
  VAR_5 = VAR_1;
 }

 FUNC_1(VAR_6->meta, 0, sizeof(struct il_cmd_meta) * VAR_5);
 VAR_6->need_update = 0;


 FUNC_0(VAR_2, &VAR_6->q, VAR_4, VAR_3);


 VAR_2->ops->txq_init(VAR_2, VAR_6);
}
