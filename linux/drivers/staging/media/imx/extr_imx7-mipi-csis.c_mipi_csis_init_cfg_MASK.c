
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int ,int ,int ,int ,int *) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
         struct v4l2_subdev_pad_config *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_7);

  VAR_8 = FUNC_0(VAR_6, VAR_1,
           VAR_2, 0,
           VAR_3, ((void*)0));
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
