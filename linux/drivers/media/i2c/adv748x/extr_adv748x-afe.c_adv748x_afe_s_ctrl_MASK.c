
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; } ;
struct adv748x_state {int dummy; } ;
struct adv748x_afe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;





 struct adv748x_state* FUNC_0 (struct adv748x_afe*) ;
 struct adv748x_afe* FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct adv748x_state*,int ,int ,int) ;
 int FUNC_3 (struct adv748x_state*,int,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_10)
{
 struct adv748x_afe *VAR_11 = FUNC_1(VAR_10);
 struct adv748x_state *VAR_12 = FUNC_0(VAR_11);
 bool VAR_13;
 int VAR_14;

 VAR_14 = FUNC_3(VAR_12, 0x0e, 0x00);
 if (VAR_14 < 0)
  return VAR_14;

 switch (VAR_10->id) {
 case 132:
  VAR_14 = FUNC_3(VAR_12, VAR_0, VAR_10->val);
  break;
 case 130:

  VAR_14 = FUNC_3(VAR_12, VAR_6, -VAR_10->val);
  break;
 case 131:
  VAR_14 = FUNC_3(VAR_12, VAR_1, VAR_10->val);
  break;
 case 129:
  VAR_14 = FUNC_3(VAR_12, VAR_7, VAR_10->val);
  if (VAR_14)
   break;
  VAR_14 = FUNC_3(VAR_12, VAR_8, VAR_10->val);
  break;
 case 128:
  VAR_13 = !!VAR_10->val;


  VAR_14 = FUNC_2(VAR_12, VAR_2, VAR_3,
    VAR_13);
  if (VAR_14)
   break;
  VAR_14 = FUNC_2(VAR_12, VAR_4, VAR_5,
    VAR_13 ? VAR_10->val - 1 : 0);
  break;
 default:
  return -VAR_9;
 }

 return VAR_14;
}
