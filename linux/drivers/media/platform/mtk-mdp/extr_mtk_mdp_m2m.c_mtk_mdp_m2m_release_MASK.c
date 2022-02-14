
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_mdp_dev {int lock; TYPE_1__* pdev; int ctx_num; int job_wq; } ;
struct mtk_mdp_ctx {int id; int list; int vpu; int fh; int ctrl_handler; int m2m_ctx; struct mtk_mdp_dev* mdp_dev; } ;
struct file {int private_data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 struct mtk_mdp_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mtk_mdp_ctx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_0)
{
 struct mtk_mdp_ctx *VAR_1 = FUNC_1(VAR_0->private_data);
 struct mtk_mdp_dev *VAR_2 = VAR_1->mdp_dev;

 FUNC_2(VAR_2->job_wq);
 FUNC_7(&VAR_2->lock);
 FUNC_12(VAR_1->m2m_ctx);
 FUNC_9(&VAR_1->ctrl_handler);
 FUNC_10(&VAR_1->fh);
 FUNC_11(&VAR_1->fh);
 FUNC_6(&VAR_1->vpu);
 VAR_2->ctx_num--;
 FUNC_4(&VAR_1->list);

 FUNC_5(0, "%s [%d]", FUNC_0(&VAR_2->pdev->dev), VAR_1->id);

 FUNC_8(&VAR_2->lock);
 FUNC_3(VAR_1);

 return 0;
}
