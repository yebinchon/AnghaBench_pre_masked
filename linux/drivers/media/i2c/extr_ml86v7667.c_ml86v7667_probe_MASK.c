
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* ctrl_handler; } ;
struct TYPE_9__ {int error; } ;
struct ml86v7667_priv {TYPE_1__ sd; TYPE_3__ hdl; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {TYPE_7__* adapter; int addr; int dev; } ;
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
 struct ml86v7667_priv* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int VAR_12 ;
 int FUNC_2 (struct ml86v7667_priv*) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *,int ,int,int,int,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,struct i2c_client*,int *) ;
 int FUNC_9 (struct i2c_client*,char*,int ,int ) ;
 int FUNC_10 (struct i2c_client*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_14,
      const struct i2c_device_id *VAR_15)
{
 struct ml86v7667_priv *VAR_16;
 int VAR_17;

 if (!FUNC_1(VAR_14->adapter, VAR_3))
  return -VAR_0;

 VAR_16 = FUNC_0(&VAR_14->dev, sizeof(*VAR_16), VAR_2);
 if (!VAR_16)
  return -VAR_1;

 FUNC_8(&VAR_16->sd, VAR_14, &VAR_13);

 FUNC_4(&VAR_16->hdl, 8);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_5, -64, 63, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_8, -8, 7, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_6, -32, 31, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_9, -128, 127, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_10, -4, 3, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_4, -4, 3, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_11, 0, 1, 1, 0);
 FUNC_6(&VAR_16->hdl, &VAR_12,
     VAR_7, 0, 1, 1, 0);
 VAR_16->sd.ctrl_handler = &VAR_16->hdl;

 VAR_17 = VAR_16->hdl.error;
 if (VAR_17)
  goto cleanup;

 FUNC_5(&VAR_16->hdl);

 VAR_17 = FUNC_2(VAR_16);
 if (VAR_17)
  goto cleanup;

 FUNC_10(VAR_14, "chip found @ 0x%02x (%s)\n",
   VAR_14->addr, VAR_14->adapter->name);
 return 0;

cleanup:
 FUNC_3(&VAR_16->hdl);
 FUNC_7(&VAR_16->sd);
 FUNC_9(VAR_14, "failed to probe @ 0x%02x (%s)\n",
  VAR_14->addr, VAR_14->adapter->name);
 return VAR_17;
}
