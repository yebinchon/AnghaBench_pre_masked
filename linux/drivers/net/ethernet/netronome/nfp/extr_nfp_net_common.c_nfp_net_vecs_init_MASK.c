
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_r_vector {int affinity_mask; int tasklet; int lock; int queue; int handler; int irq_vector; int irq_entry; struct nfp_net* nfp_net; } ;
struct TYPE_2__ {scalar_t__ netdev; } ;
struct nfp_net {int max_r_vecs; TYPE_1__ dp; struct nfp_net_r_vector* r_vecs; struct msix_entry* irq_entries; int exn_handler; int lsc_handler; } ;
struct msix_entry {int vector; int entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct nfp_net *VAR_6)
{
 struct nfp_net_r_vector *VAR_7;
 int VAR_8;

 VAR_6->lsc_handler = VAR_4;
 VAR_6->exn_handler = VAR_3;

 for (VAR_8 = 0; VAR_8 < VAR_6->max_r_vecs; VAR_8++) {
  struct msix_entry *VAR_9;

  VAR_9 = &VAR_6->irq_entries[VAR_0 + VAR_8];

  VAR_7 = &VAR_6->r_vecs[VAR_8];
  VAR_7->nfp_net = VAR_6;
  VAR_7->irq_entry = VAR_9->entry;
  VAR_7->irq_vector = VAR_9->vector;

  if (VAR_6->dp.netdev) {
   VAR_7->handler = VAR_5;
  } else {
   VAR_7->handler = VAR_1;

   FUNC_0(&VAR_7->queue);
   FUNC_2(&VAR_7->lock);
   FUNC_4(&VAR_7->tasklet, VAR_2,
         (unsigned long)VAR_7);
   FUNC_3(&VAR_7->tasklet);
  }

  FUNC_1(VAR_8, &VAR_7->affinity_mask);
 }
}
