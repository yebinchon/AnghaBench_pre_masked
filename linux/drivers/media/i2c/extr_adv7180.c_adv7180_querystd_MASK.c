
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int mutex; int curr_norm; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv7180_state*,int *,int *) ;
 int FUNC_1 (struct adv7180_state*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct adv7180_state* FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_2, v4l2_std_id *VAR_3)
{
 struct adv7180_state *VAR_4 = FUNC_5(VAR_2);
 int VAR_5 = FUNC_3(&VAR_4->mutex);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->streaming) {
  VAR_5 = -VAR_1;
  goto unlock;
 }

 VAR_5 = FUNC_1(VAR_4,
   VAR_0);
 if (VAR_5)
  goto unlock;

 FUNC_2(100);
 FUNC_0(VAR_4, ((void*)0), VAR_3);

 VAR_5 = FUNC_6(VAR_4->curr_norm);
 if (VAR_5 < 0)
  goto unlock;

 VAR_5 = FUNC_1(VAR_4, VAR_5);

unlock:
 FUNC_4(&VAR_4->mutex);
 return VAR_5;
}
