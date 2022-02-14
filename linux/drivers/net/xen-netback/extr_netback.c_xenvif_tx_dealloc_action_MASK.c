
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct xenvif_queue {scalar_t__ dealloc_cons; scalar_t__ dealloc_prod; size_t* dealloc_ring; struct gnttab_unmap_grant_ref* tx_unmap_ops; TYPE_1__* vif; int * pages_to_unmap; int * grant_tx_handle; int * mmap_pages; } ;
struct gnttab_unmap_grant_ref {scalar_t__ status; int handle; int host_addr; } ;
typedef scalar_t__ pending_ring_idx_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,int ,int ,int ) ;
 int FUNC_3 (struct gnttab_unmap_grant_ref*,int *,int *,int) ;
 int FUNC_4 (struct xenvif_queue*,size_t) ;
 int FUNC_5 (int ,char*,int,int,...) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (struct xenvif_queue*,size_t) ;
 int FUNC_9 (struct xenvif_queue*,size_t,int ) ;

__attribute__((used)) static inline void FUNC_10(struct xenvif_queue *VAR_4)
{
 struct gnttab_unmap_grant_ref *VAR_5;
 pending_ring_idx_t VAR_6, VAR_7;
 u16 VAR_8, VAR_9[VAR_2];
 unsigned int VAR_10 = 0;

 VAR_6 = VAR_4->dealloc_cons;
 VAR_5 = VAR_4->tx_unmap_ops;


 do {
  VAR_7 = VAR_4->dealloc_prod;




  FUNC_7();

  while (VAR_6 != VAR_7) {
   FUNC_1(VAR_5 - VAR_4->tx_unmap_ops >= VAR_2);
   VAR_8 =
    VAR_4->dealloc_ring[FUNC_6(VAR_6++)];

   VAR_9[VAR_5 - VAR_4->tx_unmap_ops] =
    VAR_8;
   VAR_4->pages_to_unmap[VAR_5 - VAR_4->tx_unmap_ops] =
    VAR_4->mmap_pages[VAR_8];
   FUNC_2(VAR_5,
         FUNC_4(VAR_4, VAR_8),
         VAR_0,
         VAR_4->grant_tx_handle[VAR_8]);
   FUNC_8(VAR_4, VAR_8);
   ++VAR_5;
  }

 } while (VAR_7 != VAR_4->dealloc_prod);

 VAR_4->dealloc_cons = VAR_6;

 if (VAR_5 - VAR_4->tx_unmap_ops > 0) {
  int VAR_11;
  VAR_11 = FUNC_3(VAR_4->tx_unmap_ops,
     ((void*)0),
     VAR_4->pages_to_unmap,
     VAR_5 - VAR_4->tx_unmap_ops);
  if (VAR_11) {
   FUNC_5(VAR_4->vif->dev, "Unmap fail: nr_ops %tu ret %d\n",
       VAR_5 - VAR_4->tx_unmap_ops, VAR_11);
   for (VAR_10 = 0; VAR_10 < VAR_5 - VAR_4->tx_unmap_ops; ++VAR_10) {
    if (VAR_5[VAR_10].status != VAR_1)
     FUNC_5(VAR_4->vif->dev,
         " host_addr: 0x%llx handle: 0x%x status: %d\n",
         VAR_5[VAR_10].host_addr,
         VAR_5[VAR_10].handle,
         VAR_5[VAR_10].status);
   }
   FUNC_0();
  }
 }

 for (VAR_10 = 0; VAR_10 < VAR_5 - VAR_4->tx_unmap_ops; ++VAR_10)
  FUNC_9(VAR_4, VAR_9[VAR_10],
       VAR_3);
}
