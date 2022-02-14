
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entity; } ;
struct TYPE_4__ {int entity; int ctrl_handler; int dev; } ;
struct s5k5baf {TYPE_1__ cis_sd; TYPE_2__ sd; int clock; void* crop_source; void* compose; void* crop_sink; int lock; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 struct s5k5baf* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct s5k5baf*) ;
 void* VAR_4 ;
 int FUNC_6 (struct s5k5baf*) ;
 int FUNC_7 (struct s5k5baf*) ;
 int FUNC_8 (struct s5k5baf*,struct i2c_client*) ;
 int FUNC_9 (struct s5k5baf*) ;
 int FUNC_10 (struct s5k5baf*) ;
 int FUNC_11 (struct s5k5baf*,int *) ;
 int FUNC_12 (struct s5k5baf*) ;
 int FUNC_13 (struct s5k5baf*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_5)
{
 struct s5k5baf *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(&VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 FUNC_4(&VAR_6->lock);
 VAR_6->crop_sink = VAR_4;
 VAR_6->compose = VAR_4;
 VAR_6->crop_source = VAR_4;

 VAR_7 = FUNC_11(VAR_6, &VAR_5->dev);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_6, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7 < 0)
  goto err_me;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 < 0)
  goto err_me;

 VAR_6->clock = FUNC_1(VAR_6->sd.dev, VAR_3);
 if (FUNC_0(VAR_6->clock)) {
  VAR_7 = -VAR_1;
  goto err_me;
 }

 VAR_7 = FUNC_13(VAR_6);
 if (VAR_7 < 0) {
  VAR_7 = -VAR_1;
  goto err_me;
 }
 FUNC_9(VAR_6);
 VAR_7 = FUNC_5(VAR_6);

 FUNC_12(VAR_6);
 if (VAR_7 < 0)
  goto err_me;

 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7 < 0)
  goto err_me;

 VAR_7 = FUNC_14(&VAR_6->sd);
 if (VAR_7 < 0)
  goto err_ctrl;

 return 0;

err_ctrl:
 FUNC_15(VAR_6->sd.ctrl_handler);
err_me:
 FUNC_3(&VAR_6->sd.entity);
 FUNC_3(&VAR_6->cis_sd.entity);
 return VAR_7;
}
