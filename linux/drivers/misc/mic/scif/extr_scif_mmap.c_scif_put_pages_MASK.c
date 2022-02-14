
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scifmsg {int * payload; int src; int uop; } ;
struct scif_window {scalar_t__ magic; int peer_window; int list; int ref_count; scalar_t__ ep; } ;
struct scif_range {int nr_pages; int va; int phys_addr; struct scif_window* cookie; } ;
struct TYPE_3__ {int rma_lock; int dma_chan; } ;
struct scif_endpt {scalar_t__ state; TYPE_1__ rma_info; TYPE_2__* remote_dev; int port; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int sdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct scif_range*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct scif_window*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (TYPE_2__*,struct scifmsg*) ;
 int FUNC_8 (struct scif_window*,int) ;

int FUNC_9(struct scif_range *VAR_6)
{
 struct scif_endpt *VAR_7;
 struct scif_window *VAR_8;
 struct scifmsg VAR_9;

 if (!VAR_6 || !VAR_6->cookie)
  return -VAR_0;

 VAR_8 = VAR_6->cookie;

 if (!VAR_8 || VAR_8->magic != VAR_4)
  return -VAR_0;

 VAR_7 = (struct scif_endpt *)VAR_8->ep;






 if (VAR_7->state != VAR_2 && VAR_7->state != VAR_3)
  return -VAR_1;

 FUNC_2(&VAR_7->rma_info.rma_lock);

 FUNC_8(VAR_8, VAR_6->nr_pages);


 if (!VAR_8->ref_count) {
  FUNC_1(&VAR_8->list);
  FUNC_3(&VAR_7->rma_info.rma_lock);
  FUNC_5(VAR_7->remote_dev->sdev,
        VAR_7->rma_info.dma_chan);

  VAR_9.uop = VAR_5;
  VAR_9.src = VAR_7->port;
  VAR_9.payload[0] = VAR_8->peer_window;

  FUNC_7(VAR_7->remote_dev, &VAR_9);

  FUNC_4(VAR_8);
 } else {
  FUNC_3(&VAR_7->rma_info.rma_lock);
 }

 FUNC_6(VAR_6->phys_addr, VAR_6->nr_pages * sizeof(dma_addr_t));
 FUNC_6(VAR_6->va, VAR_6->nr_pages * sizeof(void *));
 FUNC_0(VAR_6);
 return 0;
}
