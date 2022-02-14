
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int default_value; int step; int maximum; int minimum; int type; int name; int flags; int id; } ;
struct v4l2_query_ext_ctrl {int default_value; int step; int maximum; int minimum; int name; int flags; int type; int id; int member_0; } ;
struct v4l2_ctrl_handler {int dummy; } ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,struct v4l2_query_ext_ctrl*) ;

int FUNC_2(struct v4l2_ctrl_handler *VAR_0, struct v4l2_queryctrl *VAR_1)
{
 struct v4l2_query_ext_ctrl VAR_2 = { VAR_1->id };
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_1->id = VAR_2.id;
 VAR_1->type = VAR_2.type;
 VAR_1->flags = VAR_2.flags;
 FUNC_0(VAR_1->name, VAR_2.name, sizeof(VAR_1->name));
 switch (VAR_1->type) {
 case 131:
 case 132:
 case 129:
 case 130:
 case 128:
 case 133:
  VAR_1->minimum = VAR_2.minimum;
  VAR_1->maximum = VAR_2.maximum;
  VAR_1->step = VAR_2.step;
  VAR_1->default_value = VAR_2.default_value;
  break;
 default:
  VAR_1->minimum = 0;
  VAR_1->maximum = 0;
  VAR_1->step = 0;
  VAR_1->default_value = 0;
  break;
 }
 return 0;
}
