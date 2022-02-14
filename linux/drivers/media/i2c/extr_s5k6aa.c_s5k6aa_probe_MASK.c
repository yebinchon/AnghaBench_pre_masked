
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int function; } ;
struct v4l2_subdev {TYPE_2__ entity; int flags; int * internal_ops; int name; } ;
struct s5k6aa_platform_data {scalar_t__ mclk_frequency; int vert_flip; int horiz_flip; int set_power; int nlanes; int bus_type; } ;
struct TYPE_9__ {scalar_t__ top; scalar_t__ left; int height; int width; } ;
struct TYPE_11__ {int flags; } ;
struct s5k6aa {scalar_t__ mclk_frequency; struct v4l2_subdev sd; TYPE_1__ ccd_rect; TYPE_6__* supplies; TYPE_3__ pad; int inv_vflip; int inv_hflip; int s_power; int mipi_lanes; int bus_type; int lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_12__ {struct s5k6aa_platform_data* platform_data; } ;
struct i2c_client {TYPE_5__ dev; } ;
struct TYPE_13__ {int supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_5__*,char*) ;
 struct s5k6aa* FUNC_1 (TYPE_5__*,int,int ) ;
 int FUNC_2 (TYPE_5__*,int,TYPE_6__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct s5k6aa*,struct s5k6aa_platform_data const*) ;
 int FUNC_7 (struct s5k6aa*) ;
 int FUNC_8 (struct s5k6aa*) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_13,
   const struct i2c_device_id *VAR_14)
{
 const struct s5k6aa_platform_data *VAR_15 = VAR_13->dev.platform_data;
 struct v4l2_subdev *VAR_16;
 struct s5k6aa *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_15 == ((void*)0)) {
  FUNC_0(&VAR_13->dev, "Platform data not specified\n");
  return -VAR_1;
 }

 if (VAR_15->mclk_frequency == 0) {
  FUNC_0(&VAR_13->dev, "MCLK frequency not specified\n");
  return -VAR_1;
 }

 VAR_17 = FUNC_1(&VAR_13->dev, sizeof(*VAR_17), VAR_3);
 if (!VAR_17)
  return -VAR_2;

 FUNC_5(&VAR_17->lock);

 VAR_17->mclk_frequency = VAR_15->mclk_frequency;
 VAR_17->bus_type = VAR_15->bus_type;
 VAR_17->mipi_lanes = VAR_15->nlanes;
 VAR_17->s_power = VAR_15->set_power;
 VAR_17->inv_hflip = VAR_15->horiz_flip;
 VAR_17->inv_vflip = VAR_15->vert_flip;

 VAR_16 = &VAR_17->sd;
 FUNC_10(VAR_16, VAR_13, &VAR_11);

 FUNC_9(VAR_16->name, VAR_0, sizeof(VAR_16->name));

 VAR_16->internal_ops = &VAR_10;
 VAR_16->flags |= VAR_9;

 VAR_17->pad.flags = VAR_5;
 VAR_16->entity.function = VAR_4;
 VAR_19 = FUNC_4(&VAR_16->entity, 1, &VAR_17->pad);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_6(VAR_17, VAR_15);
 if (VAR_19)
  goto out_err;

 for (VAR_18 = 0; VAR_18 < VAR_6; VAR_18++)
  VAR_17->supplies[VAR_18].supply = VAR_12[VAR_18];

 VAR_19 = FUNC_2(&VAR_13->dev, VAR_6,
     VAR_17->supplies);
 if (VAR_19) {
  FUNC_0(&VAR_13->dev, "Failed to get regulators\n");
  goto out_err;
 }

 VAR_19 = FUNC_7(VAR_17);
 if (VAR_19)
  goto out_err;

 FUNC_8(VAR_17);

 VAR_17->ccd_rect.width = VAR_8;
 VAR_17->ccd_rect.height = VAR_7;
 VAR_17->ccd_rect.left = 0;
 VAR_17->ccd_rect.top = 0;

 return 0;

out_err:
 FUNC_3(&VAR_17->sd.entity);
 return VAR_19;
}
