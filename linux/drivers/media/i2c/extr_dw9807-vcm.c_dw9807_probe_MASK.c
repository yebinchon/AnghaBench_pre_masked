
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct TYPE_6__ {int function; } ;
struct TYPE_5__ {TYPE_3__ entity; int * internal_ops; int flags; } ;
struct dw9807_device {TYPE_1__ sd; int ctrls_vcm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dw9807_device* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct dw9807_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_6)
{
 struct dw9807_device *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(&VAR_6->dev, sizeof(*VAR_7),
      VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_9(&VAR_7->sd, VAR_6, &VAR_5);
 VAR_7->sd.flags |= VAR_3;
 VAR_7->sd.internal_ops = &VAR_4;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  goto err_cleanup;

 VAR_8 = FUNC_3(&VAR_7->sd.entity, 0, ((void*)0));
 if (VAR_8 < 0)
  goto err_cleanup;

 VAR_7->sd.entity.function = VAR_2;

 VAR_8 = FUNC_7(&VAR_7->sd);
 if (VAR_8 < 0)
  goto err_cleanup;

 FUNC_6(&VAR_6->dev);
 FUNC_4(&VAR_6->dev);
 FUNC_5(&VAR_6->dev);

 return 0;

err_cleanup:
 FUNC_8(&VAR_7->ctrls_vcm);
 FUNC_2(&VAR_7->sd.entity);

 return VAR_8;
}
