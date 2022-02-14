
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u32 ;
struct v4l2_querymenu {unsigned long long index; int value; int name; scalar_t__ reserved; int id; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int type; char** qmenu; unsigned long long minimum; unsigned long long maximum; unsigned long long menu_skip_mask; int * qmenu_int; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int) ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,int ) ;

int FUNC_2(struct v4l2_ctrl_handler *VAR_1, struct v4l2_querymenu *VAR_2)
{
 struct v4l2_ctrl *VAR_3;
 u32 VAR_4 = VAR_2->index;

 VAR_3 = FUNC_1(VAR_1, VAR_2->id);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->reserved = 0;

 switch (VAR_3->type) {
 case 128:
  if (VAR_3->qmenu == ((void*)0))
   return -VAR_0;
  break;
 case 129:
  if (VAR_3->qmenu_int == ((void*)0))
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_4 < VAR_3->minimum || VAR_4 > VAR_3->maximum)
  return -VAR_0;


 if (VAR_3->menu_skip_mask & (1ULL << VAR_4))
  return -VAR_0;

 if (VAR_3->type == 128) {
  if (VAR_3->qmenu[VAR_4] == ((void*)0) || VAR_3->qmenu[VAR_4][0] == '\0')
   return -VAR_0;
  FUNC_0(VAR_2->name, VAR_3->qmenu[VAR_4], sizeof(VAR_2->name));
 } else {
  VAR_2->value = VAR_3->qmenu_int[VAR_4];
 }
 return 0;
}
