
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int num; int completed; int * idx; struct gnttab_copy* op; } ;
struct xenvif_queue {TYPE_1__ rx_copy; int rx_irq; int rx; } ;
struct xen_netif_rx_response {scalar_t__ status; } ;
struct gnttab_copy {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 struct xen_netif_rx_response* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct gnttab_copy*,unsigned int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct xenvif_queue *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 FUNC_3(VAR_1->rx_copy.op, VAR_1->rx_copy.num);

 for (VAR_2 = 0; VAR_2 < VAR_1->rx_copy.num; VAR_2++) {
  struct gnttab_copy *VAR_4;

  VAR_4 = &VAR_1->rx_copy.op[VAR_2];




  if (FUNC_5(VAR_4->status != VAR_0)) {
   struct xen_netif_rx_response *VAR_5;

   VAR_5 = FUNC_0(&VAR_1->rx,
      VAR_1->rx_copy.idx[VAR_2]);
   VAR_5->status = VAR_4->status;
  }
 }

 VAR_1->rx_copy.num = 0;


 FUNC_1(&VAR_1->rx, VAR_3);
 if (VAR_3)
  FUNC_4(VAR_1->rx_irq);

 FUNC_2(VAR_1->rx_copy.completed);
}
