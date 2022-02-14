
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {int flags; int entity; } ;
struct media_entity {int dummy; } ;
struct ispif_line {int interface; int vfe_id; int csid_id; } ;
typedef enum vfe_line_id { ____Placeholder_vfe_line_id } vfe_line_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct media_pad const*) ;
 struct v4l2_subdev* FUNC_2 (struct media_entity*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int*) ;
 struct ispif_line* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct media_entity *VAR_3,
       const struct media_pad *VAR_4,
       const struct media_pad *VAR_5, u32 VAR_6)
{
 if (VAR_6 & VAR_1) {
  if (FUNC_1(VAR_4))
   return -VAR_0;

  if (VAR_4->flags & VAR_2) {
   struct v4l2_subdev *VAR_7;
   struct ispif_line *VAR_8;

   VAR_7 = FUNC_2(VAR_3);
   VAR_8 = FUNC_6(VAR_7);

   FUNC_3(VAR_5->entity, &VAR_8->csid_id);
  } else {
   struct v4l2_subdev *VAR_9;
   struct ispif_line *VAR_10;
   enum vfe_line_id VAR_11;

   VAR_9 = FUNC_2(VAR_3);
   VAR_10 = FUNC_6(VAR_9);

   FUNC_4(VAR_5->entity, &VAR_10->vfe_id);
   FUNC_5(VAR_5->entity, &VAR_11);
   VAR_10->interface = FUNC_0(VAR_11);
  }
 }

 return 0;
}
