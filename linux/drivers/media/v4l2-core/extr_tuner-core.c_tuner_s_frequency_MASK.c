
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int frequency; int type; } ;
struct tuner {int dummy; } ;


 int FUNC_0 (struct tuner*,int ) ;
 scalar_t__ FUNC_1 (struct tuner*,int ) ;
 struct tuner* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, const struct v4l2_frequency *VAR_1)
{
 struct tuner *VAR_2 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_2, VAR_1->type) == 0)
  FUNC_0(VAR_2, VAR_1->frequency);
 return 0;
}
