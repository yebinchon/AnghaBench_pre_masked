
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {struct v4l2_ctrl_handler* ctrl_handler; int flags; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct regmap {int dummy; } ;
struct max2175 {int master; int am_hiz; int mode_resolved; scalar_t__ xtal_freq; struct v4l2_ctrl_handler ctrl_hdl; TYPE_4__* bands_rf; int freq; struct v4l2_subdev sd; int rx_modes; void* rx_mode; void* hsls; void* i2s_en; TYPE_3__* pll_lock; TYPE_2__* if_gain; TYPE_1__* lna_gain; struct i2c_client* client; struct regmap* regmap; } ;
struct TYPE_14__ {int of_node; } ;
struct i2c_client {TYPE_6__ dev; } ;
struct fwnode_handle {int dummy; } ;
struct device_node {int dummy; } ;
typedef struct regmap clk ;
struct TYPE_13__ {int rangelow; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_10__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct regmap*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 int FUNC_3 (TYPE_6__*,char*,...) ;
 int FUNC_4 (TYPE_6__*,char*,scalar_t__) ;
 struct regmap* FUNC_5 (TYPE_6__*,int *) ;
 struct max2175* FUNC_6 (TYPE_6__*,int,int ) ;
 struct regmap* FUNC_7 (struct i2c_client*,int *) ;
 TYPE_4__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (struct fwnode_handle*,char*) ;
 int FUNC_9 (struct fwnode_handle*,char*,int *) ;
 int FUNC_10 (struct max2175*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (struct i2c_client*,int ,int *) ;
 int VAR_19 ;
 TYPE_4__ VAR_20 ;
 int VAR_21 ;
 struct fwnode_handle* FUNC_12 (int ) ;
 int FUNC_13 (struct device_node*) ;
 struct device_node* FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (struct v4l2_subdev*) ;
 int FUNC_16 (struct v4l2_subdev*) ;
 int FUNC_17 (struct v4l2_ctrl_handler*) ;
 int FUNC_18 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_19 (struct v4l2_ctrl_handler*) ;
 void* FUNC_20 (struct v4l2_ctrl_handler*,int *,int *) ;
 void* FUNC_21 (struct v4l2_ctrl_handler*,int *,int ,int ,int,int,int ) ;
 int FUNC_22 (struct v4l2_subdev*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_22)
{
 bool VAR_23 = 1, VAR_24 = 0;
 u32 VAR_25, VAR_26 = 0;
 struct v4l2_ctrl_handler *VAR_27;
 struct fwnode_handle *VAR_28;
 struct device_node *VAR_29;
 struct v4l2_subdev *VAR_30;
 struct regmap *VAR_31;
 struct max2175 *VAR_32;
 struct clk *VAR_33;
 int VAR_34;


 VAR_29 = FUNC_14(VAR_22->dev.of_node, "maxim,master", 0);
 if (VAR_29) {
  VAR_23 = 0;
  FUNC_13(VAR_29);
 }

 VAR_28 = FUNC_12(VAR_22->dev.of_node);
 if (FUNC_8(VAR_28, "maxim,am-hiz-filter"))
  VAR_24 = 1;

 if (!FUNC_9(VAR_28, "maxim,refout-load",
          &VAR_25)) {
  VAR_34 = FUNC_11(VAR_22, VAR_25,
        &VAR_26);
  if (VAR_34) {
   FUNC_3(&VAR_22->dev, "invalid refout_load %u\n",
    VAR_25);
   return -VAR_0;
  }
 }

 VAR_33 = FUNC_5(&VAR_22->dev, ((void*)0));
 if (FUNC_0(VAR_33)) {
  VAR_34 = FUNC_1(VAR_33);
  FUNC_3(&VAR_22->dev, "cannot get clock %d\n", VAR_34);
  return VAR_34;
 }

 VAR_31 = FUNC_7(VAR_22, &VAR_19);
 if (FUNC_0(VAR_31)) {
  VAR_34 = FUNC_1(VAR_31);
  FUNC_3(&VAR_22->dev, "regmap init failed %d\n", VAR_34);
  return -VAR_1;
 }


 VAR_32 = FUNC_6(&VAR_22->dev, sizeof(*VAR_32), VAR_3);
 if (VAR_32 == ((void*)0))
  return -VAR_2;

 VAR_30 = &VAR_32->sd;
 VAR_32->master = VAR_23;
 VAR_32->am_hiz = VAR_24;
 VAR_32->mode_resolved = 0;
 VAR_32->regmap = VAR_31;
 VAR_32->xtal_freq = FUNC_2(VAR_33);
 FUNC_4(&VAR_22->dev, "xtal freq %luHz\n", VAR_32->xtal_freq);

 FUNC_22(VAR_30, VAR_22, &VAR_18);
 VAR_32->client = VAR_22;

 VAR_30->flags |= VAR_10;


 VAR_27 = &VAR_32->ctrl_hdl;
 VAR_34 = FUNC_18(VAR_27, 7);
 if (VAR_34)
  return VAR_34;

 VAR_32->lna_gain = FUNC_21(VAR_27, &VAR_13,
       VAR_6,
       0, 63, 1, 0);
 VAR_32->lna_gain->flags |= (VAR_9 |
     VAR_8);
 VAR_32->if_gain = FUNC_21(VAR_27, &VAR_13,
      VAR_5,
      0, 31, 1, 0);
 VAR_32->if_gain->flags |= (VAR_9 |
    VAR_8);
 VAR_32->pll_lock = FUNC_21(VAR_27, &VAR_13,
       VAR_7,
       0, 1, 1, 0);
 VAR_32->pll_lock->flags |= (VAR_9 |
     VAR_8);
 VAR_32->i2s_en = FUNC_20(VAR_27, &VAR_16, ((void*)0));
 VAR_32->hsls = FUNC_20(VAR_27, &VAR_15, ((void*)0));

 if (VAR_32->xtal_freq == VAR_4) {
  VAR_32->rx_mode = FUNC_20(VAR_27,
          &VAR_14, ((void*)0));
  VAR_32->rx_modes = VAR_12;
  VAR_32->bands_rf = &VAR_11;
 } else {
  VAR_32->rx_mode = FUNC_20(VAR_27,
          &VAR_17, ((void*)0));
  VAR_32->rx_modes = VAR_21;
  VAR_32->bands_rf = &VAR_20;
 }
 VAR_32->sd.ctrl_handler = &VAR_32->ctrl_hdl;


 VAR_32->freq = VAR_32->bands_rf->rangelow;


 VAR_34 = FUNC_15(VAR_30);
 if (VAR_34) {
  FUNC_3(&VAR_22->dev, "register subdev failed\n");
  goto err_reg;
 }


 VAR_34 = FUNC_10(VAR_32, VAR_26);
 if (VAR_34)
  goto err_init;

 VAR_34 = FUNC_19(VAR_27);
 if (VAR_34)
  goto err_init;

 return 0;

err_init:
 FUNC_16(VAR_30);
err_reg:
 FUNC_17(&VAR_32->ctrl_hdl);

 return VAR_34;
}
