
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_afe {int curr_norm; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv748x_state*,int) ;
 int FUNC_1 (struct adv748x_afe*,int *,int *) ;
 int FUNC_2 (int ) ;
 struct adv748x_state* FUNC_3 (struct adv748x_afe*) ;
 struct adv748x_afe* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_2, v4l2_std_id *VAR_3)
{
 struct adv748x_afe *VAR_4 = FUNC_4(VAR_2);
 struct adv748x_state *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 int VAR_7;

 FUNC_6(&VAR_5->mutex);

 if (VAR_4->streaming) {
  VAR_7 = -VAR_1;
  goto unlock;
 }


 FUNC_0(VAR_5,
           VAR_0);

 FUNC_5(100);


 VAR_7 = FUNC_1(VAR_4, ((void*)0), VAR_3);

 VAR_6 = FUNC_2(VAR_4->curr_norm);
 if (VAR_6 < 0)
  goto unlock;


 FUNC_0(VAR_5, VAR_6);

unlock:
 FUNC_7(&VAR_5->mutex);

 return VAR_7;
}
