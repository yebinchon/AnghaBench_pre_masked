
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scifmsg {scalar_t__* payload; int src; int uop; } ;
struct scif_allocmsg {scalar_t__ state; scalar_t__ vaddr; int allocwq; } ;
struct scif_window {int nr_pages; struct scif_window* num_pages; struct scif_window* dma_addr; int offset; struct scif_allocmsg alloc_handle; } ;
struct TYPE_2__ {int rma_lock; } ;
struct scif_endpt {TYPE_1__ rma_info; int remote_dev; scalar_t__ remote_ep; int port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct scifmsg*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct scif_window*,int) ;
 int FUNC_4 (struct scif_endpt*,struct scif_window*,int ) ;
 scalar_t__ FUNC_5 (struct scif_endpt*) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct scif_endpt *VAR_5,
        struct scif_window *VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_6->nr_pages;
 struct scif_allocmsg *VAR_9 = &VAR_6->alloc_handle;
 struct scifmsg VAR_10;

retry:

 VAR_7 = FUNC_6(VAR_9->allocwq,
     VAR_9->state != VAR_1,
     VAR_3);
 if (!VAR_7 && FUNC_5(VAR_5))
  goto retry;

 FUNC_1(&VAR_5->rma_info.rma_lock);
 if (VAR_9->state == VAR_0) {
  VAR_10.uop = VAR_2;
  VAR_10.src = VAR_5->port;
  VAR_10.payload[0] = VAR_5->remote_ep;
  VAR_10.payload[1] = VAR_6->alloc_handle.vaddr;
  VAR_10.payload[2] = (u64)VAR_6;
  VAR_10.payload[3] = VAR_4;
  FUNC_0(VAR_5->remote_dev, &VAR_10);
 }
 FUNC_2(&VAR_5->rma_info.rma_lock);

 FUNC_4(VAR_5, VAR_6, VAR_6->offset);
 FUNC_3(VAR_6->dma_addr, VAR_8 * sizeof(*VAR_6->dma_addr));
 FUNC_3(VAR_6->num_pages, VAR_8 * sizeof(*VAR_6->num_pages));
 FUNC_3(VAR_6, sizeof(*VAR_6));
}
