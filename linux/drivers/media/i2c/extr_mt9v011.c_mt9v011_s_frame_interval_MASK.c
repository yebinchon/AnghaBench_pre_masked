
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_fract {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int *,int *) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
        struct v4l2_subdev_frame_interval *VAR_3)
{
 struct v4l2_fract *VAR_4 = &VAR_3->interval;
 u16 VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_4->numerator, VAR_4->denominator);

 FUNC_2(VAR_2, VAR_0, VAR_5);
 FUNC_3(1, VAR_1, VAR_2, "Setting speed to %d\n", VAR_5);


 FUNC_0(VAR_2, &VAR_4->numerator, &VAR_4->denominator);

 return 0;
}
