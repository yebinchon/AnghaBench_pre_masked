
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_data {int id; int field; } ;


 int VAR_0 ;



 int FUNC_0 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data const*) ;
 int FUNC_1 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data const*) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data const*) ;
 int FUNC_3 (struct v4l2_subdev*,struct v4l2_sliced_vbi_data const*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, const struct v4l2_sliced_vbi_data *VAR_2)
{
 switch (VAR_2->id) {
 case 128:
  return FUNC_2(VAR_1, VAR_2);
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 case 130:
  if (VAR_2->field == 0)
   return FUNC_0(VAR_1, VAR_2);
  return FUNC_3(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
 return 0;
}
