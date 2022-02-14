
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct i2c_client {int addr; int dev; TYPE_7__* adapter; } ;
struct TYPE_10__ {int error; } ;
struct TYPE_9__ {TYPE_2__* ctrl_handler; } ;
struct adv7343_state {int reg00; int reg01; int reg02; int reg35; TYPE_2__ hdl; TYPE_1__ sd; int std; int output; int reg82; int reg80; int pdata; } ;
struct TYPE_11__ {int name; } ;


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
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_21 ;
 struct adv7343_state* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int *,int ,int ,int ,int,int ) ;
 int FUNC_9 (TYPE_1__*,struct i2c_client*,int *) ;
 int FUNC_10 (struct i2c_client*,char*,int,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_22)
{
 struct adv7343_state *VAR_23;
 int VAR_24;

 if (!FUNC_3(VAR_22->adapter, VAR_15))
  return -VAR_12;

 FUNC_10(VAR_22, "chip found @ 0x%x (%s)\n",
   VAR_22->addr << 1, VAR_22->adapter->name);

 VAR_23 = FUNC_2(&VAR_22->dev, sizeof(struct adv7343_state),
        VAR_14);
 if (VAR_23 == ((void*)0))
  return -VAR_13;


 VAR_23->pdata = FUNC_0(VAR_22);

 VAR_23->reg00 = 0x80;
 VAR_23->reg01 = 0x00;
 VAR_23->reg02 = 0x20;
 VAR_23->reg35 = 0x00;
 VAR_23->reg80 = VAR_10;
 VAR_23->reg82 = VAR_11;

 VAR_23->output = VAR_3;
 VAR_23->std = VAR_19;

 FUNC_9(&VAR_23->sd, VAR_22, &VAR_21);

 FUNC_6(&VAR_23->hdl, 2);
 FUNC_8(&VAR_23->hdl, &VAR_20,
   VAR_16, VAR_2,
          VAR_1, 1,
          VAR_0);
 FUNC_8(&VAR_23->hdl, &VAR_20,
   VAR_18, VAR_9,
          VAR_8, 1,
          VAR_7);
 FUNC_8(&VAR_23->hdl, &VAR_20,
   VAR_17, VAR_6,
           VAR_5, 1,
           VAR_4);
 VAR_23->sd.ctrl_handler = &VAR_23->hdl;
 if (VAR_23->hdl.error) {
  VAR_24 = VAR_23->hdl.error;
  goto done;
 }
 FUNC_7(&VAR_23->hdl);

 VAR_24 = FUNC_1(&VAR_23->sd);
 if (VAR_24)
  goto done;

 VAR_24 = FUNC_4(&VAR_23->sd);

done:
 if (VAR_24 < 0)
  FUNC_5(&VAR_23->hdl);

 return VAR_24;
}
