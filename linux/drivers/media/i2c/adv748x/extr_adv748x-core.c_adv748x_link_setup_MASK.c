
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct media_pad {struct media_entity* entity; } ;
struct media_entity {int dummy; } ;
struct TYPE_4__ {struct adv748x_csi2* tx; } ;
struct TYPE_3__ {struct adv748x_csi2* tx; struct v4l2_subdev sd; } ;
struct adv748x_state {TYPE_2__ hdmi; TYPE_1__ afe; } ;
struct adv748x_csi2 {struct v4l2_subdev* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct adv748x_csi2* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct adv748x_state*,int ,int,int) ;
 scalar_t__ FUNC_2 (struct adv748x_csi2*) ;
 struct v4l2_subdev* FUNC_3 (struct media_entity*) ;
 struct adv748x_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct media_entity *VAR_6,
         const struct media_pad *VAR_7,
         const struct media_pad *VAR_8, u32 VAR_9)
{
 struct v4l2_subdev *VAR_10 = FUNC_3(VAR_8->entity);
 struct v4l2_subdev *VAR_11 = FUNC_3(VAR_6);
 struct adv748x_state *VAR_12 = FUNC_4(VAR_11);
 struct adv748x_csi2 *VAR_13 = FUNC_0(VAR_11);
 bool VAR_14 = VAR_9 & VAR_5;
 u8 VAR_15 = VAR_1 |
         VAR_2 |
         VAR_3;
 u8 VAR_16 = 0;


 if (VAR_14 && VAR_13->src)
  return -VAR_4;


 if (VAR_10 == &VAR_12->afe.sd)
  VAR_12->afe.tx = VAR_14 ? VAR_13 : ((void*)0);
 else
  VAR_12->hdmi.tx = VAR_14 ? VAR_13 : ((void*)0);

 VAR_13->src = VAR_14 ? VAR_10 : ((void*)0);

 if (VAR_12->afe.tx) {

  VAR_16 |= VAR_2;
  if (FUNC_2(VAR_13))
   VAR_16 |= VAR_3;
  else
   VAR_16 |= VAR_1;
 }

 if (VAR_12->hdmi.tx)
  VAR_16 |= VAR_2;

 return FUNC_1(VAR_12, VAR_0, VAR_15, VAR_16);
}
