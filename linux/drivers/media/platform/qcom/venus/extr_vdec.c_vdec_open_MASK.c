
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m2m_ctx; int * ctrl_handler; } ;
struct venus_inst {int num_output_bufs; int m2m_dev; TYPE_1__ fh; int m2m_ctx; int ctrl_handler; int reconf_wait; scalar_t__ buf_count; int codec_state; int session_type; struct venus_core* core; int lock; int list; int internalbufs; int registeredbufs; int dpbbufs; } ;
struct venus_core {int dev_dec; int vdev_dec; } ;
struct file {TYPE_1__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct venus_inst*,int *) ;
 int FUNC_4 (struct venus_inst*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct venus_inst*) ;
 struct venus_inst* FUNC_7 (int,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 int FUNC_13 (int ,struct venus_inst*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct venus_inst*) ;
 int FUNC_17 (struct venus_inst*) ;
 int VAR_5 ;
 int FUNC_18 (struct venus_inst*) ;
 int VAR_6 ;
 int FUNC_19 (struct venus_inst*) ;
 struct venus_core* FUNC_20 (struct file*) ;

__attribute__((used)) static int FUNC_21(struct file *VAR_7)
{
 struct venus_core *VAR_8 = FUNC_20(VAR_7);
 struct venus_inst *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_0(&VAR_9->dpbbufs);
 FUNC_0(&VAR_9->registeredbufs);
 FUNC_0(&VAR_9->internalbufs);
 FUNC_0(&VAR_9->list);
 FUNC_8(&VAR_9->lock);

 VAR_9->core = VAR_8;
 VAR_9->session_type = VAR_3;
 VAR_9->num_output_bufs = 1;
 VAR_9->codec_state = VAR_2;
 VAR_9->buf_count = 0;
 FUNC_5(&VAR_9->reconf_wait);
 FUNC_19(VAR_9);

 VAR_10 = FUNC_9(VAR_8->dev_dec);
 if (VAR_10 < 0)
  goto err_free_inst;

 VAR_10 = FUNC_17(VAR_9);
 if (VAR_10)
  goto err_put_sync;

 VAR_10 = FUNC_3(VAR_9, &VAR_5);
 if (VAR_10)
  goto err_ctrl_deinit;

 FUNC_18(VAR_9);





 VAR_9->m2m_dev = FUNC_14(&VAR_6);
 if (FUNC_1(VAR_9->m2m_dev)) {
  VAR_10 = FUNC_2(VAR_9->m2m_dev);
  goto err_session_destroy;
 }

 VAR_9->m2m_ctx = FUNC_13(VAR_9->m2m_dev, VAR_9, VAR_4);
 if (FUNC_1(VAR_9->m2m_ctx)) {
  VAR_10 = FUNC_2(VAR_9->m2m_ctx);
  goto err_m2m_release;
 }

 FUNC_12(&VAR_9->fh, VAR_8->vdev_dec);

 VAR_9->fh.ctrl_handler = &VAR_9->ctrl_handler;
 FUNC_11(&VAR_9->fh);
 VAR_9->fh.m2m_ctx = VAR_9->m2m_ctx;
 VAR_7->private_data = &VAR_9->fh;

 return 0;

err_m2m_release:
 FUNC_15(VAR_9->m2m_dev);
err_session_destroy:
 FUNC_4(VAR_9);
err_ctrl_deinit:
 FUNC_16(VAR_9);
err_put_sync:
 FUNC_10(VAR_8->dev_dec);
err_free_inst:
 FUNC_6(VAR_9);
 return VAR_10;
}
