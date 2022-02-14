
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_queue {TYPE_1__* head; } ;
struct ionic_lif {int adminq_lock; TYPE_2__* netdev; TYPE_3__* adminqcq; } ;
struct ionic_admin_ctx {int cmd; } ;
struct TYPE_6__ {struct ionic_queue q; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,int ,int,int,int *,int,int) ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 (struct ionic_queue*,int) ;
 int FUNC_5 (struct ionic_queue*,int,int ,struct ionic_admin_ctx*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct ionic_lif *VAR_3, struct ionic_admin_ctx *VAR_4)
{
 struct ionic_queue *VAR_5 = &VAR_3->adminqcq->q;
 int VAR_6 = 0;

 FUNC_0(FUNC_3());

 FUNC_7(&VAR_3->adminq_lock);
 if (!FUNC_4(VAR_5, 1)) {
  VAR_6 = -VAR_1;
  goto err_out;
 }

 FUNC_6(VAR_5->head->desc, &VAR_4->cmd, sizeof(VAR_4->cmd));

 FUNC_1(&VAR_3->netdev->dev, "post admin queue command:\n");
 FUNC_2("cmd ", VAR_0, 16, 1,
    &VAR_4->cmd, sizeof(VAR_4->cmd), 1);

 FUNC_5(VAR_5, 1, VAR_2, VAR_4);

err_out:
 FUNC_8(&VAR_3->adminq_lock);

 return VAR_6;
}
