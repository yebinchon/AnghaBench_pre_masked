
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * ops; int function; } ;
struct v4l2_subdev {TYPE_1__* ctrl_handler; TYPE_5__ entity; int flags; int * internal_ops; int dev; } ;
struct TYPE_9__ {int error; } ;
struct tvp5150 {int enable; TYPE_1__ hdl; scalar_t__ irq; int rect; int input; int detected_norm; int norm; TYPE_6__* pads; int mbus_type; struct v4l2_subdev sd; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct TYPE_12__ {struct device_node* of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_7__ dev; int adapter; } ;
struct device_node {int dummy; } ;
struct TYPE_11__ {int sig_type; int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct regmap*) ;
 int VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (int ,char*,int) ;
 struct tvp5150* FUNC_5 (TYPE_7__*,int,int ) ;
 struct regmap* FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (TYPE_7__*,scalar_t__,int *,int ,int,char*,struct tvp5150*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_5__*,int ,TYPE_6__*) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_10 (struct tvp5150*) ;
 int FUNC_11 (struct i2c_client*) ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_12 (struct v4l2_subdev*) ;
 int VAR_32 ;
 int FUNC_13 (struct tvp5150*,struct device_node*) ;
 int FUNC_14 (struct v4l2_subdev*) ;
 int FUNC_15 (struct v4l2_subdev*,int ) ;
 int VAR_33 ;
 int FUNC_16 (int ,int *) ;
 int VAR_34 ;
 int FUNC_17 (struct v4l2_subdev*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (TYPE_1__*,int *,int ,int,int,int,int) ;
 int FUNC_21 (TYPE_1__*,int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_22 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_35)
{
 struct tvp5150 *VAR_36;
 struct v4l2_subdev *VAR_37;
 struct device_node *VAR_38 = VAR_35->dev.of_node;
 struct regmap *VAR_39;
 int VAR_40;


 if (!FUNC_8(VAR_35->adapter,
      VAR_4 | VAR_5))
  return -VAR_1;

 VAR_40 = FUNC_11(VAR_35);
 if (VAR_40)
  return VAR_40;

 VAR_36 = FUNC_5(&VAR_35->dev, sizeof(*VAR_36), VAR_3);
 if (!VAR_36)
  return -VAR_2;

 VAR_39 = FUNC_6(VAR_35, &VAR_28);
 if (FUNC_2(VAR_39))
  return FUNC_3(VAR_39);

 VAR_36->regmap = VAR_39;
 VAR_37 = &VAR_36->sd;

 if (FUNC_1(VAR_0) && VAR_38) {
  VAR_40 = FUNC_13(VAR_36, VAR_38);
  if (VAR_40) {
   FUNC_4(VAR_37->dev, "DT parsing error: %d\n", VAR_40);
   return VAR_40;
  }
 } else {

  VAR_36->mbus_type = VAR_23;
 }

 FUNC_22(VAR_37, VAR_35, &VAR_32);
 VAR_37->internal_ops = &VAR_30;
 VAR_37->flags |= VAR_26;
 VAR_40 = FUNC_10(VAR_36);
 if (VAR_40 < 0)
  return VAR_40;

 VAR_36->norm = VAR_24;
 VAR_36->detected_norm = VAR_25;
 VAR_36->input = VAR_13;
 VAR_36->enable = 1;

 FUNC_19(&VAR_36->hdl, 5);
 FUNC_20(&VAR_36->hdl, &VAR_29,
   VAR_17, 0, 255, 1, 128);
 FUNC_20(&VAR_36->hdl, &VAR_29,
   VAR_18, 0, 255, 1, 128);
 FUNC_20(&VAR_36->hdl, &VAR_29,
   VAR_21, 0, 255, 1, 128);
 FUNC_20(&VAR_36->hdl, &VAR_29,
   VAR_19, -128, 127, 1, 0);
 FUNC_20(&VAR_36->hdl, &VAR_29,
   VAR_20, 27000000,
   27000000, 1, 27000000);
 FUNC_21(&VAR_36->hdl, &VAR_29,
         VAR_22,
         FUNC_0(VAR_34) - 1,
         0, 0, VAR_34);
 VAR_37->ctrl_handler = &VAR_36->hdl;
 if (VAR_36->hdl.error) {
  VAR_40 = VAR_36->hdl.error;
  goto err;
 }

 FUNC_16(FUNC_14(VAR_37), &VAR_36->rect);

 VAR_36->irq = VAR_35->irq;
 FUNC_15(VAR_37, 0);
 if (VAR_35->irq) {
  VAR_40 = FUNC_7(&VAR_35->dev, VAR_35->irq, ((void*)0),
      VAR_31, VAR_7 |
      VAR_6, "tvp5150", VAR_36);
  if (VAR_40)
   goto err;
 }

 VAR_40 = FUNC_17(VAR_37);
 if (VAR_40 < 0)
  goto err;

 if (VAR_27 > 1)
  FUNC_12(VAR_37);
 return 0;

err:
 FUNC_18(&VAR_36->hdl);
 return VAR_40;
}
