
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; int name; } ;
struct fimc_isp {int subdev; } ;
struct fimc_is {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fimc_is*,struct v4l2_ctrl*) ;
 int FUNC_1 (struct fimc_is*,int ) ;
 int FUNC_2 (struct fimc_is*,int ) ;
 int FUNC_3 (struct fimc_is*,int ) ;
 int FUNC_4 (struct fimc_is*,int ) ;
 int FUNC_5 (struct fimc_is*,int ) ;
 int FUNC_6 (struct fimc_is*,int ,int ) ;
 struct fimc_isp* FUNC_7 (struct v4l2_ctrl*) ;
 int FUNC_8 (struct fimc_is*,int) ;
 struct fimc_is* FUNC_9 (struct fimc_isp*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 int FUNC_11 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct v4l2_ctrl *VAR_8)
{
 struct fimc_isp *VAR_9 = FUNC_7(VAR_8);
 struct fimc_is *VAR_10 = FUNC_9(VAR_9);
 bool VAR_11 = 1;
 int VAR_12 = 0;

 switch (VAR_8->id) {
 case 135:
  FUNC_6(VAR_10, VAR_2,
        VAR_8->val);
  break;

 case 129:
  FUNC_6(VAR_10, VAR_5,
        VAR_8->val);
  break;

 case 128:
  FUNC_6(VAR_10, VAR_6,
        VAR_8->val);
  break;

 case 134:
  FUNC_6(VAR_10, VAR_3,
        VAR_8->val);
  break;

 case 137:
  FUNC_6(VAR_10, VAR_1,
        VAR_8->val);
  break;

 case 132:
  FUNC_6(VAR_10, VAR_4,
        VAR_8->val);
  break;

 case 133:
  VAR_12 = FUNC_4(VAR_10, VAR_8->val);
  break;

 case 138:
  VAR_12 = FUNC_5(VAR_10, VAR_8->val);
  break;

 case 139:
  VAR_12 = FUNC_0(VAR_10, VAR_8);
  VAR_11 = 0;
  break;

 case 131:
  VAR_12 = FUNC_3(VAR_10, VAR_8->val);
  break;

 case 130:
  VAR_12 = FUNC_1(VAR_10, VAR_8->val);
  break;

 case 136:
  FUNC_2(VAR_10, VAR_8->val);
  break;

 default:
  VAR_12 = -VAR_0;
  break;
 }

 if (VAR_12 < 0) {
  FUNC_11(&VAR_9->subdev, "Failed to set control: %s (%d)\n",
      VAR_8->name, VAR_8->val);
  return VAR_12;
 }

 if (VAR_11 && FUNC_10(VAR_7, &VAR_10->state))
  return FUNC_8(VAR_10, 1);

 return 0;
}
