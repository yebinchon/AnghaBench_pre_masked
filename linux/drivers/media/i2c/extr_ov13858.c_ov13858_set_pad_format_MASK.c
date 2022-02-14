
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov13858_mode {size_t link_freq_index; size_t vts_def; size_t height; size_t vts_min; size_t width; } ;
struct ov13858 {int mutex; int hblank; struct ov13858_mode const* cur_mode; int vblank; int pixel_rate; int link_freq; } ;
typedef size_t s64 ;
typedef size_t s32 ;
struct TYPE_2__ {size_t pixels_per_line; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,size_t,size_t,int,size_t) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int ,size_t) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t* VAR_5 ;
 size_t FUNC_4 (size_t) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ov13858_mode const*,struct v4l2_subdev_format*) ;
 int VAR_6 ;
 struct ov13858* FUNC_8 (struct v4l2_subdev*) ;
 struct ov13858_mode* FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_10 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_11(struct v4l2_subdev *VAR_8,
         struct v4l2_subdev_pad_config *VAR_9,
         struct v4l2_subdev_format *VAR_10)
{
 struct ov13858 *VAR_11 = FUNC_8(VAR_8);
 const struct ov13858_mode *VAR_12;
 struct v4l2_mbus_framefmt *VAR_13;
 s32 VAR_14;
 s32 VAR_15;
 s64 VAR_16;
 s64 VAR_17;
 s64 VAR_18;

 FUNC_5(&VAR_11->mutex);


 if (VAR_10->format.code != VAR_0)
  VAR_10->format.code = VAR_0;

 VAR_12 = FUNC_9(VAR_6,
          FUNC_0(VAR_6),
          VAR_7, VAR_3,
          VAR_10->format.width, VAR_10->format.height);
 FUNC_7(VAR_12, VAR_10);
 if (VAR_10->which == VAR_2) {
  VAR_13 = FUNC_10(VAR_8, VAR_9, VAR_10->pad);
  *VAR_13 = VAR_10->format;
 } else {
  VAR_11->cur_mode = VAR_12;
  FUNC_2(VAR_11->link_freq, VAR_12->link_freq_index);
  VAR_18 = VAR_5[VAR_12->link_freq_index];
  VAR_17 = FUNC_4(VAR_18);
  FUNC_3(VAR_11->pixel_rate, VAR_17);


  VAR_14 = VAR_11->cur_mode->vts_def -
        VAR_11->cur_mode->height;
  VAR_15 = VAR_11->cur_mode->vts_min -
        VAR_11->cur_mode->height;
  FUNC_1(
   VAR_11->vblank, VAR_15,
   VAR_1 - VAR_11->cur_mode->height, 1,
   VAR_14);
  FUNC_2(VAR_11->vblank, VAR_14);
  VAR_16 =
   VAR_4[VAR_12->link_freq_index].pixels_per_line
    - VAR_11->cur_mode->width;
  FUNC_1(VAR_11->hblank, VAR_16,
      VAR_16, 1, VAR_16);
 }

 FUNC_6(&VAR_11->mutex);

 return 0;
}
