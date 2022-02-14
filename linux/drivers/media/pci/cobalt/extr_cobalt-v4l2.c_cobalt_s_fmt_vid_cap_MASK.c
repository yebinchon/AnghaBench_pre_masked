
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int pixelformat; int bytesperline; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;
struct cobalt_stream {int pixfmt; int bpp; int stride; int height; int width; int q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (struct cobalt_stream*) ;
 scalar_t__ FUNC_1 (struct file*,void*,struct v4l2_format*) ;
 scalar_t__ FUNC_2 (int *) ;
 struct cobalt_stream* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_5, void *VAR_6,
  struct v4l2_format *VAR_7)
{
 struct cobalt_stream *VAR_8 = FUNC_3(VAR_5);
 struct v4l2_pix_format *VAR_9 = &VAR_7->fmt.pix;

 if (FUNC_2(&VAR_8->q))
  return -VAR_3;

 if (FUNC_1(VAR_5, VAR_6, VAR_7))
  return -VAR_4;

 VAR_8->width = VAR_9->width;
 VAR_8->height = VAR_9->height;
 VAR_8->stride = VAR_9->bytesperline;
 switch (VAR_9->pixelformat) {
 case 128:
  VAR_8->bpp = VAR_2;
  break;
 case 129:
  VAR_8->bpp = VAR_0;
  break;
 case 130:
  VAR_8->bpp = VAR_1;
  break;
 default:
  return -VAR_4;
 }
 VAR_8->pixfmt = VAR_9->pixelformat;
 FUNC_0(VAR_8);

 return 0;
}
