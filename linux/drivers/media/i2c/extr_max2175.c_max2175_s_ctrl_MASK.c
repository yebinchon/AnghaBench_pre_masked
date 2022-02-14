
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int val; int id; int handler; } ;
struct max2175 {int dummy; } ;





 struct max2175* FUNC_0 (int ) ;
 int FUNC_1 (struct max2175*,int ) ;
 int FUNC_2 (struct max2175*,int ) ;
 int FUNC_3 (struct max2175*,int ) ;
 int FUNC_4 (struct max2175*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_ctrl *VAR_0)
{
 struct max2175 *VAR_1 = FUNC_0(VAR_0->handler);

 FUNC_4(VAR_1, "s_ctrl: id 0x%x, val %u\n", VAR_0->id, VAR_0->val);
 switch (VAR_0->id) {
 case 129:
  FUNC_1(VAR_1, VAR_0->val);
  break;
 case 130:
  FUNC_3(VAR_1, VAR_0->val);
  break;
 case 128:
  FUNC_2(VAR_1, VAR_0->val);
  break;
 }

 return 0;
}
