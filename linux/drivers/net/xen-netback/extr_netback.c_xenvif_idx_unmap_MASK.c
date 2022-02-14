
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct xenvif_queue {TYPE_1__* vif; int * mmap_pages; int * grant_tx_handle; } ;
struct gnttab_unmap_grant_ref {int status; int handle; int host_addr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct gnttab_unmap_grant_ref*,int ,int ,int ) ;
 int FUNC_2 (struct gnttab_unmap_grant_ref*,int *,int *,int) ;
 int FUNC_3 (struct xenvif_queue*,size_t) ;
 int FUNC_4 (int ,char*,int,size_t,int ,int ,int ) ;
 int FUNC_5 (struct xenvif_queue*,size_t) ;

void FUNC_6(struct xenvif_queue *VAR_1, u16 VAR_2)
{
 int VAR_3;
 struct gnttab_unmap_grant_ref VAR_4;

 FUNC_1(&VAR_4,
       FUNC_3(VAR_1, VAR_2),
       VAR_0,
       VAR_1->grant_tx_handle[VAR_2]);
 FUNC_5(VAR_1, VAR_2);

 VAR_3 = FUNC_2(&VAR_4, ((void*)0),
    &VAR_1->mmap_pages[VAR_2], 1);
 if (VAR_3) {
  FUNC_4(VAR_1->vif->dev,
      "Unmap fail: ret: %d pending_idx: %d host_addr: %llx handle: 0x%x status: %d\n",
      VAR_3,
      VAR_2,
      VAR_4.host_addr,
      VAR_4.handle,
      VAR_4.status);
  FUNC_0();
 }
}
