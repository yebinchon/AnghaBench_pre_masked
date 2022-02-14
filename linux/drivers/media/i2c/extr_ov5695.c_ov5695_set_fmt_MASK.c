
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int field; scalar_t__ height; scalar_t__ width; int code; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5695_mode {scalar_t__ height; scalar_t__ vts_def; scalar_t__ width; scalar_t__ hts_def; } ;
struct ov5695 {int mutex; int vblank; int hblank; struct ov5695_mode const* cur_mode; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ov5695_mode* FUNC_3 (struct v4l2_subdev_format*) ;
 struct ov5695* FUNC_4 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_4,
     struct v4l2_subdev_pad_config *VAR_5,
     struct v4l2_subdev_format *VAR_6)
{
 struct ov5695 *VAR_7 = FUNC_4(VAR_4);
 const struct ov5695_mode *VAR_8;
 s64 VAR_9, VAR_10;

 FUNC_1(&VAR_7->mutex);

 VAR_8 = FUNC_3(VAR_6);
 VAR_6->format.code = VAR_0;
 VAR_6->format.width = VAR_8->width;
 VAR_6->format.height = VAR_8->height;
 VAR_6->format.field = VAR_2;
 if (VAR_6->which == VAR_3) {



 } else {
  VAR_7->cur_mode = VAR_8;
  VAR_9 = VAR_8->hts_def - VAR_8->width;
  FUNC_0(VAR_7->hblank, VAR_9,
      VAR_9, 1, VAR_9);
  VAR_10 = VAR_8->vts_def - VAR_8->height;
  FUNC_0(VAR_7->vblank, VAR_10,
      VAR_1 - VAR_8->height,
      1, VAR_10);
 }

 FUNC_2(&VAR_7->mutex);

 return 0;
}
