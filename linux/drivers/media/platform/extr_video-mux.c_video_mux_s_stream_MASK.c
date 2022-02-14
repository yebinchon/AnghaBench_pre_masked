
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_mux {int active; } ;
struct TYPE_2__ {int * pads; } ;
struct v4l2_subdev {int dev; TYPE_1__ entity; } ;
struct media_pad {int entity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct media_pad* FUNC_2 (int *) ;
 struct v4l2_subdev* FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ,int) ;
 struct video_mux* FUNC_5 (struct v4l2_subdev*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_5, int VAR_6)
{
 struct video_mux *VAR_7 = FUNC_5(VAR_5);
 struct v4l2_subdev *VAR_8;
 struct media_pad *VAR_9;

 if (VAR_7->active == -1) {
  FUNC_0(VAR_5->dev, "Can not start streaming on inactive mux\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_2(&VAR_5->entity.pads[VAR_7->active]);
 if (!VAR_9) {
  FUNC_0(VAR_5->dev, "Failed to find remote source pad\n");
  return -VAR_2;
 }

 if (!FUNC_1(VAR_9->entity)) {
  FUNC_0(VAR_5->dev, "Upstream entity is not a v4l2 subdev\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_9->entity);

 return FUNC_4(VAR_8, VAR_4, VAR_3, VAR_6);
}
