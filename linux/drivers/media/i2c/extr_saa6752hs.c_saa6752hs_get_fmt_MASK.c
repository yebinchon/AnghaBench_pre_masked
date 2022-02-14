
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct saa6752hs_state {size_t video_format; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct saa6752hs_state* FUNC_0 (struct v4l2_subdev*) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_7,
  struct v4l2_subdev_pad_config *VAR_8,
  struct v4l2_subdev_format *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10 = &VAR_9->format;
 struct saa6752hs_state *VAR_11 = FUNC_0(VAR_7);

 if (VAR_9->pad)
  return -VAR_0;

 if (VAR_11->video_format == VAR_3)
  VAR_11->video_format = VAR_2;
 VAR_10->width = VAR_6[VAR_11->video_format].fmt.pix.width;
 VAR_10->height = VAR_6[VAR_11->video_format].fmt.pix.height;
 VAR_10->code = VAR_1;
 VAR_10->field = VAR_5;
 VAR_10->colorspace = VAR_4;
 return 0;
}
