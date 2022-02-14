
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ req_status; int chan; int xt; } ;
struct omap_vout_device {TYPE_1__ vrfb_dma_tx; int * vrfb_context; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct omap_vout_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  FUNC_3(&VAR_3->vrfb_context[VAR_4]);

 if (VAR_3->vrfb_dma_tx.req_status == VAR_0) {
  VAR_3->vrfb_dma_tx.req_status = VAR_1;
  FUNC_2(VAR_3->vrfb_dma_tx.xt);
  FUNC_1(VAR_3->vrfb_dma_tx.chan);
  FUNC_0(VAR_3->vrfb_dma_tx.chan);
 }
}
