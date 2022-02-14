
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file {TYPE_2__* private_data; } ;
struct TYPE_6__ {int refcnt; int m2m_dev; int vdev; } ;
struct bdisp_dev {int lock; int dev; int state; TYPE_1__ m2m; } ;
struct TYPE_7__ {int m2m_ctx; int * ctrl_handler; } ;
struct bdisp_ctx {TYPE_2__ fh; void* dst; void* src; int ctrl_handler; struct bdisp_dev* bdisp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct bdisp_ctx*) ;
 int FUNC_3 (struct bdisp_ctx*) ;
 void* VAR_4 ;
 scalar_t__ FUNC_4 (struct bdisp_ctx*) ;
 int FUNC_5 (struct bdisp_ctx*) ;
 int FUNC_6 (int ,char*,struct bdisp_ctx*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct bdisp_ctx*) ;
 struct bdisp_ctx* FUNC_9 (int,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_5 ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (int ,struct bdisp_ctx*,int ) ;
 struct bdisp_dev* FUNC_18 (struct file*) ;

__attribute__((used)) static int FUNC_19(struct file *VAR_6)
{
 struct bdisp_dev *VAR_7 = FUNC_18(VAR_6);
 struct bdisp_ctx *VAR_8 = ((void*)0);
 int VAR_9;

 if (FUNC_10(&VAR_7->lock))
  return -VAR_1;


 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto unlock;
 }
 VAR_8->bdisp_dev = VAR_7;

 if (FUNC_4(VAR_8)) {
  FUNC_7(VAR_7->dev, "no memory for nodes\n");
  VAR_9 = -VAR_0;
  goto mem_ctx;
 }

 FUNC_16(&VAR_8->fh, VAR_7->m2m.vdev);

 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9) {
  FUNC_7(VAR_7->dev, "Failed to create control\n");
  goto error_fh;
 }


 VAR_8->fh.ctrl_handler = &VAR_8->ctrl_handler;
 VAR_6->private_data = &VAR_8->fh;
 FUNC_13(&VAR_8->fh);


 VAR_8->src = VAR_4;
 VAR_8->dst = VAR_4;


 VAR_8->fh.m2m_ctx = FUNC_17(VAR_7->m2m.m2m_dev, VAR_8,
         VAR_5);
 if (FUNC_0(VAR_8->fh.m2m_ctx)) {
  FUNC_7(VAR_7->dev, "Failed to initialize m2m context\n");
  VAR_9 = FUNC_1(VAR_8->fh.m2m_ctx);
  goto error_ctrls;
 }

 VAR_7->m2m.refcnt++;
 FUNC_12(VAR_3, &VAR_7->state);

 FUNC_6(VAR_7->dev, "driver opened, ctx = 0x%p\n", VAR_8);

 FUNC_11(&VAR_7->lock);

 return 0;

error_ctrls:
 FUNC_3(VAR_8);
 FUNC_14(&VAR_8->fh);
error_fh:
 FUNC_15(&VAR_8->fh);
 FUNC_5(VAR_8);
mem_ctx:
 FUNC_8(VAR_8);
unlock:
 FUNC_11(&VAR_7->lock);

 return VAR_9;
}
