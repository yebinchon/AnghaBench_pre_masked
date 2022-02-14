
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_ops {int dummy; } ;
struct media_entity {int * ops; } ;
struct v4l2_subdev {int flags; int grp_id; int name; struct media_entity entity; } ;
struct TYPE_2__ {int flags; } ;
struct ispstat {TYPE_1__ pad; struct v4l2_subdev subdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct media_entity*,int,TYPE_1__*) ;
 int FUNC_2 (int ,int ,char*,char const*) ;
 int FUNC_3 (struct v4l2_subdev*,struct ispstat*) ;
 int FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_ops const*) ;

__attribute__((used)) static int FUNC_5(struct ispstat *VAR_5, const char *VAR_6,
      const struct v4l2_subdev_ops *VAR_7)
{
 struct v4l2_subdev *VAR_8 = &VAR_5->subdev;
 struct media_entity *VAR_9 = &VAR_8->entity;

 FUNC_4(VAR_8, VAR_7);
 FUNC_2(VAR_8->name, VAR_4, "OMAP3 ISP %s", VAR_6);
 VAR_8->grp_id = FUNC_0(16);
 VAR_8->flags |= VAR_3 | VAR_2;
 FUNC_3(VAR_8, VAR_5);

 VAR_5->pad.flags = VAR_1 | VAR_0;
 VAR_9->ops = ((void*)0);

 return FUNC_1(VAR_9, 1, &VAR_5->pad);
}
