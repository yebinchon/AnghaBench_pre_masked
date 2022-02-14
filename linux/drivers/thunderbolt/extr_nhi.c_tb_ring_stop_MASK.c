
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tb_ring {int running; int work; TYPE_2__* nhi; int lock; scalar_t__ tail; scalar_t__ head; int hop; } ;
struct TYPE_4__ {int lock; TYPE_1__* pdev; scalar_t__ going_away; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct tb_ring*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tb_ring*,int) ;
 int FUNC_5 (struct tb_ring*,int ,int) ;
 int FUNC_6 (struct tb_ring*,int ,int ) ;
 int FUNC_7 (struct tb_ring*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct tb_ring *VAR_0)
{
 FUNC_10(&VAR_0->nhi->lock);
 FUNC_9(&VAR_0->lock);
 FUNC_2(&VAR_0->nhi->pdev->dev, "stopping %s %d\n",
  FUNC_0(VAR_0), VAR_0->hop);
 if (VAR_0->nhi->going_away)
  goto err;
 if (!VAR_0->running) {
  FUNC_1(&VAR_0->nhi->pdev->dev, "%s %d already stopped\n",
    FUNC_0(VAR_0), VAR_0->hop);
  goto err;
 }
 FUNC_4(VAR_0, 0);

 FUNC_6(VAR_0, 0, 0);
 FUNC_7(VAR_0, 0, 0);
 FUNC_5(VAR_0, 0, 8);
 FUNC_5(VAR_0, 0, 12);
 VAR_0->head = 0;
 VAR_0->tail = 0;
 VAR_0->running = 0;

err:
 FUNC_11(&VAR_0->lock);
 FUNC_12(&VAR_0->nhi->lock);




 FUNC_8(&VAR_0->work);
 FUNC_3(&VAR_0->work);
}
