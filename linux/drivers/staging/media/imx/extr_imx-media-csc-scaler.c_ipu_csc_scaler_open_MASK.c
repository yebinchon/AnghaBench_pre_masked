
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ipu_csc_scaler_priv {int dev; int m2m_dev; } ;
struct TYPE_5__ {int m2m_ctx; int * ctrl_handler; } ;
struct ipu_csc_scaler_ctx {TYPE_1__ fh; void** q_data; int ctrl_hdlr; struct ipu_csc_scaler_priv* priv; int rot_mode; } ;
struct file {TYPE_1__* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,char*,struct ipu_csc_scaler_ctx*,int ) ;
 int FUNC_3 (struct ipu_csc_scaler_ctx*) ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ipu_csc_scaler_ctx*) ;
 struct ipu_csc_scaler_ctx* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,struct ipu_csc_scaler_ctx*,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct file*) ;
 struct ipu_csc_scaler_priv* FUNC_13 (struct file*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_7)
{
 struct ipu_csc_scaler_priv *VAR_8 = FUNC_13(VAR_7);
 struct ipu_csc_scaler_ctx *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->rot_mode = VAR_2;

 FUNC_9(&VAR_9->fh, FUNC_12(VAR_7));
 VAR_7->private_data = &VAR_9->fh;
 FUNC_6(&VAR_9->fh);
 VAR_9->priv = VAR_8;

 VAR_9->fh.m2m_ctx = FUNC_10(VAR_8->m2m_dev, VAR_9,
         &VAR_6);
 if (FUNC_0(VAR_9->fh.m2m_ctx)) {
  VAR_10 = FUNC_1(VAR_9->fh.m2m_ctx);
  goto err_ctx;
 }

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10)
  goto err_ctrls;

 VAR_9->fh.ctrl_handler = &VAR_9->ctrl_hdlr;

 VAR_9->q_data[VAR_4] = VAR_5;
 VAR_9->q_data[VAR_3] = VAR_5;

 FUNC_2(VAR_8->dev, "Created instance %p, m2m_ctx: %p\n", VAR_9,
  VAR_9->fh.m2m_ctx);

 return 0;

err_ctrls:
 FUNC_11(VAR_9->fh.m2m_ctx);
err_ctx:
 FUNC_7(&VAR_9->fh);
 FUNC_8(&VAR_9->fh);
 FUNC_4(VAR_9);
 return VAR_10;
}
