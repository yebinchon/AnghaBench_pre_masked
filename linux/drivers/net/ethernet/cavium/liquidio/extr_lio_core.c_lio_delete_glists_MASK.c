
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ octnic_gather ;
struct lio {int glist_entry_size; int tx_qsize; scalar_t__* glist; scalar_t__* glists_dma_base; scalar_t__* glists_virt_base; TYPE_1__* oct_dev; scalar_t__* glist_lock; } ;
struct TYPE_2__ {int num_iqs; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_1__*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__*) ;

void FUNC_3(struct lio *VAR_0)
{
 struct octnic_gather *VAR_1;
 int VAR_2;

 FUNC_0(VAR_0->glist_lock);
 VAR_0->glist_lock = ((void*)0);

 if (!VAR_0->glist)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->oct_dev->num_iqs; VAR_2++) {
  do {
   VAR_1 = (struct octnic_gather *)
       FUNC_2(&VAR_0->glist[VAR_2]);
   FUNC_0(VAR_1);
  } while (VAR_1);

  if (VAR_0->glists_virt_base && VAR_0->glists_virt_base[VAR_2] &&
      VAR_0->glists_dma_base && VAR_0->glists_dma_base[VAR_2]) {
   FUNC_1(VAR_0->oct_dev,
         VAR_0->glist_entry_size * VAR_0->tx_qsize,
         VAR_0->glists_virt_base[VAR_2],
         VAR_0->glists_dma_base[VAR_2]);
  }
 }

 FUNC_0(VAR_0->glists_virt_base);
 VAR_0->glists_virt_base = ((void*)0);

 FUNC_0(VAR_0->glists_dma_base);
 VAR_0->glists_dma_base = ((void*)0);

 FUNC_0(VAR_0->glist);
 VAR_0->glist = ((void*)0);
}
