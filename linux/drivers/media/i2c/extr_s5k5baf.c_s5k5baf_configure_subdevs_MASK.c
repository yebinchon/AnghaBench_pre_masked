
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int function; } ;
struct v4l2_subdev {int name; TYPE_1__ entity; int flags; int * internal_ops; int owner; } ;
struct TYPE_5__ {void* flags; } ;
struct s5k5baf {struct v4l2_subdev cis_sd; TYPE_2__* pads; struct v4l2_subdev sd; TYPE_2__ cis_pad; } ;
struct i2c_client {int addr; int dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,int,char*,int,int) ;
 int FUNC_5 (struct v4l2_subdev*,struct i2c_client*,int *) ;
 int FUNC_6 (struct v4l2_subdev*,struct s5k5baf*) ;
 int FUNC_7 (struct v4l2_subdev*,int *) ;

__attribute__((used)) static int FUNC_8(struct s5k5baf *VAR_14,
         struct i2c_client *VAR_15)
{
 struct v4l2_subdev *VAR_16;
 int VAR_17;

 VAR_16 = &VAR_14->cis_sd;
 FUNC_7(VAR_16, &VAR_11);
 VAR_16->owner = VAR_8;
 FUNC_6(VAR_16, VAR_14);
 FUNC_4(VAR_16->name, sizeof(VAR_16->name), "S5K5BAF-CIS %d-%04x",
   FUNC_1(VAR_15->adapter), VAR_15->addr);

 VAR_16->internal_ops = &VAR_10;
 VAR_16->flags |= VAR_9;

 VAR_14->cis_pad.flags = VAR_3;
 VAR_16->entity.function = VAR_0;
 VAR_17 = FUNC_3(&VAR_16->entity, VAR_4, &VAR_14->cis_pad);
 if (VAR_17 < 0)
  goto err;

 VAR_16 = &VAR_14->sd;
 FUNC_5(VAR_16, VAR_15, &VAR_13);
 FUNC_4(VAR_16->name, sizeof(VAR_16->name), "S5K5BAF-ISP %d-%04x",
   FUNC_1(VAR_15->adapter), VAR_15->addr);

 VAR_16->internal_ops = &VAR_12;
 VAR_16->flags |= VAR_9;

 VAR_14->pads[VAR_6].flags = VAR_2;
 VAR_14->pads[VAR_7].flags = VAR_3;
 VAR_16->entity.function = VAR_1;
 VAR_17 = FUNC_3(&VAR_16->entity, VAR_5, VAR_14->pads);

 if (!VAR_17)
  return 0;

 FUNC_2(&VAR_14->cis_sd.entity);
err:
 FUNC_0(&VAR_15->dev, "cannot init media entity %s\n", VAR_16->name);
 return VAR_17;
}
