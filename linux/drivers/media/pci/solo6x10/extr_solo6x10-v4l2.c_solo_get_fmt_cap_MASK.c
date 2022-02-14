
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {int bytesperline; int colorspace; int sizeimage; int field; int pixelformat; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct solo_dev {int video_hsize; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*) ;
 int FUNC_2 (struct solo_dev*) ;
 struct solo_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
       struct v4l2_format *VAR_5)
{
 struct solo_dev *VAR_6 = FUNC_3(VAR_3);
 struct v4l2_pix_format *VAR_7 = &VAR_5->fmt.pix;

 VAR_7->width = VAR_6->video_hsize;
 VAR_7->height = FUNC_2(VAR_6);
 VAR_7->pixelformat = VAR_2;
 VAR_7->field = VAR_1;
 VAR_7->sizeimage = FUNC_1(VAR_6);
 VAR_7->colorspace = VAR_0;
 VAR_7->bytesperline = FUNC_0(VAR_6);

 return 0;
}
