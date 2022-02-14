
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m2m_ctx; int * ctrl_handler; } ;
struct venus_inst {int m2m_dev; TYPE_1__ fh; int m2m_ctx; int ctrl_handler; int session_type; struct venus_core* core; int lock; int list; int internalbufs; int registeredbufs; int dpbbufs; } ;
struct venus_core {int dev_enc; int vdev_enc; } ;
struct file {TYPE_1__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct venus_inst*,int *) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (struct venus_inst*) ;
 struct venus_inst* FUNC_6 (int,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (int ,struct venus_inst*,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct venus_inst*) ;
 int FUNC_16 (struct venus_inst*) ;
 int VAR_4 ;
 int FUNC_17 (struct venus_inst*) ;
 int VAR_5 ;
 int FUNC_18 (struct venus_inst*) ;
 struct venus_core* FUNC_19 (struct file*) ;

__attribute__((used)) static int FUNC_20(struct file *VAR_6)
{
 struct venus_core *VAR_7 = FUNC_19(VAR_6);
 struct venus_inst *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_0(&VAR_8->dpbbufs);
 FUNC_0(&VAR_8->registeredbufs);
 FUNC_0(&VAR_8->internalbufs);
 FUNC_0(&VAR_8->list);
 FUNC_7(&VAR_8->lock);

 VAR_8->core = VAR_7;
 VAR_8->session_type = VAR_2;

 FUNC_18(VAR_8);

 VAR_9 = FUNC_8(VAR_7->dev_enc);
 if (VAR_9 < 0)
  goto err_free_inst;

 VAR_9 = FUNC_16(VAR_8);
 if (VAR_9)
  goto err_put_sync;

 VAR_9 = FUNC_3(VAR_8, &VAR_4);
 if (VAR_9)
  goto err_ctrl_deinit;

 FUNC_17(VAR_8);





 VAR_8->m2m_dev = FUNC_13(&VAR_5);
 if (FUNC_1(VAR_8->m2m_dev)) {
  VAR_9 = FUNC_2(VAR_8->m2m_dev);
  goto err_session_destroy;
 }

 VAR_8->m2m_ctx = FUNC_12(VAR_8->m2m_dev, VAR_8, VAR_3);
 if (FUNC_1(VAR_8->m2m_ctx)) {
  VAR_9 = FUNC_2(VAR_8->m2m_ctx);
  goto err_m2m_release;
 }

 FUNC_11(&VAR_8->fh, VAR_7->vdev_enc);

 VAR_8->fh.ctrl_handler = &VAR_8->ctrl_handler;
 FUNC_10(&VAR_8->fh);
 VAR_8->fh.m2m_ctx = VAR_8->m2m_ctx;
 VAR_6->private_data = &VAR_8->fh;

 return 0;

err_m2m_release:
 FUNC_14(VAR_8->m2m_dev);
err_session_destroy:
 FUNC_4(VAR_8);
err_ctrl_deinit:
 FUNC_15(VAR_8);
err_put_sync:
 FUNC_9(VAR_7->dev_enc);
err_free_inst:
 FUNC_5(VAR_8);
 return VAR_9;
}
