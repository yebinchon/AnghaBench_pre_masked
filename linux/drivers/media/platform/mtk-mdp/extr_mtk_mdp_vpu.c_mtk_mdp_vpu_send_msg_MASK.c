
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_mdp_vpu {int pdev; } ;
struct mtk_mdp_ctx {TYPE_2__* mdp_dev; int id; } ;
typedef enum ipi_id { ____Placeholder_ipi_id } ipi_id ;
struct TYPE_4__ {int vpulock; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,void*,int) ;
 struct mtk_mdp_ctx* FUNC_5 (struct mtk_mdp_vpu*) ;

__attribute__((used)) static int FUNC_6(void *VAR_1, int VAR_2, struct mtk_mdp_vpu *VAR_3,
    int VAR_4)
{
 struct mtk_mdp_ctx *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;

 if (!VAR_3->pdev) {
  FUNC_1(1, "[%d]:vpu pdev is NULL", VAR_5->id);
  return -VAR_0;
 }

 FUNC_2(&VAR_5->mdp_dev->vpulock);
 VAR_6 = FUNC_4(VAR_3->pdev, (enum ipi_id)VAR_4, VAR_1, VAR_2);
 if (VAR_6)
  FUNC_0(&VAR_5->mdp_dev->pdev->dev,
   "vpu_ipi_send fail status %d\n", VAR_6);
 FUNC_3(&VAR_5->mdp_dev->vpulock);

 return VAR_6;
}
