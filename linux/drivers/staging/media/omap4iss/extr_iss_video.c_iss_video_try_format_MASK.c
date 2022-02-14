
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
struct iss_video {scalar_t__ type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iss_video*,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 struct v4l2_subdev* FUNC_2 (struct iss_video*,int *) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;
 struct iss_video* FUNC_4 (struct file*) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_3, void *VAR_4, struct v4l2_format *VAR_5)
{
 struct iss_video *VAR_6 = FUNC_4(VAR_3);
 struct v4l2_subdev_format VAR_7;
 struct v4l2_subdev *VAR_8;
 u32 VAR_9;
 int VAR_10;

 if (VAR_5->type != VAR_6->type)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, &VAR_9);
 if (!VAR_8)
  return -VAR_0;

 FUNC_1(&VAR_5->fmt.pix, &VAR_7.format);

 VAR_7.pad = VAR_9;
 VAR_7.which = VAR_1;
 VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_2, ((void*)0), &VAR_7);
 if (VAR_10)
  return VAR_10;

 FUNC_0(VAR_6, &VAR_7.format, &VAR_5->fmt.pix);
 return 0;
}
