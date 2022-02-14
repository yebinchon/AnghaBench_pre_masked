
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void u8 ;
typedef size_t u32 ;
struct qed_dev {TYPE_1__* pdev; } ;
struct TYPE_6__ {void** pp_virt_addr_tbl; } ;
struct TYPE_5__ {void* p_virt_table; int p_phys_table; } ;
struct qed_chain {size_t page_cnt; TYPE_3__ pbl; TYPE_2__ pbl_sp; int b_external_pbl; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,size_t,void*,int ) ;
 int FUNC_1 (void**) ;

__attribute__((used)) static void FUNC_2(struct qed_dev *VAR_2, struct qed_chain *VAR_3)
{
 void **VAR_4 = VAR_3->pbl.pp_virt_addr_tbl;
 u32 VAR_5 = VAR_3->page_cnt, VAR_6, VAR_7;
 u8 *VAR_8 = VAR_3->pbl_sp.p_virt_table;

 if (!VAR_4)
  return;

 if (!VAR_8)
  goto out;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  if (!VAR_4[VAR_6])
   break;

  FUNC_0(&VAR_2->pdev->dev,
      VAR_0,
      VAR_4[VAR_6],
      *(dma_addr_t *)VAR_8);

  VAR_8 += VAR_1;
 }

 VAR_7 = VAR_5 * VAR_1;

 if (!VAR_3->b_external_pbl)
  FUNC_0(&VAR_2->pdev->dev,
      VAR_7,
      VAR_3->pbl_sp.p_virt_table,
      VAR_3->pbl_sp.p_phys_table);
out:
 FUNC_1(VAR_3->pbl.pp_virt_addr_tbl);
 VAR_3->pbl.pp_virt_addr_tbl = ((void*)0);
}
