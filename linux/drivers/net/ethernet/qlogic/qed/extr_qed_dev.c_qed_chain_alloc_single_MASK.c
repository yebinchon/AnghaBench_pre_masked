
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_dev {TYPE_1__* pdev; } ;
struct qed_chain {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (struct qed_chain*,void*,int ) ;
 int FUNC_2 (struct qed_chain*) ;

__attribute__((used)) static int
FUNC_3(struct qed_dev *VAR_3, struct qed_chain *VAR_4)
{
 dma_addr_t VAR_5 = 0;
 void *VAR_6 = ((void*)0);

 VAR_6 = FUNC_0(&VAR_3->pdev->dev,
        VAR_2, &VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_6, VAR_5);
 FUNC_2(VAR_4);

 return 0;
}
