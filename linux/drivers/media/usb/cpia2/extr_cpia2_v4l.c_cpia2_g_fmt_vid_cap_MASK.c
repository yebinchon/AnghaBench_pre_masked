
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int colorspace; int sizeimage; scalar_t__ bytesperline; int field; int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct camera_data {int frame_size; int pixelformat; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct camera_data* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
     struct v4l2_format *VAR_4)
{
 struct camera_data *VAR_5 = FUNC_0(VAR_2);

 VAR_4->fmt.pix.width = VAR_5->width;
 VAR_4->fmt.pix.height = VAR_5->height;
 VAR_4->fmt.pix.pixelformat = VAR_5->pixelformat;
 VAR_4->fmt.pix.field = VAR_1;
 VAR_4->fmt.pix.bytesperline = 0;
 VAR_4->fmt.pix.sizeimage = VAR_5->frame_size;
 VAR_4->fmt.pix.colorspace = VAR_0;

 return 0;
}
