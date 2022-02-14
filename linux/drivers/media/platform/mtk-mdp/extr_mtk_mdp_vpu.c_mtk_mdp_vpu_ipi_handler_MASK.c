
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_mdp_vpu {int failure; } ;
struct mtk_mdp_ctx {int id; TYPE_2__* mdp_dev; } ;
struct mdp_ipi_comm_ack {int status; scalar_t__ ap_inst; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;





 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int ,char*,int ,unsigned int,int ) ;
 int FUNC_2 (void*) ;
 struct mtk_mdp_ctx* FUNC_3 (struct mtk_mdp_vpu*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, unsigned int VAR_1, void *VAR_2)
{
 unsigned int VAR_3 = *(unsigned int *)VAR_0;
 struct mdp_ipi_comm_ack *VAR_4 = (struct mdp_ipi_comm_ack *)VAR_0;
 struct mtk_mdp_vpu *VAR_5 = (struct mtk_mdp_vpu *)
     (unsigned long)VAR_4->ap_inst;
 struct mtk_mdp_ctx *VAR_6;

 VAR_5->failure = VAR_4->status;
 if (!VAR_5->failure) {
  switch (VAR_3) {
  case 129:
   FUNC_2(VAR_0);
   break;
  case 130:
  case 128:
   break;
  default:
   VAR_6 = FUNC_3(VAR_5);
   FUNC_0(&VAR_6->mdp_dev->pdev->dev,
    "handle unknown ipi msg:0x%x\n",
    VAR_3);
   break;
  }
 } else {
  VAR_6 = FUNC_3(VAR_5);
  FUNC_1(0, "[%d]:msg 0x%x, failure:%d", VAR_6->id,
       VAR_3, VAR_5->failure);
 }
}
