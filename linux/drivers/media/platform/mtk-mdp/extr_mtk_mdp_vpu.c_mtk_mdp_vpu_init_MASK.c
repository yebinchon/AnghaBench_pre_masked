
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_mdp_vpu {scalar_t__ failure; int pdev; } ;
struct mtk_mdp_ctx {TYPE_1__* mdp_dev; } ;
struct mdp_ipi_init {unsigned long ap_inst; int ipi_id; int msg_id; } ;
typedef int msg ;
struct TYPE_2__ {int vpu_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int,struct mtk_mdp_vpu*,int ) ;
 struct mtk_mdp_ctx* FUNC_1 (struct mtk_mdp_vpu*) ;

int FUNC_2(struct mtk_mdp_vpu *VAR_3)
{
 int VAR_4;
 struct mdp_ipi_init VAR_5;
 struct mtk_mdp_ctx *VAR_6 = FUNC_1(VAR_3);

 VAR_3->pdev = VAR_6->mdp_dev->vpu_dev;

 VAR_5.msg_id = VAR_0;
 VAR_5.ipi_id = VAR_2;
 VAR_5.ap_inst = (unsigned long)VAR_3;
 VAR_4 = FUNC_0((void *)&VAR_5, sizeof(VAR_5), VAR_3, VAR_2);
 if (!VAR_4 && VAR_3->failure)
  VAR_4 = -VAR_1;

 return VAR_4;
}
