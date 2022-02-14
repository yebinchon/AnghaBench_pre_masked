
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct qed_dev {TYPE_1__* pdev; } ;
struct qed_chain_next {int next_phys; void* next_virt; } ;
struct qed_chain {scalar_t__ elem_size; scalar_t__ usable_per_page; scalar_t__ page_cnt; int p_phys_addr; void* p_virt_addr; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct qed_dev *VAR_1,
        struct qed_chain *VAR_2)
{
 void *VAR_3 = VAR_2->p_virt_addr, *VAR_4 = ((void*)0);
 dma_addr_t VAR_5 = VAR_2->p_phys_addr, VAR_6 = 0;
 struct qed_chain_next *VAR_7;
 u32 VAR_8, VAR_9;

 if (!VAR_3)
  return;

 VAR_8 = VAR_2->elem_size * VAR_2->usable_per_page;

 for (VAR_9 = 0; VAR_9 < VAR_2->page_cnt; VAR_9++) {
  if (!VAR_3)
   break;

  VAR_7 = (struct qed_chain_next *)((u8 *)VAR_3 + VAR_8);
  VAR_4 = VAR_7->next_virt;
  VAR_6 = FUNC_0(VAR_7->next_phys);

  FUNC_1(&VAR_1->pdev->dev,
      VAR_0, VAR_3, VAR_5);

  VAR_3 = VAR_4;
  VAR_5 = VAR_6;
 }
}
