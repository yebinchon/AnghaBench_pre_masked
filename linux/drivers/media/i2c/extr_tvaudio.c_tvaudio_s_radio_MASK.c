
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {int radio; } ;


 struct CHIPSTATE* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0)
{
 struct CHIPSTATE *VAR_1 = FUNC_0(VAR_0);

 VAR_1->radio = 1;

 return 0;
}
