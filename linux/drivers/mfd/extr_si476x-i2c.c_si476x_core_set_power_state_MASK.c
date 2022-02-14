
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_core {scalar_t__ power_state; int supplies; TYPE_1__* client; } ;
typedef enum si476x_power_state { ____Placeholder_si476x_power_state } si476x_power_state ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;

 scalar_t__ VAR_1 ;

 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct si476x_core*,int) ;
 int FUNC_6 (struct si476x_core*,int) ;
 int FUNC_7 (int) ;

int FUNC_8(struct si476x_core *VAR_2,
    enum si476x_power_state VAR_3)
{





 int VAR_4 = 0;

 if (VAR_2->power_state == VAR_1) {
  FUNC_2(&VAR_2->client->dev,
   "The device in inconsistent power state\n");
  return -VAR_0;
 }

 if (VAR_3 != VAR_2->power_state) {
  switch (VAR_3) {
  case 128:
   VAR_4 = FUNC_4(FUNC_0(VAR_2->supplies),
          VAR_2->supplies);
   if (VAR_4 < 0) {
    VAR_2->power_state = VAR_1;
    break;
   }





   FUNC_7(100);

   VAR_4 = FUNC_5(VAR_2, 0);
   if (VAR_4 < 0)
    goto disable_regulators;

   VAR_2->power_state = VAR_3;
   break;

  case 129:
   VAR_2->power_state = VAR_3;
   VAR_4 = FUNC_6(VAR_2, 0);
   if (VAR_4 < 0)
    VAR_2->power_state = VAR_1;
disable_regulators:
   VAR_4 = FUNC_3(FUNC_0(VAR_2->supplies),
           VAR_2->supplies);
   if (VAR_4 < 0)
    VAR_2->power_state = VAR_1;
   break;
  default:
   FUNC_1();
  }
 }

 return VAR_4;
}
