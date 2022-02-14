
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hva_dev {int instance_id; int lock; int m2m_dev; } ;
struct TYPE_5__ {int m2m_ctx; int * ctrl_handler; } ;
struct hva_ctx {TYPE_1__ fh; int ctrl_handler; int name; int sys_errors; int lock; int run_work; struct hva_dev* hva_dev; } ;
struct file {TYPE_1__* private_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ,...) ;
 int FUNC_4 (struct device*,char*,int ) ;
 int FUNC_5 (struct hva_ctx*) ;
 int FUNC_6 (struct hva_ctx*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct device* FUNC_7 (struct hva_dev*) ;
 int FUNC_8 (struct hva_ctx*) ;
 struct hva_ctx* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct hva_ctx*) ;
 int FUNC_14 (int ,int,char*,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (int ,struct hva_ctx*,int *) ;
 int FUNC_21 (struct file*) ;
 struct hva_dev* FUNC_22 (struct file*) ;

__attribute__((used)) static int FUNC_23(struct file *VAR_5)
{
 struct hva_dev *VAR_6 = FUNC_22(VAR_5);
 struct device *VAR_7 = FUNC_7(VAR_6);
 struct hva_ctx *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto out;
 }
 VAR_8->hva_dev = VAR_6;

 FUNC_0(&VAR_8->run_work, VAR_4);
 FUNC_19(&VAR_8->fh, FUNC_21(VAR_5));
 VAR_5->private_data = &VAR_8->fh;
 FUNC_16(&VAR_8->fh);

 VAR_9 = FUNC_5(VAR_8);
 if (VAR_9) {
  FUNC_3(VAR_7, "%s [x:x] failed to setup controls\n",
   VAR_2);
  VAR_8->sys_errors++;
  goto err_fh;
 }
 VAR_8->fh.ctrl_handler = &VAR_8->ctrl_handler;

 FUNC_10(&VAR_8->lock);

 VAR_8->fh.m2m_ctx = FUNC_20(VAR_6->m2m_dev, VAR_8,
         &VAR_3);
 if (FUNC_1(VAR_8->fh.m2m_ctx)) {
  VAR_9 = FUNC_2(VAR_8->fh.m2m_ctx);
  FUNC_3(VAR_7, "%s failed to initialize m2m context (%d)\n",
   VAR_2, VAR_9);
  VAR_8->sys_errors++;
  goto err_ctrls;
 }


 FUNC_11(&VAR_6->lock);
 VAR_6->instance_id++;
 FUNC_14(VAR_8->name, sizeof(VAR_8->name), "[%3d:----]",
   VAR_6->instance_id);
 FUNC_12(&VAR_6->lock);


 FUNC_13(VAR_8);





 FUNC_4(VAR_7, "%s encoder instance created\n", VAR_8->name);

 return 0;

err_ctrls:
 FUNC_15(&VAR_8->ctrl_handler);
err_fh:
 FUNC_17(&VAR_8->fh);
 FUNC_18(&VAR_8->fh);
 FUNC_8(VAR_8);
out:
 return VAR_9;
}
