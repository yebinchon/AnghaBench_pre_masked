
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int height; int width; int code; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct imx355_mode {scalar_t__ width; scalar_t__ llp; scalar_t__ fll_min; scalar_t__ fll_def; scalar_t__ height; } ;
struct imx355 {int link_def_freq; int mutex; int hblank; struct imx355_mode const* cur_mode; int vblank; int pixel_rate; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct imx355*) ;
 int FUNC_6 (struct imx355*,struct imx355_mode const*,struct v4l2_subdev_format*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 struct imx355* FUNC_9 (struct v4l2_subdev*) ;
 struct imx355_mode* FUNC_10 (int ,int ,int ,scalar_t__,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_11 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(struct v4l2_subdev *VAR_4,
        struct v4l2_subdev_pad_config *VAR_5,
        struct v4l2_subdev_format *VAR_6)
{
 struct imx355 *VAR_7 = FUNC_9(VAR_4);
 const struct imx355_mode *VAR_8;
 struct v4l2_mbus_framefmt *VAR_9;
 s32 VAR_10;
 s32 VAR_11;
 s64 VAR_12;
 u64 VAR_13;
 u32 VAR_14;

 FUNC_7(&VAR_7->mutex);





 VAR_6->format.code = FUNC_5(VAR_7);

 VAR_8 = FUNC_10(VAR_2,
          FUNC_0(VAR_2),
          VAR_3, VAR_14,
          VAR_6->format.width, VAR_6->format.height);
 FUNC_6(VAR_7, VAR_8, VAR_6);
 if (VAR_6->which == VAR_1) {
  VAR_9 = FUNC_11(VAR_4, VAR_5, VAR_6->pad);
  *VAR_9 = VAR_6->format;
 } else {
  VAR_7->cur_mode = VAR_8;
  VAR_13 = VAR_7->link_def_freq * 2 * 4;
  FUNC_4(VAR_13, 10);
  FUNC_3(VAR_7->pixel_rate, VAR_13);

  VAR_14 = VAR_7->cur_mode->height;
  VAR_10 = VAR_7->cur_mode->fll_def - VAR_14;
  VAR_11 = VAR_7->cur_mode->fll_min - VAR_14;
  VAR_14 = VAR_0 - VAR_14;
  FUNC_1(VAR_7->vblank, VAR_11, VAR_14, 1,
      VAR_10);
  FUNC_2(VAR_7->vblank, VAR_10);
  VAR_12 = VAR_8->llp - VAR_7->cur_mode->width;




  FUNC_1(VAR_7->hblank, VAR_12,
      VAR_12, 1, VAR_12);
 }

 FUNC_8(&VAR_7->mutex);

 return 0;
}
