
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov7670_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ov7670_info*,int*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int*) ;
 struct ov7670_info* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, int VAR_2, int VAR_3)
{
 struct ov7670_info *VAR_4 = FUNC_2(VAR_1);
 int VAR_5[VAR_0];
 int VAR_6;

 FUNC_0(VAR_4, VAR_5, VAR_2, VAR_3);
 VAR_6 = FUNC_1(VAR_1, VAR_5);
 return VAR_6;
}
