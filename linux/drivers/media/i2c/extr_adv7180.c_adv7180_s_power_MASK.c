
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int powered; int mutex; } ;


 int FUNC_0 (struct adv7180_state*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct adv7180_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct adv7180_state *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->mutex);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 == 0)
  VAR_2->powered = VAR_1;

 FUNC_2(&VAR_2->mutex);
 return VAR_3;
}
