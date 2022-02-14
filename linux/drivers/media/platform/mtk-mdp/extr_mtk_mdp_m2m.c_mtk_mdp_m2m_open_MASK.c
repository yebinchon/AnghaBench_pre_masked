
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct mtk_mdp_dev {int lock; int ctx_num; TYPE_5__* pdev; int ctx_list; int vpu_dev; int m2m_dev; int id_counter; } ;
struct TYPE_6__ {int m2m_ctx; int * ctrl_handler; } ;
struct mtk_mdp_ctx {TYPE_1__ fh; int ctrl_handler; int m2m_ctx; scalar_t__ id; int list; int work; struct mtk_mdp_dev* mdp_dev; int slock; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct mtk_mdp_ctx*) ;
 struct mtk_mdp_ctx* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct mtk_mdp_ctx*) ;
 int FUNC_10 (int ,char*,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct mtk_mdp_ctx*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,struct video_device*) ;
 int FUNC_21 (int ,struct mtk_mdp_ctx*,int ) ;
 int FUNC_22 (int ) ;
 struct video_device* FUNC_23 (struct file*) ;
 struct mtk_mdp_dev* FUNC_24 (struct file*) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int FUNC_26(struct file *VAR_5)
{
 struct mtk_mdp_dev *VAR_6 = FUNC_24(VAR_5);
 struct video_device *VAR_7 = FUNC_23(VAR_5);
 struct mtk_mdp_ctx *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_8 = FUNC_7(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 if (FUNC_14(&VAR_6->lock)) {
  VAR_9 = -VAR_1;
  goto err_lock;
 }

 FUNC_13(&VAR_8->slock);
 VAR_8->id = VAR_6->id_counter++;
 FUNC_20(&VAR_8->fh, VAR_7);
 VAR_5->private_data = &VAR_8->fh;
 VAR_9 = FUNC_9(VAR_8);
 if (VAR_9)
  goto error_ctrls;


 VAR_8->fh.ctrl_handler = &VAR_8->ctrl_handler;
 FUNC_17(&VAR_8->fh);
 FUNC_0(&VAR_8->list);

 VAR_8->mdp_dev = VAR_6;
 FUNC_11(VAR_8);

 FUNC_1(&VAR_8->work, VAR_4);
 VAR_8->m2m_ctx = FUNC_21(VAR_6->m2m_dev, VAR_8,
      VAR_3);
 if (FUNC_2(VAR_8->m2m_ctx)) {
  FUNC_4(&VAR_6->pdev->dev, "Failed to initialize m2m context");
  VAR_9 = FUNC_3(VAR_8->m2m_ctx);
  goto error_m2m_ctx;
 }
 VAR_8->fh.m2m_ctx = VAR_8->m2m_ctx;
 if (VAR_6->ctx_num++ == 0) {
  VAR_9 = FUNC_25(VAR_6->vpu_dev);
  if (VAR_9 < 0) {
   FUNC_4(&VAR_6->pdev->dev,
    "vpu_load_firmware failed %d\n", VAR_9);
   goto err_load_vpu;
  }

  VAR_9 = FUNC_12(VAR_6->pdev);
  if (VAR_9 < 0) {
   FUNC_4(&VAR_6->pdev->dev,
    "mdp_vpu register failed %d\n", VAR_9);
   goto err_load_vpu;
  }
 }

 FUNC_8(&VAR_8->list, &VAR_6->ctx_list);
 FUNC_15(&VAR_6->lock);

 FUNC_10(0, "%s [%d]", FUNC_5(&VAR_6->pdev->dev), VAR_8->id);

 return 0;

err_load_vpu:
 VAR_6->ctx_num--;
 FUNC_22(VAR_8->m2m_ctx);
error_m2m_ctx:
 FUNC_16(&VAR_8->ctrl_handler);
error_ctrls:
 FUNC_18(&VAR_8->fh);
 FUNC_19(&VAR_8->fh);
 FUNC_15(&VAR_6->lock);
err_lock:
 FUNC_6(VAR_8);

 return VAR_9;
}
