
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_format {int format; int which; int pad; } ;
struct v4l2_pix_format {int width; int height; int pixelformat; int bytesperline; int sizeimage; int field; int colorspace; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int input; int sd; int pad_source; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int) ;
 int VAR_7 ;
 int FUNC_1 (struct v4l2_pix_format*,int *) ;
 int FUNC_2 (int ,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct cobalt_stream* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9,
  struct v4l2_format *VAR_10)
{
 struct cobalt_stream *VAR_11 = FUNC_3(VAR_8);
 struct v4l2_pix_format *VAR_12 = &VAR_10->fmt.pix;
 struct v4l2_subdev_format VAR_13;


 if ((VAR_12->width < 176) || (VAR_12->height < 144)) {
  VAR_12->width = 176;
  VAR_12->height = 144;
 }

 if ((VAR_12->width > 1920) || (VAR_12->height > 1080)) {
  VAR_12->width = 1920;
  VAR_12->height = 1080;
 }


 VAR_12->width &= ~0x3;


 VAR_12->height &= ~0x1;

 if (VAR_11->input == 1) {

  VAR_12->width = 1920;
  VAR_12->height = 1080;
  VAR_12->colorspace = VAR_3;
 } else {
  VAR_13.pad = VAR_11->pad_source;
  VAR_13.which = VAR_5;
  FUNC_2(VAR_11->sd, VAR_7, VAR_6, ((void*)0), &VAR_13);
  FUNC_1(VAR_12, &VAR_13.format);
 }

 switch (VAR_12->pixelformat) {
 case 128:
 default:
  VAR_12->bytesperline = FUNC_0(VAR_12->bytesperline & ~0x3,
    VAR_12->width * VAR_2);
  VAR_12->pixelformat = 128;
  break;
 case 129:
  VAR_12->bytesperline = FUNC_0(VAR_12->bytesperline & ~0x3,
    VAR_12->width * VAR_0);
  break;
 case 130:
  VAR_12->bytesperline = FUNC_0(VAR_12->bytesperline & ~0x3,
    VAR_12->width * VAR_1);
  break;
 }

 VAR_12->sizeimage = VAR_12->bytesperline * VAR_12->height;
 VAR_12->field = VAR_4;

 return 0;
}
