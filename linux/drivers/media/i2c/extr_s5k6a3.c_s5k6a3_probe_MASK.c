
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int function; } ;
struct v4l2_subdev {TYPE_3__ entity; int * internal_ops; int flags; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_7__ {int height; int width; int code; } ;
struct s5k6a3 {int gpio_reset; TYPE_4__ pad; TYPE_1__ format; struct v4l2_subdev subdev; TYPE_6__* supplies; int clock_frequency; int clock; struct device* dev; int lock; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_11__ {int supply; } ;
struct TYPE_8__ {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int,int ,int ) ;
 struct s5k6a3* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int,TYPE_6__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int,TYPE_4__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,int *) ;
 scalar_t__ FUNC_13 (int ,char*,int *) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 TYPE_2__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 int FUNC_17 (struct v4l2_subdev*) ;
 int FUNC_18 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_17)
{
 struct device *VAR_18 = &VAR_17->dev;
 struct s5k6a3 *VAR_19;
 struct v4l2_subdev *VAR_20;
 int VAR_21, VAR_22, VAR_23;

 VAR_19 = FUNC_6(VAR_18, sizeof(*VAR_19), VAR_2);
 if (!VAR_19)
  return -VAR_1;

 FUNC_11(&VAR_19->lock);
 VAR_19->gpio_reset = -VAR_0;
 VAR_19->clock = FUNC_0(-VAR_0);
 VAR_19->dev = VAR_18;

 VAR_19->clock = FUNC_4(VAR_19->dev, VAR_6);
 if (FUNC_1(VAR_19->clock))
  return FUNC_2(VAR_19->clock);

 VAR_21 = FUNC_12(VAR_18->of_node, 0, ((void*)0));
 if (!FUNC_8(VAR_21))
  return VAR_21;

 VAR_23 = FUNC_5(VAR_18, VAR_21, VAR_3,
      VAR_10);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_19->gpio_reset = VAR_21;

 if (FUNC_13(VAR_18->of_node, "clock-frequency",
     &VAR_19->clock_frequency)) {
  VAR_19->clock_frequency = VAR_7;
  FUNC_3(VAR_18, "using default %u Hz clock frequency\n",
     VAR_19->clock_frequency);
 }

 for (VAR_22 = 0; VAR_22 < VAR_11; VAR_22++)
  VAR_19->supplies[VAR_22].supply = VAR_16[VAR_22];

 VAR_23 = FUNC_7(&VAR_17->dev, VAR_11,
          VAR_19->supplies);
 if (VAR_23 < 0)
  return VAR_23;

 VAR_20 = &VAR_19->subdev;
 FUNC_18(VAR_20, VAR_17, &VAR_15);
 VAR_19->subdev.flags |= VAR_12;
 VAR_20->internal_ops = &VAR_14;

 VAR_19->format.code = VAR_13[0].code;
 VAR_19->format.width = VAR_9;
 VAR_19->format.height = VAR_8;

 VAR_20->entity.function = VAR_4;
 VAR_19->pad.flags = VAR_5;
 VAR_23 = FUNC_10(&VAR_20->entity, 1, &VAR_19->pad);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_16(VAR_18);
 FUNC_15(VAR_18);

 VAR_23 = FUNC_17(VAR_20);

 if (VAR_23 < 0) {
  FUNC_14(&VAR_17->dev);
  FUNC_9(&VAR_20->entity);
 }

 return VAR_23;
}
