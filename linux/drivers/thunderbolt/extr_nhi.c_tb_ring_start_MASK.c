
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tb_ring {int running; int flags; int size; int sof_mask; int eof_mask; TYPE_2__* nhi; int lock; scalar_t__ is_tx; int descriptors_dma; int hop; } ;
struct TYPE_4__ {int lock; TYPE_1__* pdev; scalar_t__ going_away; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tb_ring*) ;
 int VAR_8 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (struct tb_ring*,int) ;
 int FUNC_4 (struct tb_ring*,int,int) ;
 int FUNC_5 (struct tb_ring*,int,int) ;
 int FUNC_6 (struct tb_ring*,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct tb_ring *VAR_9)
{
 u16 VAR_10;
 u32 VAR_11;

 FUNC_8(&VAR_9->nhi->lock);
 FUNC_7(&VAR_9->lock);
 if (VAR_9->nhi->going_away)
  goto err;
 if (VAR_9->running) {
  FUNC_1(&VAR_9->nhi->pdev->dev, "ring already started\n");
  goto err;
 }
 FUNC_2(&VAR_9->nhi->pdev->dev, "starting %s %d\n",
  FUNC_0(VAR_9), VAR_9->hop);

 if (VAR_9->flags & VAR_6) {

  VAR_10 = 0;
  VAR_11 = VAR_5;
 } else {
  VAR_10 = VAR_8;
  VAR_11 = VAR_5 | VAR_7;
 }

 if (VAR_9->flags & VAR_3 && !VAR_9->is_tx) {
  u32 VAR_12;






  VAR_12 = VAR_2 << VAR_1;
  VAR_12 &= VAR_0;
  VAR_11 |= VAR_12 | VAR_4;
 }

 FUNC_6(VAR_9, VAR_9->descriptors_dma, 0);
 if (VAR_9->is_tx) {
  FUNC_4(VAR_9, VAR_9->size, 12);
  FUNC_5(VAR_9, 0, 4);
  FUNC_5(VAR_9, VAR_11, 0);
 } else {
  u32 VAR_13 = VAR_9->sof_mask << 16 | VAR_9->eof_mask;

  FUNC_4(VAR_9, (VAR_10 << 16) | VAR_9->size, 12);
  FUNC_5(VAR_9, VAR_13, 4);
  FUNC_5(VAR_9, VAR_11, 0);
 }
 FUNC_3(VAR_9, 1);
 VAR_9->running = 1;
err:
 FUNC_9(&VAR_9->lock);
 FUNC_10(&VAR_9->nhi->lock);
}
