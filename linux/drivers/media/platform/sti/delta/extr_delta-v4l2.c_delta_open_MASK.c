
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct file {TYPE_1__* private_data; } ;
struct delta_dev {int instance_id; int lock; int dev; scalar_t__ clk_flash_promip; scalar_t__ clk_st231; int m2m_dev; } ;
struct TYPE_5__ {int m2m_ctx; } ;
struct delta_ctx {TYPE_1__ fh; int name; int dts; int state; int lock; int run_work; struct delta_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int ,char*,int ,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct delta_ctx*) ;
 struct delta_ctx* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 int FUNC_13 (struct delta_ctx*) ;
 int FUNC_14 (int ,int,char*,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 int FUNC_19 (int ,struct delta_ctx*,int ) ;
 int FUNC_20 (struct file*) ;
 struct delta_dev* FUNC_21 (struct file*) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_6)
{
 struct delta_dev *VAR_7 = FUNC_21(VAR_6);
 struct delta_ctx *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 FUNC_11(&VAR_7->lock);

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_3);
 if (!VAR_8) {
  VAR_9 = -VAR_2;
  goto err;
 }
 VAR_8->dev = VAR_7;

 FUNC_18(&VAR_8->fh, FUNC_20(VAR_6));
 VAR_6->private_data = &VAR_8->fh;
 FUNC_15(&VAR_8->fh);

 FUNC_1(&VAR_8->run_work, VAR_4);
 FUNC_10(&VAR_8->lock);

 VAR_8->fh.m2m_ctx = FUNC_19(VAR_7->m2m_dev, VAR_8,
         VAR_5);
 if (FUNC_2(VAR_8->fh.m2m_ctx)) {
  VAR_9 = FUNC_3(VAR_8->fh.m2m_ctx);
  FUNC_6(VAR_7->dev, "%s failed to initialize m2m context (%d)\n",
   VAR_0, VAR_9);
  goto err_fh_del;
 }





 VAR_8->state = VAR_1;

 FUNC_0(&VAR_8->dts);


 VAR_7->instance_id++;
 FUNC_14(VAR_8->name, sizeof(VAR_8->name), "[%3d:----]",
   VAR_7->instance_id);


 FUNC_13(VAR_8);


 if (VAR_7->clk_st231)
  if (FUNC_4(VAR_7->clk_st231))
   FUNC_7(VAR_7->dev, "failed to enable st231 clk\n");


 if (VAR_7->clk_flash_promip)
  if (FUNC_4(VAR_7->clk_flash_promip))
   FUNC_7(VAR_7->dev, "failed to enable delta promip clk\n");

 FUNC_12(&VAR_7->lock);

 FUNC_5(VAR_7->dev, "%s decoder instance created\n", VAR_8->name);

 return 0;

err_fh_del:
 FUNC_16(&VAR_8->fh);
 FUNC_17(&VAR_8->fh);
 FUNC_8(VAR_8);
err:
 FUNC_12(&VAR_7->lock);

 return VAR_9;
}
