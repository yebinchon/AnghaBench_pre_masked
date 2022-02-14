
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_12__ {int function; } ;
struct v4l2_subdev {TYPE_6__ entity; TYPE_1__* ctrl_handler; int flags; } ;
struct v4l2_dv_timings {int dummy; } ;
struct tvp7002_config {int hs_polarity; int vs_polarity; int fid_polarity; int sog_polarity; int clk_polarity; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_13__ {int flags; } ;
struct tvp7002 {struct v4l2_subdev sd; TYPE_1__ hdl; TYPE_7__ pad; TYPE_5__* current_timings; struct tvp7002_config* pdata; } ;
struct i2c_client {TYPE_9__* adapter; int addr; int dev; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_11__ {struct v4l2_dv_timings timings; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*) ;
 struct tvp7002* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_9__*,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int,TYPE_7__*) ;
 int VAR_13 ;
 struct tvp7002_config* FUNC_5 (struct i2c_client*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_7 (struct v4l2_subdev*,struct v4l2_dv_timings*) ;
 TYPE_5__* VAR_16 ;
 int FUNC_8 (struct v4l2_subdev*,int ,int) ;
 int FUNC_9 (struct v4l2_subdev*,int ) ;
 int FUNC_10 (struct v4l2_subdev*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int *,int ,int ,int,int,int ) ;
 int FUNC_15 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_16 (struct v4l2_subdev*,char*,...) ;
 int FUNC_17 (struct i2c_client*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_17)
{
 struct tvp7002_config *VAR_18 = FUNC_5(VAR_17);
 struct v4l2_subdev *VAR_19;
 struct tvp7002 *VAR_20;
 struct v4l2_dv_timings VAR_21;
 int VAR_22;
 int VAR_23;
 u8 VAR_24;
 int VAR_25;

 if (VAR_18 == ((void*)0)) {
  FUNC_0(&VAR_17->dev, "No platform data\n");
  return -VAR_0;
 }


 if (!FUNC_2(VAR_17->adapter,
  VAR_4 | VAR_5))
  return -VAR_1;

 VAR_20 = FUNC_1(&VAR_17->dev, sizeof(struct tvp7002), VAR_3);

 if (!VAR_20)
  return -VAR_2;

 VAR_19 = &VAR_20->sd;
 VAR_20->pdata = VAR_18;
 VAR_20->current_timings = VAR_16;


 FUNC_15(VAR_19, VAR_17, &VAR_15);
 FUNC_17(VAR_17, "tvp7002 found @ 0x%02x (%s)\n",
     VAR_17->addr, VAR_17->adapter->name);

 VAR_25 = FUNC_6(VAR_19, VAR_8, &VAR_24);
 if (VAR_25 < 0)
  return VAR_25;


 FUNC_16(VAR_19, "Rev. %02x detected.\n", VAR_24);
 if (VAR_24 != 0x02)
  FUNC_16(VAR_19, "Unknown revision detected.\n");


 VAR_25 = FUNC_9(VAR_19, VAR_14);

 if (VAR_25 < 0)
  return VAR_25;


 VAR_22 = 0x20 | VAR_20->pdata->hs_polarity << 5
   | VAR_20->pdata->vs_polarity << 2;
 VAR_25 = FUNC_8(VAR_19, VAR_10, VAR_22);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_23 = 0x01 | VAR_20->pdata->fid_polarity << 2
   | VAR_20->pdata->sog_polarity << 1
   | VAR_20->pdata->clk_polarity;
 VAR_25 = FUNC_8(VAR_19, VAR_9, VAR_23);
 if (VAR_25 < 0)
  return VAR_25;


 VAR_21 = VAR_20->current_timings->timings;
 VAR_25 = FUNC_7(VAR_19, &VAR_21);
 FUNC_12(&VAR_20->hdl, 1);
 FUNC_14(&VAR_20->hdl, &VAR_13,
   VAR_11, 0, 255, 1, 0);
 VAR_19->ctrl_handler = &VAR_20->hdl;
 if (VAR_20->hdl.error) {
  VAR_25 = VAR_20->hdl.error;
  goto error;
 }
 FUNC_13(&VAR_20->hdl);

 VAR_25 = FUNC_10(&VAR_20->sd);
 if (VAR_25)
  goto error;

 return 0;

error:
 FUNC_11(&VAR_20->hdl);



 return VAR_25;
}
