
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct iss_video {int mutex; } ;
typedef int fmt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v4l2_subdev* FUNC_0 (struct iss_video*,int *) ;
 int FUNC_1 (struct v4l2_subdev_format*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int ,int *,struct v4l2_subdev_format*) ;

__attribute__((used)) static int
FUNC_5(struct iss_video *VAR_3,
         struct v4l2_mbus_framefmt *VAR_4)
{
 struct v4l2_subdev_format VAR_5;
 struct v4l2_subdev *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_3, &VAR_7);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.pad = VAR_7;
 VAR_5.which = VAR_1;

 FUNC_2(&VAR_3->mutex);
 VAR_8 = FUNC_4(VAR_6, VAR_7, VAR_2, ((void*)0), &VAR_5);
 FUNC_3(&VAR_3->mutex);

 if (VAR_8)
  return VAR_8;

 *VAR_4 = VAR_5.format;
 return 0;
}
