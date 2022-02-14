
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_dev {TYPE_1__* pdev; } ;
struct qed_chain {scalar_t__ page_cnt; void* p_virt_addr; int p_phys_addr; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct qed_chain*,void*,int ) ;
 int FUNC_2 (struct qed_chain*,void*,void*,int ) ;
 int FUNC_3 (struct qed_chain*) ;

__attribute__((used)) static int
FUNC_4(struct qed_dev *VAR_3, struct qed_chain *VAR_4)
{
 void *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 dma_addr_t VAR_7 = 0;
 u32 VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->page_cnt; VAR_8++) {
  VAR_5 = FUNC_0(&VAR_3->pdev->dev,
         VAR_2,
         &VAR_7, VAR_1);
  if (!VAR_5)
   return -VAR_0;

  if (VAR_8 == 0) {
   FUNC_1(VAR_4, VAR_5, VAR_7);
   FUNC_3(VAR_4);
  } else {
   FUNC_2(VAR_4, VAR_6,
           VAR_5, VAR_7);
  }

  VAR_6 = VAR_5;
 }



 FUNC_2(VAR_4, VAR_6,
         VAR_4->p_virt_addr,
         VAR_4->p_phys_addr);

 return 0;
}
