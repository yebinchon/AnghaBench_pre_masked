
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int count; } ;
struct TYPE_4__ {TYPE_1__ cbs; } ;
struct nic {unsigned int cbs_avail; struct cb* cbs; struct cb* cb_to_clean; struct cb* cb_to_send; struct cb* cb_to_use; scalar_t__ cbs_dma_addr; int cbs_pool; int cuc_cmd; TYPE_2__ params; } ;
struct cb {int link; scalar_t__ dma_addr; struct cb* prev; struct cb* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 struct cb* FUNC_1 (int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct nic *VAR_3)
{
 struct cb *VAR_4;
 unsigned int VAR_5, VAR_6 = VAR_3->params.cbs.count;

 VAR_3->cuc_cmd = VAR_2;
 VAR_3->cb_to_use = VAR_3->cb_to_send = VAR_3->cb_to_clean = ((void*)0);
 VAR_3->cbs_avail = 0;

 VAR_3->cbs = FUNC_1(VAR_3->cbs_pool, VAR_1,
       &VAR_3->cbs_dma_addr);
 if (!VAR_3->cbs)
  return -VAR_0;

 for (VAR_4 = VAR_3->cbs, VAR_5 = 0; VAR_5 < VAR_6; VAR_4++, VAR_5++) {
  VAR_4->next = (VAR_5 + 1 < VAR_6) ? VAR_4 + 1 : VAR_3->cbs;
  VAR_4->prev = (VAR_5 == 0) ? VAR_3->cbs + VAR_6 - 1 : VAR_4 - 1;

  VAR_4->dma_addr = VAR_3->cbs_dma_addr + VAR_5 * sizeof(struct cb);
  VAR_4->link = FUNC_0(VAR_3->cbs_dma_addr +
   ((VAR_5+1) % VAR_6) * sizeof(struct cb));
 }

 VAR_3->cb_to_use = VAR_3->cb_to_send = VAR_3->cb_to_clean = VAR_3->cbs;
 VAR_3->cbs_avail = VAR_6;

 return 0;
}
