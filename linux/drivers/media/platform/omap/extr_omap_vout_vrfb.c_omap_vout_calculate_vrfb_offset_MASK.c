
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int height; int top; int width; int left; } ;
struct v4l2_pix_format {scalar_t__ pixelformat; int height; int width; } ;
struct omap_vout_device {int mirror; int cropped_offset; int ps; int vr_ps; int line_length; TYPE_1__* vrfb_context; struct v4l2_pix_format pix; struct v4l2_rect crop; } ;
typedef enum dss_rotation { ____Placeholder_dss_rotation } dss_rotation ;
struct TYPE_2__ {int yoffset; int bytespp; int xoffset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct omap_vout_device*) ;




 scalar_t__ FUNC_1 (struct omap_vout_device*) ;

void FUNC_2(struct omap_vout_device *VAR_5)
{
 enum dss_rotation VAR_6;
 bool VAR_7 = VAR_5->mirror;
 struct v4l2_rect *VAR_8 = &VAR_5->crop;
 struct v4l2_pix_format *VAR_9 = &VAR_5->pix;
 int *VAR_10 = &VAR_5->cropped_offset;
 int VAR_11 = 1, VAR_12 = 2, VAR_13 = 2;
 int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;

 VAR_6 = FUNC_0(VAR_5);

 if (VAR_4 == VAR_9->pixelformat ||
   VAR_3 == VAR_9->pixelformat) {
  if (FUNC_1(VAR_5)) {






   VAR_12 = 4;
   VAR_11 = 2;
  } else {
   VAR_12 = 2;
  }
 } else if (VAR_2 == VAR_9->pixelformat) {
  VAR_12 = 4;
 } else if (VAR_1 == VAR_9->pixelformat) {
  VAR_12 = 3;
 }
 VAR_5->ps = VAR_12;
 VAR_5->vr_ps = VAR_11;

 if (FUNC_1(VAR_5)) {
  VAR_17 = VAR_0;
  VAR_15 = (VAR_9->height - VAR_8->height) - VAR_8->top;
  VAR_16 = (VAR_9->width - VAR_8->width) - VAR_8->left;
 } else {
  VAR_17 = VAR_9->width;
 }
 VAR_5->line_length = VAR_17;
 switch (VAR_6) {
 case 128:
  VAR_14 = VAR_5->vrfb_context[0].yoffset *
   VAR_5->vrfb_context[0].bytespp;
  VAR_13 = VAR_12 / VAR_11;
  if (!VAR_7) {
   *VAR_10 = VAR_14 + VAR_17 *
    VAR_13 * VAR_16 + VAR_8->top * VAR_13;
  } else {
   *VAR_10 = VAR_14 + VAR_17 * VAR_13 *
    VAR_16 + VAR_8->top * VAR_13 + (VAR_17 *
    ((VAR_8->width / (VAR_11)) - 1) * VAR_12);
  }
  break;
 case 130:
  VAR_14 = ((VAR_0 * VAR_5->vrfb_context[0].yoffset *
   VAR_5->vrfb_context[0].bytespp) +
   (VAR_5->vrfb_context[0].xoffset *
   VAR_5->vrfb_context[0].bytespp));
  if (!VAR_7) {
   *VAR_10 = VAR_14 + (VAR_17 * VAR_12 * VAR_15) +
    (VAR_16 / VAR_11) * VAR_12;

  } else {
   *VAR_10 = VAR_14 + (VAR_17 * VAR_12 * VAR_15) +
    (VAR_16 / VAR_11) * VAR_12 + (VAR_17 *
    (VAR_8->height - 1) * VAR_12);
  }
  break;
 case 129:
  VAR_14 = VAR_0 * VAR_5->vrfb_context[0].xoffset *
   VAR_5->vrfb_context[0].bytespp;
  VAR_13 = VAR_12 / VAR_11;
  if (!VAR_7) {
   *VAR_10 = VAR_14 + VAR_17 *
       VAR_13 * VAR_8->left + VAR_15 * VAR_12;
  } else {
   *VAR_10 = VAR_14 + VAR_17 *
    VAR_13 * VAR_8->left + VAR_15 * VAR_12 +
    (VAR_17 * ((VAR_8->width / VAR_11) - 1) *
     VAR_12);
  }
  break;
 case 131:
  if (!VAR_7) {
   *VAR_10 = (VAR_17 * VAR_12) *
    VAR_8->top + (VAR_8->left / VAR_11) * VAR_12;
  } else {
   *VAR_10 = (VAR_17 * VAR_12) *
    VAR_8->top + (VAR_8->left / VAR_11) * VAR_12 +
    (VAR_17 * (VAR_8->height - 1) * VAR_12);
  }
  break;
 default:
  *VAR_10 = (VAR_17 * VAR_12 * VAR_8->top) /
   VAR_11 + (VAR_8->left * VAR_12) / VAR_11 +
   ((VAR_8->width / VAR_11) - 1) * VAR_12;
  break;
 }
}
