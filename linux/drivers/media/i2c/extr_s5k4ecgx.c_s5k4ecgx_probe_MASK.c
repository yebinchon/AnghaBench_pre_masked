
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int function; } ;
struct v4l2_subdev {TYPE_1__ entity; int flags; int * internal_ops; int name; } ;
struct s5k4ecgx_platform_data {int dummy; } ;
struct TYPE_9__ {int flags; } ;
struct s5k4ecgx {struct v4l2_subdev sd; int * curr_frmsize; int * curr_pixfmt; TYPE_5__* supplies; TYPE_2__ pad; scalar_t__ streaming; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct s5k4ecgx_platform_data* platform_data; } ;
struct i2c_client {TYPE_4__ dev; } ;
struct TYPE_11__ {int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 struct s5k4ecgx* FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_4__*,int,TYPE_5__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct s5k4ecgx*,struct s5k4ecgx_platform_data*) ;
 int * VAR_8 ;
 int FUNC_7 (struct s5k4ecgx*) ;
 int FUNC_8 (struct s5k4ecgx*) ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct s5k4ecgx_platform_data *VAR_15 = VAR_13->dev.platform_data;
 struct v4l2_subdev *VAR_16;
 struct s5k4ecgx *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15 == ((void*)0)) {
  FUNC_0(&VAR_13->dev, "platform data is missing!\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_1(&VAR_13->dev, sizeof(struct s5k4ecgx), VAR_2);
 if (!VAR_17)
  return -VAR_1;

 FUNC_5(&VAR_17->lock);
 VAR_17->streaming = 0;

 VAR_16 = &VAR_17->sd;

 FUNC_10(VAR_16, VAR_13, &VAR_9);

 FUNC_9(VAR_16->name, VAR_5, sizeof(VAR_16->name));

 VAR_16->internal_ops = &VAR_11;

 VAR_16->flags |= VAR_7;

 VAR_17->pad.flags = VAR_4;
 VAR_16->entity.function = VAR_3;
 VAR_18 = FUNC_4(&VAR_16->entity, 1, &VAR_17->pad);
 if (VAR_18)
  return VAR_18;

 VAR_18 = FUNC_6(VAR_17, VAR_15);
 if (VAR_18) {
  FUNC_0(&VAR_13->dev, "Failed to set gpios\n");
  goto out_err1;
 }
 for (VAR_19 = 0; VAR_19 < VAR_6; VAR_19++)
  VAR_17->supplies[VAR_19].supply = VAR_12[VAR_19];

 VAR_18 = FUNC_2(&VAR_13->dev, VAR_6,
     VAR_17->supplies);
 if (VAR_18) {
  FUNC_0(&VAR_13->dev, "Failed to get regulators\n");
  goto out_err2;
 }
 VAR_18 = FUNC_8(VAR_17);
 if (VAR_18)
  goto out_err2;

 VAR_17->curr_pixfmt = &VAR_8[0];
 VAR_17->curr_frmsize = &VAR_10[0];

 return 0;

out_err2:
 FUNC_7(VAR_17);
out_err1:
 FUNC_3(&VAR_17->sd.entity);

 return VAR_18;
}
