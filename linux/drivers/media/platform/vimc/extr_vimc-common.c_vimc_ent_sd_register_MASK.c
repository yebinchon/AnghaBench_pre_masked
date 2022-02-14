
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct vimc_ent_device {int pads; TYPE_1__* ent; } ;
struct v4l2_subdev_ops {int dummy; } ;
struct v4l2_subdev_internal_ops {int dummy; } ;
struct TYPE_3__ {int * ops; int function; } ;
struct v4l2_subdev {TYPE_1__ entity; int flags; scalar_t__ ctrl_handler; int name; int owner; struct v4l2_subdev_internal_ops const* internal_ops; } ;
struct v4l2_device {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char const* const,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int ,char const* const,int) ;
 int FUNC_6 (struct v4l2_device*,struct v4l2_subdev*) ;
 int FUNC_7 (struct v4l2_subdev*,struct vimc_ent_device*) ;
 int FUNC_8 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,unsigned long const*) ;

int FUNC_11(struct vimc_ent_device *VAR_4,
    struct v4l2_subdev *VAR_5,
    struct v4l2_device *VAR_6,
    const char *const VAR_7,
    u32 VAR_8,
    u16 VAR_9,
    const unsigned long *VAR_10,
    const struct v4l2_subdev_internal_ops *VAR_11,
    const struct v4l2_subdev_ops *VAR_12)
{
 int VAR_13;


 VAR_4->pads = FUNC_10(VAR_9, VAR_10);
 if (FUNC_0(VAR_4->pads))
  return FUNC_1(VAR_4->pads);


 VAR_4->ent = &VAR_5->entity;


 FUNC_8(VAR_5, VAR_12);
 VAR_5->internal_ops = VAR_11;
 VAR_5->entity.function = VAR_8;
 VAR_5->entity.ops = &VAR_3;
 VAR_5->owner = VAR_0;
 FUNC_5(VAR_5->name, VAR_7, sizeof(VAR_5->name));
 FUNC_7(VAR_5, VAR_4);


 VAR_5->flags |= VAR_1;
 if (VAR_5->ctrl_handler)
  VAR_5->flags |= VAR_2;


 VAR_13 = FUNC_4(&VAR_5->entity, VAR_9, VAR_4->pads);
 if (VAR_13)
  goto err_clean_pads;


 VAR_13 = FUNC_6(VAR_6, VAR_5);
 if (VAR_13) {
  FUNC_2(VAR_6->dev,
   "%s: subdev register failed (err=%d)\n",
   VAR_7, VAR_13);
  goto err_clean_m_ent;
 }

 return 0;

err_clean_m_ent:
 FUNC_3(&VAR_5->entity);
err_clean_pads:
 FUNC_9(VAR_4->pads);
 return VAR_13;
}
