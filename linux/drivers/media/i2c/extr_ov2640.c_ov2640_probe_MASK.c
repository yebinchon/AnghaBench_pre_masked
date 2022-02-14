
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {int error; int * lock; } ;
struct TYPE_15__ {int function; } ;
struct TYPE_13__ {int flags; TYPE_7__ entity; TYPE_2__* ctrl_handler; } ;
struct TYPE_16__ {int flags; } ;
struct ov2640_priv {int clk; int lock; TYPE_2__ hdl; TYPE_1__ subdev; TYPE_8__ pad; int cfmt_code; int win; } ;
struct TYPE_12__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_10__ dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_10__*,char*) ;
 struct ov2640_priv* FUNC_8 (TYPE_10__*,int,int ) ;
 int FUNC_9 (struct i2c_adapter*,int ) ;
 int FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (TYPE_7__*,int,TYPE_8__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_14 ;
 int FUNC_14 (struct i2c_client*,struct ov2640_priv*) ;
 int FUNC_15 (int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_16 (struct i2c_client*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int) ;
 int FUNC_20 (TYPE_2__*,int *,int ,int ,int,int,int ) ;
 int FUNC_21 (TYPE_2__*,int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_22 (TYPE_1__*,struct i2c_client*,int *) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_17)
{
 struct ov2640_priv *VAR_18;
 struct i2c_adapter *VAR_19 = VAR_17->adapter;
 int VAR_20;

 if (!FUNC_9(VAR_19, VAR_3)) {
  FUNC_5(&VAR_19->dev,
   "OV2640: I2C-Adapter doesn't support SMBUS\n");
  return -VAR_0;
 }

 VAR_18 = FUNC_8(&VAR_17->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 if (VAR_17->dev.of_node) {
  VAR_18->clk = FUNC_7(&VAR_17->dev, "xvclk");
  if (FUNC_1(VAR_18->clk))
   return FUNC_2(VAR_18->clk);
  VAR_20 = FUNC_4(VAR_18->clk);
  if (VAR_20)
   return VAR_20;
 }

 VAR_20 = FUNC_14(VAR_17, VAR_18);
 if (VAR_20)
  goto err_clk;

 VAR_18->win = FUNC_15(VAR_8, VAR_7);
 VAR_18->cfmt_code = VAR_4;

 FUNC_22(&VAR_18->subdev, VAR_17, &VAR_15);
 VAR_18->subdev.flags |= VAR_12 |
         VAR_13;
 FUNC_13(&VAR_18->lock);
 FUNC_19(&VAR_18->hdl, 3);
 VAR_18->hdl.lock = &VAR_18->lock;
 FUNC_20(&VAR_18->hdl, &VAR_14,
   VAR_11, 0, 1, 1, 0);
 FUNC_20(&VAR_18->hdl, &VAR_14,
   VAR_9, 0, 1, 1, 0);
 FUNC_21(&VAR_18->hdl, &VAR_14,
   VAR_10,
   FUNC_0(VAR_16) - 1, 0, 0,
   VAR_16);
 VAR_18->subdev.ctrl_handler = &VAR_18->hdl;
 if (VAR_18->hdl.error) {
  VAR_20 = VAR_18->hdl.error;
  goto err_hdl;
 }
 VAR_20 = FUNC_16(VAR_17);
 if (VAR_20 < 0)
  goto err_videoprobe;

 VAR_20 = FUNC_17(&VAR_18->subdev);
 if (VAR_20 < 0)
  goto err_videoprobe;

 FUNC_6(&VAR_19->dev, "OV2640 Probed\n");

 return 0;

err_videoprobe:
 FUNC_10(&VAR_18->subdev.entity);
err_hdl:
 FUNC_18(&VAR_18->hdl);
 FUNC_12(&VAR_18->lock);
err_clk:
 FUNC_3(VAR_18->clk);
 return VAR_20;
}
