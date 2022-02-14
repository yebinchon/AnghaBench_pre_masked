
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; struct media_entity* entity; } ;
struct media_entity {int dummy; } ;
struct TYPE_2__ {int csid_id; } ;
struct csiphy_device {TYPE_1__ cfg; } ;
struct csid_device {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct media_pad const*) ;
 struct v4l2_subdev* FUNC_1 (struct media_entity*) ;
 void* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct media_entity *VAR_3,
        const struct media_pad *VAR_4,
        const struct media_pad *VAR_5, u32 VAR_6)
{
 if ((VAR_4->flags & VAR_2) &&
     (VAR_6 & VAR_1)) {
  struct v4l2_subdev *VAR_7;
  struct csiphy_device *VAR_8;
  struct csid_device *VAR_9;

  if (FUNC_0(VAR_4))
   return -VAR_0;

  VAR_7 = FUNC_1(VAR_3);
  VAR_8 = FUNC_2(VAR_7);

  VAR_7 = FUNC_1(VAR_5->entity);
  VAR_9 = FUNC_2(VAR_7);

  VAR_8->cfg.csid_id = VAR_9->id;
 }

 return 0;
}
