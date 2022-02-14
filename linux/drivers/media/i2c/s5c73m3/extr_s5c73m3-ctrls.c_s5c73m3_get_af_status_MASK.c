
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_ctrl {int val; } ;
struct s5c73m3 {int sensor_sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct s5c73m3*,int ,int*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_4, struct v4l2_ctrl *VAR_5)
{
 u16 VAR_6 = 132;

 int VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_6);

 switch (VAR_6) {
 case 131:
 case 134:
 case 129:
  VAR_5->val = VAR_1;
  break;
 case 130:
 case 135:
  VAR_5->val = VAR_3;
  break;
 default:
  FUNC_1(&VAR_4->sensor_sd, "Unknown AF status %#x\n", VAR_6);

 case 128:
 case 132:
 case 133:
  VAR_5->val = VAR_2;
  break;
 }

 return VAR_7;
}
