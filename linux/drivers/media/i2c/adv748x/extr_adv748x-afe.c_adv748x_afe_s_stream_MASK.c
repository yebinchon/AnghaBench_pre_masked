
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_afe {int streaming; int tx; int input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adv748x_afe*,int ) ;
 int FUNC_1 (struct adv748x_afe*,scalar_t__*,int *) ;
 struct adv748x_state* FUNC_2 (struct adv748x_afe*) ;
 struct adv748x_afe* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct adv748x_state*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct adv748x_afe *VAR_3 = FUNC_3(VAR_1);
 struct adv748x_state *VAR_4 = FUNC_2(VAR_3);
 u32 VAR_5 = VAR_0;
 int VAR_6;

 FUNC_6(&VAR_4->mutex);

 if (VAR_2) {
  VAR_6 = FUNC_0(VAR_3, VAR_3->input);
  if (VAR_6)
   goto unlock;
 }

 VAR_6 = FUNC_4(VAR_3->tx, VAR_2);
 if (VAR_6)
  goto unlock;

 VAR_3->streaming = VAR_2;

 FUNC_1(VAR_3, &VAR_5, ((void*)0));
 if (VAR_5 != VAR_0)
  FUNC_5(VAR_4, "Detected SDP signal\n");
 else
  FUNC_5(VAR_4, "Couldn't detect SDP video signal\n");

unlock:
 FUNC_7(&VAR_4->mutex);

 return VAR_6;
}
