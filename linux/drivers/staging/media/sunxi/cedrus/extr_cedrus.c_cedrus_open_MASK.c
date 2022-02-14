
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_1__* private_data; } ;
struct cedrus_dev {int dev_mutex; int m2m_dev; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct cedrus_ctx {int hdl; TYPE_1__ fh; struct cedrus_dev* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cedrus_dev*,struct cedrus_ctx*) ;
 int VAR_3 ;
 int FUNC_3 (struct cedrus_ctx*) ;
 struct cedrus_ctx* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ,struct cedrus_ctx*,int *) ;
 int FUNC_11 (struct file*) ;
 struct cedrus_dev* FUNC_12 (struct file*) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_4)
{
 struct cedrus_dev *VAR_5 = FUNC_12(VAR_4);
 struct cedrus_ctx *VAR_6 = ((void*)0);
 int VAR_7;

 if (FUNC_5(&VAR_5->dev_mutex))
  return -VAR_1;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  FUNC_6(&VAR_5->dev_mutex);
  return -VAR_0;
 }

 FUNC_9(&VAR_6->fh, FUNC_11(VAR_4));
 VAR_4->private_data = &VAR_6->fh;
 VAR_6->dev = VAR_5;

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7)
  goto err_free;

 VAR_6->fh.m2m_ctx = FUNC_10(VAR_5->m2m_dev, VAR_6,
         &VAR_3);
 if (FUNC_0(VAR_6->fh.m2m_ctx)) {
  VAR_7 = FUNC_1(VAR_6->fh.m2m_ctx);
  goto err_ctrls;
 }

 FUNC_8(&VAR_6->fh);

 FUNC_6(&VAR_5->dev_mutex);

 return 0;

err_ctrls:
 FUNC_7(&VAR_6->hdl);
err_free:
 FUNC_3(VAR_6);
 FUNC_6(&VAR_5->dev_mutex);

 return VAR_7;
}
