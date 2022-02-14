
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int id; int val; int handler; } ;
struct max2175 {int dummy; } ;





 struct max2175* FUNC_0 (int ) ;
 int FUNC_1 (struct max2175*) ;
 int FUNC_2 (struct max2175*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_0)
{
 struct max2175 *VAR_1 = FUNC_0(VAR_0->handler);

 switch (VAR_0->id) {
 case 129:
  VAR_0->val = FUNC_1(VAR_1);
  break;
 case 130:
  VAR_0->val = FUNC_2(VAR_1, 49, 4, 0);
  break;
 case 128:
  VAR_0->val = (FUNC_2(VAR_1, 60, 7, 6) == 3);
  break;
 }

 return 0;
}
