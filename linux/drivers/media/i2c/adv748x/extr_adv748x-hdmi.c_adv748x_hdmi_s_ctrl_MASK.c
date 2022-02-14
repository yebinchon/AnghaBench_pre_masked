
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_ctrl {int id; int val; } ;
struct adv748x_state {int dummy; } ;
struct adv748x_hdmi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 struct adv748x_hdmi* FUNC_0 (struct v4l2_ctrl*) ;
 struct adv748x_state* FUNC_1 (struct adv748x_hdmi*) ;
 int FUNC_2 (struct adv748x_state*,int ,int ,int ) ;
 int FUNC_3 (struct adv748x_state*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_9)
{
 struct adv748x_hdmi *VAR_10 = FUNC_0(VAR_9);
 struct adv748x_state *VAR_11 = FUNC_1(VAR_10);
 int VAR_12;
 u8 VAR_13;


 VAR_12 = FUNC_2(VAR_11, VAR_6,
   VAR_7,
   VAR_7);
 if (VAR_12 < 0)
  return VAR_12;

 switch (VAR_9->id) {
 case 132:
  VAR_12 = FUNC_3(VAR_11, VAR_0, VAR_9->val);
  break;
 case 130:
  VAR_12 = FUNC_3(VAR_11, VAR_2, VAR_9->val);
  break;
 case 131:
  VAR_12 = FUNC_3(VAR_11, VAR_1, VAR_9->val);
  break;
 case 129:
  VAR_12 = FUNC_3(VAR_11, VAR_5, VAR_9->val);
  break;
 case 128:
  VAR_13 = VAR_9->val;


  if (VAR_13) {
   VAR_13--;
   VAR_13 |= VAR_4;
  }

  VAR_12 = FUNC_3(VAR_11, VAR_3, VAR_13);

  break;
 default:
  return -VAR_8;
 }

 return VAR_12;
}
