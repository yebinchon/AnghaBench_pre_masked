
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int error; } ;
struct TYPE_7__ {void* global_alpha; void* vflip; void* hflip; void* rotate; } ;
struct mtk_mdp_ctx {int ctrls_rdy; TYPE_3__* mdp_dev; TYPE_4__ ctrl_handler; TYPE_1__ ctrls; } ;
struct TYPE_9__ {TYPE_2__* pdev; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 void* FUNC_3 (TYPE_4__*,int *,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_mdp_ctx *VAR_6)
{
 FUNC_2(&VAR_6->ctrl_handler, VAR_0);

 VAR_6->ctrls.rotate = FUNC_3(&VAR_6->ctrl_handler,
   &VAR_5, VAR_3, 0, 270, 90, 0);
 VAR_6->ctrls.hflip = FUNC_3(&VAR_6->ctrl_handler,
          &VAR_5,
          VAR_2,
          0, 1, 1, 0);
 VAR_6->ctrls.vflip = FUNC_3(&VAR_6->ctrl_handler,
          &VAR_5,
          VAR_4,
          0, 1, 1, 0);
 VAR_6->ctrls.global_alpha = FUNC_3(&VAR_6->ctrl_handler,
          &VAR_5,
          VAR_1,
          0, 255, 1, 0);
 VAR_6->ctrls_rdy = VAR_6->ctrl_handler.error == 0;

 if (VAR_6->ctrl_handler.error) {
  int VAR_7 = VAR_6->ctrl_handler.error;

  FUNC_1(&VAR_6->ctrl_handler);
  FUNC_0(&VAR_6->mdp_dev->pdev->dev,
   "Failed to create control handlers\n");
  return VAR_7;
 }

 return 0;
}
