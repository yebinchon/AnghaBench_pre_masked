
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {scalar_t__ type; } ;
struct pwc_device {int pixfmt; int height; int width; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct v4l2_format*,int ,int ,int ) ;
 struct pwc_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct pwc_device *VAR_5 = FUNC_2(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;

 FUNC_0("ioctl(VIDIOC_G_FMT) return size %dx%d\n",
   VAR_5->width, VAR_5->height);
 FUNC_1(VAR_4, VAR_5->width, VAR_5->height, VAR_5->pixfmt);
 return 0;
}
