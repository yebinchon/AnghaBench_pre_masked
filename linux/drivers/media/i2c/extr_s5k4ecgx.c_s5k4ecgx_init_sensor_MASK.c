
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);


 FUNC_0(100);

 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_3(VAR_0, "Failed to write initial settings\n");

 return VAR_1;
}
