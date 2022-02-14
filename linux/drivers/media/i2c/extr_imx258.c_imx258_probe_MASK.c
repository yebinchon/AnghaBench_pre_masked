
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int function; } ;
struct TYPE_6__ {TYPE_3__ entity; int flags; int * internal_ops; } ;
struct TYPE_8__ {int flags; } ;
struct imx258 {TYPE_1__ sd; TYPE_4__ pad; int * cur_mode; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int*) ;
 struct imx258* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct imx258*) ;
 int FUNC_3 (struct imx258*) ;
 int FUNC_4 (struct imx258*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * VAR_8 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_9)
{
 struct imx258 *VAR_10;
 int VAR_11;
 u32 VAR_12 = 0;

 FUNC_0(&VAR_9->dev, "clock-frequency", &VAR_12);
 if (VAR_12 != 19200000)
  return -VAR_0;





 VAR_11 = FUNC_0(&VAR_9->dev, "rotation", &VAR_12);
 if (VAR_11 || VAR_12 != 180)
  return -VAR_0;

 VAR_10 = FUNC_1(&VAR_9->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;


 FUNC_11(&VAR_10->sd, VAR_9, &VAR_7);


 VAR_11 = FUNC_3(VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_10->cur_mode = &VAR_8[0];

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  return VAR_11;


 VAR_10->sd.internal_ops = &VAR_6;
 VAR_10->sd.flags |= VAR_5;
 VAR_10->sd.entity.function = VAR_3;


 VAR_10->pad.flags = VAR_4;

 VAR_11 = FUNC_6(&VAR_10->sd.entity, 1, &VAR_10->pad);
 if (VAR_11)
  goto error_handler_free;

 VAR_11 = FUNC_10(&VAR_10->sd);
 if (VAR_11 < 0)
  goto error_media_entity;

 FUNC_9(&VAR_9->dev);
 FUNC_7(&VAR_9->dev);
 FUNC_8(&VAR_9->dev);

 return 0;

error_media_entity:
 FUNC_5(&VAR_10->sd.entity);

error_handler_free:
 FUNC_2(VAR_10);

 return VAR_11;
}
