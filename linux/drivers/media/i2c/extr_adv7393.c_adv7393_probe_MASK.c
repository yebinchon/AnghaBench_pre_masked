
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct i2c_client {int addr; int dev; TYPE_6__* adapter; } ;
struct TYPE_9__ {int error; } ;
struct TYPE_8__ {TYPE_2__* ctrl_handler; } ;
struct adv7393_state {int reg01; int reg02; TYPE_2__ hdl; TYPE_1__ sd; int std; int output; int reg82; int reg80; int reg35; int reg00; } ;
struct TYPE_10__ {int name; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int VAR_23 ;
 struct adv7393_state* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int ,int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_24,
    const struct i2c_device_id *VAR_25)
{
 struct adv7393_state *VAR_26;
 int VAR_27;

 if (!FUNC_2(VAR_24->adapter, VAR_17))
  return -VAR_14;

 FUNC_8(VAR_24, "chip found @ 0x%x (%s)\n",
   VAR_24->addr << 1, VAR_24->adapter->name);

 VAR_26 = FUNC_1(&VAR_24->dev, sizeof(*VAR_26), VAR_16);
 if (VAR_26 == ((void*)0))
  return -VAR_15;

 VAR_26->reg00 = VAR_11;
 VAR_26->reg01 = 0x00;
 VAR_26->reg02 = 0x20;
 VAR_26->reg35 = VAR_7;
 VAR_26->reg80 = VAR_12;
 VAR_26->reg82 = VAR_13;

 VAR_26->output = VAR_3;
 VAR_26->std = VAR_21;

 FUNC_7(&VAR_26->sd, VAR_24, &VAR_23);

 FUNC_4(&VAR_26->hdl, 3);
 FUNC_6(&VAR_26->hdl, &VAR_22,
   VAR_18, VAR_2,
          VAR_1, 1,
          VAR_0);
 FUNC_6(&VAR_26->hdl, &VAR_22,
   VAR_20, VAR_10,
          VAR_9, 1,
          VAR_8);
 FUNC_6(&VAR_26->hdl, &VAR_22,
   VAR_19, VAR_6,
           VAR_5, 1,
           VAR_4);
 VAR_26->sd.ctrl_handler = &VAR_26->hdl;
 if (VAR_26->hdl.error) {
  int VAR_28 = VAR_26->hdl.error;

  FUNC_3(&VAR_26->hdl);
  return VAR_28;
 }
 FUNC_5(&VAR_26->hdl);

 VAR_27 = FUNC_0(&VAR_26->sd);
 if (VAR_27)
  FUNC_3(&VAR_26->hdl);
 return VAR_27;
}
