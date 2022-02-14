
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_pix_format {scalar_t__ pixelformat; int sizeimage; int colorspace; int field; int height; int width; } ;
struct TYPE_2__ {struct v4l2_pix_format pix; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct solo_dev {int video_hsize; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct solo_dev*) ;
 int FUNC_1 (struct solo_dev*) ;
 struct solo_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
       struct v4l2_format *VAR_6)
{
 struct solo_dev *VAR_7 = FUNC_2(VAR_4);
 struct v4l2_pix_format *VAR_8 = &VAR_6->fmt.pix;
 int VAR_9 = FUNC_0(VAR_7);

 if (VAR_8->pixelformat != VAR_3)
  return -VAR_0;

 VAR_8->width = VAR_7->video_hsize;
 VAR_8->height = FUNC_1(VAR_7);
 VAR_8->sizeimage = VAR_9;
 VAR_8->field = VAR_2;
 VAR_8->pixelformat = VAR_3;
 VAR_8->colorspace = VAR_1;
 return 0;
}
