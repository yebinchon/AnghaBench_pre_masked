
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct scb {int dummy; } ;
struct kmem_cache {int dummy; } ;
struct asd_seq_data {int tc_index_lock; } ;
struct asd_ha_struct {int scb_pool; struct asd_seq_data seq; } ;
struct TYPE_6__ {int size; int dma_handle; int vaddr; } ;
struct asd_ascb {int tc_index; TYPE_3__ dma_scb; TYPE_2__* scb; } ;
typedef int gfp_t ;
struct TYPE_4__ {int index; } ;
struct TYPE_5__ {TYPE_1__ header; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct asd_ha_struct*,struct asd_ascb*) ;
 int FUNC_2 (struct asd_seq_data*,struct asd_ascb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (struct kmem_cache*,struct asd_ascb*) ;
 struct asd_ascb* FUNC_7 (struct kmem_cache*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static struct asd_ascb *FUNC_10(struct asd_ha_struct *VAR_0,
           gfp_t VAR_1)
{
 extern struct kmem_cache *VAR_2;
 struct asd_seq_data *VAR_3 = &VAR_0->seq;
 struct asd_ascb *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_7(VAR_2, VAR_1);

 if (VAR_4) {
  VAR_4->dma_scb.size = sizeof(struct scb);
  VAR_4->dma_scb.vaddr = FUNC_5(VAR_0->scb_pool,
           VAR_1,
          &VAR_4->dma_scb.dma_handle);
  if (!VAR_4->dma_scb.vaddr) {
   FUNC_6(VAR_2, VAR_4);
   return ((void*)0);
  }
  FUNC_1(VAR_0, VAR_4);

  FUNC_8(&VAR_3->tc_index_lock, VAR_5);
  VAR_4->tc_index = FUNC_2(VAR_3, VAR_4);
  FUNC_9(&VAR_3->tc_index_lock, VAR_5);
  if (VAR_4->tc_index == -1)
   goto undo;

  VAR_4->scb->header.index = FUNC_3((u16)VAR_4->tc_index);
 }

 return VAR_4;
undo:
 FUNC_4(VAR_0->scb_pool, VAR_4->dma_scb.vaddr,
        VAR_4->dma_scb.dma_handle);
 FUNC_6(VAR_2, VAR_4);
 FUNC_0("no index for ascb\n");
 return ((void*)0);
}
