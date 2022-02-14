
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octnic_gather {int list; scalar_t__ sg_dma_ptr; scalar_t__ sg; } ;
struct octeon_device {TYPE_1__* pci_dev; } ;
struct lio {int glist_entry_size; int tx_qsize; int * glist; scalar_t__* glists_dma_base; scalar_t__* glists_virt_base; int * glist_lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *) ;
 struct octnic_gather* FUNC_6 (int,int ) ;
 struct octnic_gather* FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct lio*) ;
 scalar_t__ FUNC_9 (struct octeon_device*,int,scalar_t__*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;

int FUNC_12(struct octeon_device *VAR_4, struct lio *VAR_5, int VAR_6)
{
 struct octnic_gather *VAR_7;
 int VAR_8, VAR_9;

 VAR_5->glist_lock =
     FUNC_4(VAR_6, sizeof(*VAR_5->glist_lock), VAR_1);
 if (!VAR_5->glist_lock)
  return -VAR_0;

 VAR_5->glist =
     FUNC_4(VAR_6, sizeof(*VAR_5->glist), VAR_1);
 if (!VAR_5->glist) {
  FUNC_5(VAR_5->glist_lock);
  VAR_5->glist_lock = ((void*)0);
  return -VAR_0;
 }

 VAR_5->glist_entry_size =
  FUNC_2((FUNC_1(VAR_2) >> 2) * VAR_3);




 VAR_5->glists_virt_base = FUNC_4(VAR_6, sizeof(*VAR_5->glists_virt_base),
     VAR_1);
 VAR_5->glists_dma_base = FUNC_4(VAR_6, sizeof(*VAR_5->glists_dma_base),
           VAR_1);

 if (!VAR_5->glists_virt_base || !VAR_5->glists_dma_base) {
  FUNC_8(VAR_5);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  int VAR_10 = FUNC_3(&VAR_4->pci_dev->dev);

  FUNC_11(&VAR_5->glist_lock[VAR_8]);

  FUNC_0(&VAR_5->glist[VAR_8]);

  VAR_5->glists_virt_base[VAR_8] =
   FUNC_9(VAR_4,
          VAR_5->glist_entry_size * VAR_5->tx_qsize,
          &VAR_5->glists_dma_base[VAR_8]);

  if (!VAR_5->glists_virt_base[VAR_8]) {
   FUNC_8(VAR_5);
   return -VAR_0;
  }

  for (VAR_9 = 0; VAR_9 < VAR_5->tx_qsize; VAR_9++) {
   VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1,
      VAR_10);
   if (!VAR_7)
    VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
   if (!VAR_7)
    break;

   VAR_7->sg = VAR_5->glists_virt_base[VAR_8] +
    (VAR_9 * VAR_5->glist_entry_size);

   VAR_7->sg_dma_ptr = VAR_5->glists_dma_base[VAR_8] +
     (VAR_9 * VAR_5->glist_entry_size);

   FUNC_10(&VAR_7->list, &VAR_5->glist[VAR_8]);
  }

  if (VAR_9 != VAR_5->tx_qsize) {
   FUNC_8(VAR_5);
   return -VAR_0;
  }
 }

 return 0;
}
