
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; int pad; } ;
struct v4l2_pix_format {int height; int bytesperline; int sizeimage; int pixelformat; int colorspace; int field; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int height; int stride; int input; int pixfmt; int sd; int pad_source; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_pix_format*,int *) ;
 int FUNC_1 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct cobalt_stream* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
  struct v4l2_format *VAR_7)
{
 struct cobalt_stream *VAR_8 = FUNC_2(VAR_5);
 struct v4l2_pix_format *VAR_9 = &VAR_7->fmt.pix;
 struct v4l2_subdev_format VAR_10;

 VAR_9->width = VAR_8->width;
 VAR_9->height = VAR_8->height;
 VAR_9->bytesperline = VAR_8->stride;
 VAR_9->field = VAR_1;

 if (VAR_8->input == 1) {
  VAR_9->colorspace = VAR_0;
 } else {
  VAR_10.pad = VAR_8->pad_source;
  VAR_10.which = VAR_2;
  FUNC_1(VAR_8->sd, VAR_4, VAR_3, ((void*)0), &VAR_10);
  FUNC_0(VAR_9, &VAR_10.format);
 }

 VAR_9->pixelformat = VAR_8->pixfmt;
 VAR_9->sizeimage = VAR_9->bytesperline * VAR_9->height;

 return 0;
}
