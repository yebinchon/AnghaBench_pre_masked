
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_afe {int curr_norm; } ;


 int FUNC_0 (struct adv748x_state*,int) ;
 int FUNC_1 (int ) ;
 struct adv748x_state* FUNC_2 (struct adv748x_afe*) ;
 struct adv748x_afe* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct adv748x_afe *VAR_2 = FUNC_3(VAR_0);
 struct adv748x_state *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = FUNC_1(VAR_1);

 if (VAR_4 < 0)
  return VAR_4;

 FUNC_4(&VAR_3->mutex);

 FUNC_0(VAR_3, VAR_4);
 VAR_2->curr_norm = VAR_1;

 FUNC_5(&VAR_3->mutex);

 return 0;
}
