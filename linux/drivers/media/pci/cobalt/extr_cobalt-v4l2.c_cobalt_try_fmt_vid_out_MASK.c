
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int pixelformat; int bytesperline; int sizeimage; int field; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
  struct v4l2_format *VAR_5)
{
 struct v4l2_pix_format *VAR_6 = &VAR_5->fmt.pix;


 if ((VAR_6->width < 176) || (VAR_6->height < 144)) {
  VAR_6->width = 176;
  VAR_6->height = 144;
 }

 if ((VAR_6->width > 1920) || (VAR_6->height > 1080)) {
  VAR_6->width = 1920;
  VAR_6->height = 1080;
 }


 VAR_6->width &= ~0x3;


 VAR_6->height &= ~0x1;

 switch (VAR_6->pixelformat) {
 case 128:
 default:
  VAR_6->bytesperline = FUNC_0(VAR_6->bytesperline & ~0x3,
    VAR_6->width * VAR_1);
  VAR_6->pixelformat = 128;
  break;
 case 129:
  VAR_6->bytesperline = FUNC_0(VAR_6->bytesperline & ~0x3,
    VAR_6->width * VAR_0);
  break;
 }

 VAR_6->sizeimage = VAR_6->bytesperline * VAR_6->height;
 VAR_6->field = VAR_2;

 return 0;
}
