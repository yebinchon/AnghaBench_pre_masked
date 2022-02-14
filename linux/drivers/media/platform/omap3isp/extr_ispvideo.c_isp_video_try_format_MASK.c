
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_subdev_format {int format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct isp_video {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isp_video*,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct v4l2_subdev* FUNC_2 (struct isp_video*,int *) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct isp_video* FUNC_4 (struct file*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_5, void *VAR_6, struct v4l2_format *VAR_7)
{
 struct isp_video *VAR_8 = FUNC_4(VAR_5);
 struct v4l2_subdev_format VAR_9;
 struct v4l2_subdev *VAR_10;
 u32 VAR_11;
 int VAR_12;

 if (VAR_7->type != VAR_8->type)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8, &VAR_11);
 if (VAR_10 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_7->fmt.pix, &VAR_9.format);

 VAR_9.pad = VAR_11;
 VAR_9.which = VAR_3;
 VAR_12 = FUNC_3(VAR_10, VAR_11, VAR_4, ((void*)0), &VAR_9);
 if (VAR_12)
  return VAR_12 == -VAR_1 ? -VAR_2 : VAR_12;

 FUNC_0(VAR_8, &VAR_9.format, &VAR_7->fmt.pix);
 return 0;
}
