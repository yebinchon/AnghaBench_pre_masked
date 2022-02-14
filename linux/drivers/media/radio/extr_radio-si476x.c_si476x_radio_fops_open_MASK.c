
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct si476x_radio {TYPE_2__* core; int ctrl_handler; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int func; } ;
struct TYPE_6__ {TYPE_1__ power_up_parameters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct si476x_radio*,int ) ;
 int FUNC_4 (struct si476x_radio*,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct file*) ;
 int FUNC_7 (struct file*) ;
 int FUNC_8 (struct file*) ;
 struct si476x_radio* FUNC_9 (struct file*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_2)
{
 struct si476x_radio *VAR_3 = FUNC_9(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_7(VAR_2);
 if (VAR_4)
  return VAR_4;

 if (FUNC_6(VAR_2)) {
  FUNC_0(VAR_3->core);
  VAR_4 = FUNC_1(VAR_3->core,
        VAR_1);
  if (VAR_4 < 0)
   goto done;

  VAR_4 = FUNC_3(VAR_3,
       VAR_3->core->power_up_parameters.func);
  if (VAR_4 < 0)
   goto power_down;

  VAR_4 = FUNC_4(VAR_3,
        VAR_3->core->power_up_parameters.func);
  if (VAR_4 < 0)
   goto power_down;

  FUNC_2(VAR_3->core);

  FUNC_5(&VAR_3->ctrl_handler);
 }

 return VAR_4;

power_down:
 FUNC_1(VAR_3->core,
        VAR_0);
done:
 FUNC_2(VAR_3->core);
 FUNC_8(VAR_2);

 return VAR_4;
}
