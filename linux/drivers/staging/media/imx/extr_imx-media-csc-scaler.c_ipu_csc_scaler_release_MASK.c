
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ipu_csc_scaler_priv {int dev; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct ipu_csc_scaler_ctx {TYPE_1__ fh; } ;
struct file {int private_data; } ;


 int FUNC_0 (int ,char*,struct ipu_csc_scaler_ctx*) ;
 struct ipu_csc_scaler_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct ipu_csc_scaler_ctx*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 struct ipu_csc_scaler_priv* FUNC_6 (struct file*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct ipu_csc_scaler_priv *VAR_1 = FUNC_6(VAR_0);
 struct ipu_csc_scaler_ctx *VAR_2 = FUNC_1(VAR_0->private_data);

 FUNC_0(VAR_1->dev, "Releasing instance %p\n", VAR_2);

 FUNC_5(VAR_2->fh.m2m_ctx);
 FUNC_3(&VAR_2->fh);
 FUNC_4(&VAR_2->fh);
 FUNC_2(VAR_2);

 return 0;
}
