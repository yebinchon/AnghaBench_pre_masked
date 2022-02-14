
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int id; int val; int handler; } ;
struct si476x_radio {int core; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* phase_div_status ) (int ) ;int phase_diversity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct si476x_radio* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_ctrl *VAR_2)
{
 int VAR_3;
 struct si476x_radio *VAR_4 = FUNC_5(VAR_2->handler);

 FUNC_2(VAR_4->core);

 switch (VAR_2->id) {
 case 128:
  if (FUNC_1(VAR_4->core)) {
   if (VAR_4->ops->phase_diversity) {
    VAR_3 = VAR_4->ops->phase_div_status(VAR_4->core);
    if (VAR_3 < 0)
     break;

    VAR_2->val = !!FUNC_0(VAR_3);
    VAR_3 = 0;
    break;
   } else {
    VAR_3 = -VAR_1;
    break;
   }
  }
  VAR_3 = -VAR_0;
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }
 FUNC_3(VAR_4->core);
 return VAR_3;

}
