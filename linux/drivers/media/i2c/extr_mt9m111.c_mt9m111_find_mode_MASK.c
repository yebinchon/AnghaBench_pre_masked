
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct mt9m111_mode_info {unsigned int max_fps; } ;
struct TYPE_2__ {int dev; } ;
struct mt9m111 {int * ctx; TYPE_1__ subdev; struct v4l2_rect rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 struct mt9m111_mode_info* VAR_7 ;

__attribute__((used)) static const struct mt9m111_mode_info *
FUNC_3(struct mt9m111 *VAR_8, unsigned int VAR_9,
    unsigned int VAR_10, unsigned int VAR_11)
{
 const struct mt9m111_mode_info *VAR_12;
 struct v4l2_rect *VAR_13 = &VAR_8->rect;
 unsigned int VAR_14, VAR_15 = (unsigned int) -1;
 int VAR_16, VAR_17 = VAR_3;
 bool VAR_18 = 0;






 if (VAR_13->width != VAR_1 ||
     VAR_13->height != VAR_0) {
  FUNC_2(VAR_8->subdev.dev,
    "Framerate selection is not supported for cropped "
    "images\n");
  return ((void*)0);
 }


 if (VAR_10 > VAR_1 / 2 || VAR_11 > VAR_0 / 2) {
  FUNC_1(VAR_8->subdev.dev,
   "Framerates > 15fps are supported only for images "
   "not exceeding 640x512\n");
  VAR_18 = 1;
 }


 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  unsigned int VAR_19 = VAR_7[VAR_16].max_fps;

  if (VAR_19 == 30 && VAR_18)
   continue;

  VAR_14 = FUNC_0(VAR_19 - VAR_9);
  if (VAR_14 < VAR_15) {
   VAR_17 = VAR_16;
   VAR_15 = VAR_14;
  }
 }





 VAR_12 = &VAR_7[VAR_17];
 VAR_8->ctx = (VAR_17 == VAR_2) ? &VAR_5 :
            &VAR_6;
 return VAR_12;
}
