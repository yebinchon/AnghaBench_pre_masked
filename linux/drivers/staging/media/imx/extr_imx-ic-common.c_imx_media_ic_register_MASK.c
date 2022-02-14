
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int function; int ops; } ;
struct v4l2_subdev {int flags; int grp_id; int name; int owner; TYPE_1__ entity; int internal_ops; } ;
struct v4l2_device {int dummy; } ;
struct ipu_soc {int dummy; } ;
struct imx_ic_priv {size_t task_id; struct v4l2_subdev sd; struct ipu_soc* ipu; struct device* ipu_dev; } ;
struct device {TYPE_2__* driver; } ;
struct TYPE_6__ {int (* init ) (struct imx_ic_priv*) ;int (* remove ) (struct imx_ic_priv*) ;int entity_ops; int internal_ops; int subdev_ops; } ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct imx_ic_priv* FUNC_1 (struct device*,int,int ) ;
 TYPE_3__** VAR_9 ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (struct ipu_soc*) ;
 int FUNC_4 (struct imx_ic_priv*) ;
 int FUNC_5 (struct imx_ic_priv*) ;
 int FUNC_6 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,struct imx_ic_priv*) ;
 int FUNC_8 (struct v4l2_subdev*,int ) ;

struct v4l2_subdev *FUNC_9(struct v4l2_device *VAR_10,
       struct device *VAR_11,
       struct ipu_soc *VAR_12,
       u32 VAR_13)
{
 struct imx_ic_priv *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_1(VAR_11, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return FUNC_0(-VAR_1);

 VAR_14->ipu_dev = VAR_11;
 VAR_14->ipu = VAR_12;


 switch (VAR_13) {
 case 130:
  VAR_14->task_id = VAR_4;
  break;
 case 129:
  VAR_14->task_id = VAR_3;
  break;
 case 128:
  VAR_14->task_id = VAR_5;
  break;
 default:
  return FUNC_0(-VAR_0);
 }

 FUNC_8(&VAR_14->sd, VAR_9[VAR_14->task_id]->subdev_ops);
 FUNC_7(&VAR_14->sd, VAR_14);
 VAR_14->sd.internal_ops = VAR_9[VAR_14->task_id]->internal_ops;
 VAR_14->sd.entity.ops = VAR_9[VAR_14->task_id]->entity_ops;
 VAR_14->sd.entity.function = VAR_6;
 VAR_14->sd.owner = VAR_11->driver->owner;
 VAR_14->sd.flags = VAR_7 | VAR_8;
 VAR_14->sd.grp_id = VAR_13;
 FUNC_2(VAR_14->sd.name, sizeof(VAR_14->sd.name),
        VAR_14->sd.grp_id, FUNC_3(VAR_12));

 VAR_15 = VAR_9[VAR_14->task_id]->init(VAR_14);
 if (VAR_15)
  return FUNC_0(VAR_15);

 VAR_15 = FUNC_6(VAR_10, &VAR_14->sd);
 if (VAR_15) {
  VAR_9[VAR_14->task_id]->remove(VAR_14);
  return FUNC_0(VAR_15);
 }

 return &VAR_14->sd;
}
