
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {int private_data; } ;
struct fdp1_dev {int dev; int dev_mutex; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct fdp1_ctx {TYPE_1__ fh; int hdl; } ;


 int FUNC_0 (struct fdp1_dev*,char*,struct fdp1_ctx*) ;
 struct fdp1_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct fdp1_ctx*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 struct fdp1_dev* FUNC_10 (struct file*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_0)
{
 struct fdp1_dev *VAR_1 = FUNC_10(VAR_0);
 struct fdp1_ctx *VAR_2 = FUNC_1(VAR_0->private_data);

 FUNC_0(VAR_1, "Releasing instance %p\n", VAR_2);

 FUNC_7(&VAR_2->fh);
 FUNC_8(&VAR_2->fh);
 FUNC_6(&VAR_2->hdl);
 FUNC_3(&VAR_1->dev_mutex);
 FUNC_9(VAR_2->fh.m2m_ctx);
 FUNC_4(&VAR_1->dev_mutex);
 FUNC_2(VAR_2);

 FUNC_5(VAR_1->dev);

 return 0;
}
