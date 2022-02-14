
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pixelformat; int height; int width; } ;
struct TYPE_4__ {TYPE_1__ pix; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct pwc_device {int pixfmt; int height; int width; int vframes; int vb_queue; } ;
struct file {int dummy; } ;
typedef int pixelformat ;


 int VAR_0 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct pwc_device*,int ,int ,int,int,int*,int ) ;
 int FUNC_2 (struct v4l2_format*,int ,int ,int ) ;
 int FUNC_3 (struct pwc_device*,struct v4l2_format*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct pwc_device* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_1, void *VAR_2, struct v4l2_format *VAR_3)
{
 struct pwc_device *VAR_4 = FUNC_5(VAR_1);
 int VAR_5, VAR_6, VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_4, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 if (FUNC_4(&VAR_4->vb_queue))
  return -VAR_0;

 VAR_6 = VAR_3->fmt.pix.pixelformat;

 FUNC_0("Trying to set format to: width=%d height=%d fps=%d format=%c%c%c%c\n",
   VAR_3->fmt.pix.width, VAR_3->fmt.pix.height, VAR_4->vframes,
   (VAR_6)&255,
   (VAR_6>>8)&255,
   (VAR_6>>16)&255,
   (VAR_6>>24)&255);

 VAR_5 = FUNC_1(VAR_4, VAR_3->fmt.pix.width, VAR_3->fmt.pix.height,
     VAR_6, 30, &VAR_7, 0);

 FUNC_0("pwc_set_video_mode(), return=%d\n", VAR_5);

 FUNC_2(VAR_3, VAR_4->width, VAR_4->height, VAR_4->pixfmt);
 return VAR_5;
}
