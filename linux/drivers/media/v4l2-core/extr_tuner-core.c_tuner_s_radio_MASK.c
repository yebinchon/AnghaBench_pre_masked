
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tuner {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tuner*,int ) ;
 scalar_t__ FUNC_1 (struct tuner*,int ) ;
 struct tuner* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1)
{
 struct tuner *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_1(VAR_2, VAR_0) == 0)
  FUNC_0(VAR_2, 0);
 return 0;
}
