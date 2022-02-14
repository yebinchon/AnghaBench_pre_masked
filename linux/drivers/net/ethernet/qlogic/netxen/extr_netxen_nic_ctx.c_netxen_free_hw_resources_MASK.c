
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nx_host_tx_ring {int * desc_head; int phys_addr; } ;
struct nx_host_sds_ring {int * desc_head; int phys_addr; } ;
struct nx_host_rds_ring {int * desc_head; int phys_addr; } ;
struct netxen_ring_ctx {int dummy; } ;
struct netxen_recv_context {struct nx_host_sds_ring* sds_rings; struct nx_host_rds_ring* rds_rings; int * hwctx; int phys_addr; } ;
struct TYPE_2__ {int revision_id; } ;
struct netxen_adapter {int portnum; int max_rds_rings; int max_sds_rings; int pdev; struct nx_host_tx_ring* tx_ring; struct netxen_recv_context recv_ctx; int state; TYPE_1__ ahw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct netxen_adapter*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nx_host_rds_ring*) ;
 int FUNC_4 (struct nx_host_sds_ring*) ;
 int FUNC_5 (struct nx_host_tx_ring*) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct netxen_adapter*) ;
 int FUNC_8 (struct netxen_adapter*) ;
 int FUNC_9 (struct netxen_adapter*) ;
 int FUNC_10 (struct netxen_adapter*) ;
 int FUNC_11 (int ,int,int *,int ) ;
 int FUNC_12 (int ,int *) ;

void FUNC_13(struct netxen_adapter *VAR_2)
{
 struct netxen_recv_context *VAR_3;
 struct nx_host_rds_ring *VAR_4;
 struct nx_host_sds_ring *VAR_5;
 struct nx_host_tx_ring *VAR_6;
 int VAR_7;

 int VAR_8 = VAR_2->portnum;

 if (!FUNC_2(VAR_2->ahw.revision_id)) {
  if (!FUNC_12(VAR_1, &VAR_2->state))
   goto done;

  FUNC_9(VAR_2);
  FUNC_10(VAR_2);
 } else {
  FUNC_7(VAR_2);
  FUNC_1(VAR_2, FUNC_0(VAR_8),
    VAR_0 | VAR_8);
  FUNC_8(VAR_2);
 }


 FUNC_6(20);

done:
 VAR_3 = &VAR_2->recv_ctx;

 if (VAR_3->hwctx != ((void*)0)) {
  FUNC_11(VAR_2->pdev,
    sizeof(struct netxen_ring_ctx) +
    sizeof(uint32_t),
    VAR_3->hwctx,
    VAR_3->phys_addr);
  VAR_3->hwctx = ((void*)0);
 }

 VAR_6 = VAR_2->tx_ring;
 if (VAR_6->desc_head != ((void*)0)) {
  FUNC_11(VAR_2->pdev,
    FUNC_5(VAR_6),
    VAR_6->desc_head, VAR_6->phys_addr);
  VAR_6->desc_head = ((void*)0);
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->max_rds_rings; VAR_7++) {
  VAR_4 = &VAR_3->rds_rings[VAR_7];

  if (VAR_4->desc_head != ((void*)0)) {
   FUNC_11(VAR_2->pdev,
     FUNC_3(VAR_4),
     VAR_4->desc_head,
     VAR_4->phys_addr);
   VAR_4->desc_head = ((void*)0);
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_2->max_sds_rings; VAR_7++) {
  VAR_5 = &VAR_3->sds_rings[VAR_7];

  if (VAR_5->desc_head != ((void*)0)) {
   FUNC_11(VAR_2->pdev,
    FUNC_4(VAR_5),
    VAR_5->desc_head,
    VAR_5->phys_addr);
   VAR_5->desc_head = ((void*)0);
  }
 }
}
