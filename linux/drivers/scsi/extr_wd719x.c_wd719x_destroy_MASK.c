
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wd719x_host_param {int dummy; } ;
struct wd719x {int fw_size; TYPE_1__* pdev; int * params; int params_phys; int * hash_virt; int hash_phys; int * fw_virt; int fw_phys; int active_scbs; } ;
struct TYPE_2__ {int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int *,int ) ;
 int FUNC_3 (int ,struct wd719x*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct wd719x*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_6 (struct wd719x*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct wd719x *VAR_4)
{

 if (FUNC_5(VAR_4, VAR_0, 0, 0, 0, 0,
         VAR_3))
  FUNC_1(&VAR_4->pdev->dev, "RISC sleep command failed\n");

 FUNC_6(VAR_4, VAR_2, 0);

 FUNC_0(!FUNC_4(&VAR_4->active_scbs));


 FUNC_2(&VAR_4->pdev->dev, VAR_4->fw_size, VAR_4->fw_virt,
     VAR_4->fw_phys);
 VAR_4->fw_virt = ((void*)0);
 FUNC_2(&VAR_4->pdev->dev, VAR_1, VAR_4->hash_virt,
     VAR_4->hash_phys);
 VAR_4->hash_virt = ((void*)0);
 FUNC_2(&VAR_4->pdev->dev, sizeof(struct wd719x_host_param),
     VAR_4->params, VAR_4->params_phys);
 VAR_4->params = ((void*)0);
 FUNC_3(VAR_4->pdev->irq, VAR_4);
}
