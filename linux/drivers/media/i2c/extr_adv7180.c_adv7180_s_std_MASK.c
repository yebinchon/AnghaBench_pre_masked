
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int mutex; int curr_norm; } ;


 int FUNC_0 (struct adv7180_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct adv7180_state* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct adv7180_state *VAR_2 = FUNC_3(VAR_0);
 int VAR_3 = FUNC_1(&VAR_2->mutex);

 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  goto out;

 VAR_2->curr_norm = VAR_1;

 VAR_3 = FUNC_0(VAR_2);
out:
 FUNC_2(&VAR_2->mutex);
 return VAR_3;
}
