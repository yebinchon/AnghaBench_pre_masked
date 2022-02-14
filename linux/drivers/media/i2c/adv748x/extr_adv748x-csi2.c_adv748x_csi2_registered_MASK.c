
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int v4l2_dev; int name; } ;
struct TYPE_4__ {struct adv748x_csi2* tx; int sd; } ;
struct TYPE_3__ {struct adv748x_csi2* tx; int sd; } ;
struct adv748x_state {TYPE_2__ hdmi; TYPE_1__ afe; } ;
struct adv748x_csi2 {struct adv748x_state* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv748x_csi2*,int ,int *,int ,int) ;
 struct adv748x_csi2* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct adv748x_state*,char*,char*,int ) ;
 scalar_t__ FUNC_3 (struct adv748x_state*) ;
 int FUNC_4 (struct adv748x_state*) ;
 scalar_t__ FUNC_5 (struct adv748x_csi2*) ;
 int FUNC_6 (struct adv748x_csi2*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_2)
{
 struct adv748x_csi2 *VAR_3 = FUNC_1(VAR_2);
 struct adv748x_state *VAR_4 = VAR_3->state;
 int VAR_5;

 FUNC_2(VAR_4, "Registered %s (%s)", FUNC_5(VAR_3) ? "TXA":"TXB",
   VAR_2->name);







 if (FUNC_3(VAR_4)) {
  VAR_5 = FUNC_0(VAR_3, VAR_2->v4l2_dev,
       &VAR_4->afe.sd,
       VAR_0,
       FUNC_6(VAR_3));
  if (VAR_5)
   return VAR_5;


  if (FUNC_6(VAR_3))
   VAR_4->afe.tx = VAR_3;
 }


 if (FUNC_6(VAR_3) || !FUNC_4(VAR_4))
  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_2->v4l2_dev, &VAR_4->hdmi.sd,
      VAR_1, 1);
 if (VAR_5)
  return VAR_5;


 VAR_4->hdmi.tx = VAR_3;

 return 0;
}
