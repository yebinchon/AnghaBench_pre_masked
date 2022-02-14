
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int height; int width; int code; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov5670_mode {size_t link_freq_index; size_t vts_def; size_t height; size_t vts_min; size_t width; } ;
struct ov5670 {int mutex; int hblank; struct ov5670_mode const* cur_mode; int vblank; int pixel_rate; int link_freq; } ;
typedef size_t s32 ;
struct TYPE_4__ {int pixel_rate; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,size_t,size_t,int,size_t) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ov5670_mode const*,struct v4l2_subdev_format*) ;
 int VAR_6 ;
 struct ov5670* FUNC_7 (struct v4l2_subdev*) ;
 struct ov5670_mode* FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 TYPE_1__* FUNC_9 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct v4l2_subdev *VAR_8,
     struct v4l2_subdev_pad_config *VAR_9,
     struct v4l2_subdev_format *VAR_10)
{
 struct ov5670 *VAR_11 = FUNC_7(VAR_8);
 const struct ov5670_mode *VAR_12;
 s32 VAR_13;
 s32 VAR_14;

 FUNC_4(&VAR_11->mutex);

 VAR_10->format.code = VAR_0;

 VAR_12 = FUNC_8(VAR_6,
          FUNC_0(VAR_6),
          VAR_7, VAR_4,
          VAR_10->format.width, VAR_10->format.height);
 FUNC_6(VAR_12, VAR_10);
 if (VAR_10->which == VAR_3) {
  *FUNC_9(VAR_8, VAR_9, VAR_10->pad) = VAR_10->format;
 } else {
  VAR_11->cur_mode = VAR_12;
  FUNC_2(VAR_11->link_freq, VAR_12->link_freq_index);
  FUNC_3(
   VAR_11->pixel_rate,
   VAR_5[VAR_12->link_freq_index].pixel_rate);

  VAR_13 = VAR_11->cur_mode->vts_def -
        VAR_11->cur_mode->height;
  FUNC_1(
   VAR_11->vblank,
   VAR_11->cur_mode->vts_min - VAR_11->cur_mode->height,
   VAR_2 - VAR_11->cur_mode->height, 1,
   VAR_13);
  FUNC_2(VAR_11->vblank, VAR_13);
  VAR_14 = VAR_1 - VAR_11->cur_mode->width;
  FUNC_1(VAR_11->hblank, VAR_14, VAR_14, 1,
      VAR_14);
 }

 FUNC_5(&VAR_11->mutex);

 return 0;
}
