
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int maximum; int minimum; int menu_skip_mask; int default_value; } ;


 int FUNC_0 (struct v4l2_ctrl*,int,int,int,int ) ;
 int FUNC_1 (struct v4l2_ctrl*,int) ;
 int FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (struct v4l2_ctrl*) ;

__attribute__((used)) static void FUNC_4(struct v4l2_ctrl *VAR_0, int VAR_1)
{
 if (!VAR_0)
  return;

 FUNC_2(VAR_0);





 if (VAR_1 > VAR_0->maximum) {
  FUNC_0(VAR_0, VAR_0->minimum, VAR_1,
   VAR_0->menu_skip_mask & ~(1 << VAR_1),
   VAR_0->default_value);
 } else if (VAR_1 < VAR_0->minimum) {
  FUNC_0(VAR_0, VAR_1, VAR_0->maximum,
   VAR_0->menu_skip_mask & ~(1 << VAR_1),
   VAR_0->default_value);
 }

 FUNC_1(VAR_0, VAR_1);

 FUNC_3(VAR_0);
}
