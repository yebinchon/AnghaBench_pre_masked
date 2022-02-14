
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct xenvif_queue {TYPE_2__* pending_tx_info; TYPE_1__* vif; int * mmap_pages; struct gnttab_map_grant_ref* tx_map_ops; int * pages_to_map; } ;
struct xen_netif_tx_request {int gref; } ;
struct gnttab_map_grant_ref {int dummy; } ;
struct TYPE_4__ {unsigned int extra_count; int req; } ;
struct TYPE_3__ {int domid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gnttab_map_grant_ref*,int ,int,int ,int ) ;
 int FUNC_1 (struct xenvif_queue*,size_t) ;
 int FUNC_2 (int *,struct xen_netif_tx_request*,int) ;

__attribute__((used)) static inline void FUNC_3(struct xenvif_queue *VAR_2,
        u16 VAR_3,
        struct xen_netif_tx_request *VAR_4,
        unsigned int VAR_5,
        struct gnttab_map_grant_ref *VAR_6)
{
 VAR_2->pages_to_map[VAR_6-VAR_2->tx_map_ops] = VAR_2->mmap_pages[VAR_3];
 FUNC_0(VAR_6, FUNC_1(VAR_2, VAR_3),
     VAR_0 | VAR_1,
     VAR_4->gref, VAR_2->vif->domid);

 FUNC_2(&VAR_2->pending_tx_info[VAR_3].req, VAR_4,
        sizeof(*VAR_4));
 VAR_2->pending_tx_info[VAR_3].extra_count = VAR_5;
}
