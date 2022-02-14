
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qed_dev {TYPE_1__* pdev; } ;
struct qed_chain_ext_pbl {int p_pbl_phys; int * p_pbl_virt; } ;
struct TYPE_4__ {void** pp_virt_addr_tbl; } ;
struct qed_chain {int page_cnt; int b_external_pbl; TYPE_2__ pbl; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct qed_chain*,void*,int ) ;
 int FUNC_2 (struct qed_chain*,int *,int ,void**) ;
 int FUNC_3 (struct qed_chain*) ;
 void** FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct qed_dev *VAR_4,
      struct qed_chain *VAR_5,
      struct qed_chain_ext_pbl *VAR_6)
{
 u32 VAR_7 = VAR_5->page_cnt, VAR_8, VAR_9;
 dma_addr_t VAR_10 = 0, VAR_11 = 0;
 void **VAR_12 = ((void*)0);
 u8 *VAR_13 = ((void*)0);
 void *VAR_14 = ((void*)0);

 VAR_8 = VAR_7 * sizeof(*VAR_12);
 VAR_12 = FUNC_4(VAR_8);
 if (!VAR_12)
  return -VAR_0;







 VAR_8 = VAR_7 * VAR_3;

 if (!VAR_6) {
  VAR_13 = FUNC_0(&VAR_4->pdev->dev,
      VAR_8, &VAR_11, VAR_1);
 } else {
  VAR_13 = VAR_6->p_pbl_virt;
  VAR_11 = VAR_6->p_pbl_phys;
  VAR_5->b_external_pbl = 1;
 }

 FUNC_2(VAR_5, VAR_13, VAR_11,
          VAR_12);
 if (!VAR_13)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_14 = FUNC_0(&VAR_4->pdev->dev,
         VAR_2,
         &VAR_10, VAR_1);
  if (!VAR_14)
   return -VAR_0;

  if (VAR_9 == 0) {
   FUNC_1(VAR_5, VAR_14, VAR_10);
   FUNC_3(VAR_5);
  }


  *(dma_addr_t *)VAR_13 = VAR_10;

  VAR_5->pbl.pp_virt_addr_tbl[VAR_9] = VAR_14;

  VAR_13 += VAR_3;
 }

 return 0;
}
