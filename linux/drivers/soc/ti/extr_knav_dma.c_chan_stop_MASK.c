
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct knav_dma_chan {int lock; int cfg; TYPE_1__* reg_rx_flow; } ;
struct knav_dma_cfg {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int tag_sel; int tags; int control; int * thresh; int * fdq_sel; } ;


 int FUNC_0 (struct knav_dma_chan*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct knav_dma_chan *VAR_1)
{
 FUNC_3(&VAR_1->lock);
 if (VAR_1->reg_rx_flow) {

  FUNC_5(0, &VAR_1->reg_rx_flow->fdq_sel[0]);
  FUNC_5(0, &VAR_1->reg_rx_flow->fdq_sel[1]);
  FUNC_5(0, &VAR_1->reg_rx_flow->thresh[0]);
  FUNC_5(0, &VAR_1->reg_rx_flow->thresh[1]);
  FUNC_5(0, &VAR_1->reg_rx_flow->thresh[2]);
 }


 FUNC_0(VAR_1);


 if (VAR_1->reg_rx_flow) {
  FUNC_5(0, &VAR_1->reg_rx_flow->control);
  FUNC_5(0, &VAR_1->reg_rx_flow->tags);
  FUNC_5(0, &VAR_1->reg_rx_flow->tag_sel);
 }

 FUNC_2(&VAR_1->cfg, 0, sizeof(struct knav_dma_cfg));
 FUNC_4(&VAR_1->lock);

 FUNC_1(VAR_0->dev, "channel stopped\n");
}
