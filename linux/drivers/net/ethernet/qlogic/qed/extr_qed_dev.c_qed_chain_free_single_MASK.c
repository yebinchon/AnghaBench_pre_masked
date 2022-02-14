
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_dev {TYPE_1__* pdev; } ;
struct qed_chain {int p_phys_addr; int p_virt_addr; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct qed_dev *VAR_1,
      struct qed_chain *VAR_2)
{
 if (!VAR_2->p_virt_addr)
  return;

 FUNC_0(&VAR_1->pdev->dev,
     VAR_0,
     VAR_2->p_virt_addr, VAR_2->p_phys_addr);
}
