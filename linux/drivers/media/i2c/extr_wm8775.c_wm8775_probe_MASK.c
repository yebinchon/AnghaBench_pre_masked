
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int error; } ;
struct v4l2_subdev {TYPE_2__* ctrl_handler; } ;
struct wm8775_state {int input; TYPE_1__* loud; TYPE_2__ hdl; void* bal; void* vol; void* mute; struct v4l2_subdev sd; } ;
struct wm8775_platform_data {int is_nova_s; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_10__ {struct wm8775_platform_data* platform_data; } ;
struct i2c_client {int addr; TYPE_6__ dev; TYPE_5__* adapter; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_7__ {scalar_t__ val; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct wm8775_state* FUNC_0 (TYPE_6__*,int,int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 void* FUNC_4 (TYPE_2__*,int *,int ,int ,int,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct i2c_client*,char*,int,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_7 (struct v4l2_subdev*,int) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_25,
   const struct i2c_device_id *VAR_26)
{
 struct wm8775_state *VAR_27;
 struct v4l2_subdev *VAR_28;
 int VAR_29;
 bool VAR_30 = 0;

 if (VAR_25->dev.platform_data) {
  struct wm8775_platform_data *VAR_31 = VAR_25->dev.platform_data;
  VAR_30 = VAR_31->is_nova_s;
 }


 if (!FUNC_1(VAR_25->adapter, VAR_5))
  return -VAR_2;

 FUNC_6(VAR_25, "chip found @ 0x%02x (%s)\n",
   VAR_25->addr << 1, VAR_25->adapter->name);

 VAR_27 = FUNC_0(&VAR_25->dev, sizeof(*VAR_27), VAR_4);
 if (VAR_27 == ((void*)0))
  return -VAR_3;
 VAR_28 = &VAR_27->sd;
 FUNC_5(VAR_28, VAR_25, &VAR_24);
 VAR_27->input = 2;

 FUNC_3(&VAR_27->hdl, 4);
 VAR_27->mute = FUNC_4(&VAR_27->hdl, &VAR_23,
   VAR_21, 0, 1, 1, 0);
 VAR_27->vol = FUNC_4(&VAR_27->hdl, &VAR_23,
   VAR_22, 0, 65535, (65535+99)/100, 0xCF00);
 VAR_27->bal = FUNC_4(&VAR_27->hdl, &VAR_23,
   VAR_19, 0, 65535, (65535+99)/100, 32768);
 VAR_27->loud = FUNC_4(&VAR_27->hdl, &VAR_23,
   VAR_20, 0, 1, 1, 1);
 VAR_28->ctrl_handler = &VAR_27->hdl;
 VAR_29 = VAR_27->hdl.error;
 if (VAR_29) {
  FUNC_2(&VAR_27->hdl);
  return VAR_29;
 }




 FUNC_8(VAR_28, VAR_17, 0x000);

 FUNC_8(VAR_28, VAR_18, 0x000);

 FUNC_8(VAR_28, VAR_6, 0x021);

 FUNC_8(VAR_28, VAR_7, 0x102);

 FUNC_8(VAR_28, VAR_8, 0x000);

 if (!VAR_30) {

  FUNC_8(VAR_28, VAR_9, 0x1d4);

  FUNC_8(VAR_28, VAR_10, 0x1d4);

  FUNC_8(VAR_28, VAR_11, 0x1bf);


  FUNC_8(VAR_28, VAR_12, 0x185);
 } else {

  FUNC_8(VAR_28, VAR_11, 0x1bb);

  FUNC_8(VAR_28, VAR_12, (VAR_27->loud->val ? VAR_0 : 0) | VAR_1);
 }

 FUNC_8(VAR_28, VAR_13, 0x0a2);

 FUNC_8(VAR_28, VAR_14, 0x005);
 if (!VAR_30) {

  FUNC_8(VAR_28, VAR_15, 0x07a);

  FUNC_8(VAR_28, VAR_16, 0x102);
 } else {

  FUNC_8(VAR_28, VAR_15, 0x0fb);

  FUNC_7(VAR_28, 1);
 }
 return 0;
}
