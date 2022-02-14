
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct m5mols_info {scalar_t__ mode; struct v4l2_subdev sd; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int ,scalar_t__*) ;
 int FUNC_1 (struct v4l2_subdev*,scalar_t__ const) ;
 int FUNC_2 (struct v4l2_subdev*,char*,scalar_t__) ;

int FUNC_3(struct m5mols_info *VAR_2, u8 VAR_3)
{
 struct v4l2_subdev *VAR_4 = &VAR_2->sd;
 int VAR_5 = -VAR_0;
 u8 VAR_6;

 if (VAR_3 < 128 || VAR_3 > 130)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_1, &VAR_6);
 if (VAR_5 || VAR_6 == VAR_3)
  return VAR_5;

 switch (VAR_6) {
 case 128:
  VAR_5 = FUNC_1(VAR_4, 129);
  if (VAR_3 == 129)
   break;
  if (!VAR_5)
   VAR_5 = FUNC_1(VAR_4, 130);
  break;

 case 129:
  if (VAR_3 == 128) {
   VAR_5 = FUNC_1(VAR_4, 128);
   break;
  }

  VAR_5 = FUNC_1(VAR_4, 130);
  break;

 case 130:
  VAR_5 = FUNC_1(VAR_4, 129);
  if (VAR_3 == 129)
   break;
  if (!VAR_5)
   VAR_5 = FUNC_1(VAR_4, 128);
  break;

 default:
  FUNC_2(VAR_4, "Wrong mode: %d\n", VAR_3);
 }

 if (!VAR_5)
  VAR_2->mode = VAR_3;

 return VAR_5;
}
