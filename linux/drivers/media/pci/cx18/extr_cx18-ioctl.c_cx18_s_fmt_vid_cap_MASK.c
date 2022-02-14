
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int width; int height; int code; } ;
struct v4l2_subdev_format {TYPE_4__ format; int which; } ;
struct TYPE_5__ {int width; int height; scalar_t__ pixelformat; } ;
struct TYPE_6__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx18_stream {scalar_t__ pixelformat; int vb_bytes_per_frame; int vb_bytes_per_line; } ;
struct cx18_open_id {size_t type; struct cx18* cx; } ;
struct TYPE_7__ {int width; int height; } ;
struct cx18 {int sd_av; TYPE_3__ cxhdl; int ana_capturing; struct cx18_stream* streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 int FUNC_2 (struct file*,void*,struct v4l2_format*) ;
 struct cx18_open_id* FUNC_3 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6, void *VAR_7,
    struct v4l2_format *VAR_8)
{
 struct cx18_open_id *VAR_9 = FUNC_3(VAR_7);
 struct cx18 *VAR_10 = VAR_9->cx;
 struct v4l2_subdev_format VAR_11 = {
  .which = VAR_3,
 };
 struct cx18_stream *VAR_12 = &VAR_10->streams[VAR_9->type];
 int VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = FUNC_2(VAR_6, VAR_7, VAR_8);
 if (VAR_13)
  return VAR_13;
 VAR_14 = VAR_8->fmt.pix.width;
 VAR_15 = VAR_8->fmt.pix.height;

 if (VAR_10->cxhdl.width == VAR_14 && VAR_10->cxhdl.height == VAR_15 &&
     VAR_12->pixelformat == VAR_8->fmt.pix.pixelformat)
  return 0;

 if (FUNC_0(&VAR_10->ana_capturing) > 0)
  return -VAR_0;

 VAR_12->pixelformat = VAR_8->fmt.pix.pixelformat;


 if (VAR_12->pixelformat == VAR_2) {
  VAR_12->vb_bytes_per_frame = VAR_15 * 720 * 3 / 2;
  VAR_12->vb_bytes_per_line = 720;
 } else {
  VAR_12->vb_bytes_per_frame = VAR_15 * 720 * 2;
  VAR_12->vb_bytes_per_line = 1440;
 }

 VAR_11.format.width = VAR_10->cxhdl.width = VAR_14;
 VAR_11.format.height = VAR_10->cxhdl.height = VAR_15;
 VAR_11.format.code = VAR_1;
 FUNC_4(VAR_10->sd_av, VAR_4, VAR_5, ((void*)0), &VAR_11);
 return FUNC_1(VAR_6, VAR_7, VAR_8);
}
