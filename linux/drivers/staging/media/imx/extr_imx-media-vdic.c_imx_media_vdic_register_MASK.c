
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int function; int * ops; } ;
struct v4l2_subdev {int grp_id; int name; int flags; int owner; TYPE_1__ entity; int * internal_ops; } ;
struct vdic_priv {int lock; struct v4l2_subdev sd; struct ipu_soc* ipu; struct device* ipu_dev; } ;
struct v4l2_device {int dummy; } ;
struct ipu_soc {int dummy; } ;
struct device {TYPE_2__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int VAR_0 ;
 struct v4l2_subdev* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vdic_priv* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (struct ipu_soc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,struct vdic_priv*) ;
 int FUNC_8 (struct v4l2_subdev*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

struct v4l2_subdev *FUNC_9(struct v4l2_device *VAR_7,
         struct device *VAR_8,
         struct ipu_soc *VAR_9,
         u32 VAR_10)
{
 struct vdic_priv *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_8, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 VAR_11->ipu_dev = VAR_8;
 VAR_11->ipu = VAR_9;

 FUNC_8(&VAR_11->sd, &VAR_6);
 FUNC_7(&VAR_11->sd, VAR_11);
 VAR_11->sd.internal_ops = &VAR_5;
 VAR_11->sd.entity.ops = &VAR_4;
 VAR_11->sd.entity.function = VAR_2;
 VAR_11->sd.owner = VAR_8->driver->owner;
 VAR_11->sd.flags = VAR_3;
 VAR_11->sd.grp_id = VAR_10;
 FUNC_2(VAR_11->sd.name, sizeof(VAR_11->sd.name),
        VAR_11->sd.grp_id, FUNC_3(VAR_9));

 FUNC_5(&VAR_11->lock);

 VAR_12 = FUNC_6(VAR_7, &VAR_11->sd);
 if (VAR_12)
  goto free;

 return &VAR_11->sd;
free:
 FUNC_4(&VAR_11->lock);
 return FUNC_0(VAR_12);
}
