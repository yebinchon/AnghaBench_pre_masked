
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
typedef enum v4l2_exposure_auto_type { ____Placeholder_v4l2_exposure_auto_type } v4l2_exposure_auto_type ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned char*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
  enum v4l2_exposure_auto_type VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;

 VAR_5 = FUNC_0(VAR_3, VAR_1, &VAR_6);
 if (VAR_5 == 0) {
  if (VAR_4 == VAR_2)
   VAR_6 |= VAR_0;
  else
   VAR_6 &= ~VAR_0;
  VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_6);
 }
 return VAR_5;
}
