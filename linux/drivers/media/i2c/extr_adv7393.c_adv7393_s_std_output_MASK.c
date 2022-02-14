
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv7393_state {scalar_t__ std; } ;


 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;
 struct adv7393_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct adv7393_state *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;

 if (VAR_2->std == VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  VAR_2->std = VAR_1;

 return VAR_3;
}
