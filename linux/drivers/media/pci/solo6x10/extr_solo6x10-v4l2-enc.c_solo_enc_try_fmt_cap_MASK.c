
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int width; int height; int field; scalar_t__ bytesperline; int sizeimage; int colorspace; int pixelformat; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct solo_enc_dev {struct solo_dev* solo_dev; } ;
struct solo_dev {int video_hsize; int video_vsize; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ FUNC_0 (int ,int ) ;
 struct solo_enc_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
       struct v4l2_format *VAR_5)
{
 struct solo_enc_dev *VAR_6 = FUNC_1(VAR_3);
 struct solo_dev *VAR_7 = VAR_6->solo_dev;
 struct v4l2_pix_format *VAR_8 = &VAR_5->fmt.pix;

 if (FUNC_0(VAR_8->pixelformat, VAR_7->type))
  return -VAR_0;

 if (VAR_8->width < VAR_7->video_hsize ||
     VAR_8->height < VAR_7->video_vsize << 1) {

  VAR_8->width = VAR_7->video_hsize >> 1;
  VAR_8->height = VAR_7->video_vsize;
 } else {

  VAR_8->width = VAR_7->video_hsize;
  VAR_8->height = VAR_7->video_vsize << 1;
 }

 switch (VAR_8->field) {
 case 128:
 case 129:
  break;
 case 130:
 default:
  VAR_8->field = 129;
  break;
 }


 VAR_8->colorspace = VAR_2;
 VAR_8->sizeimage = VAR_1;
 VAR_8->bytesperline = 0;

 return 0;
}
