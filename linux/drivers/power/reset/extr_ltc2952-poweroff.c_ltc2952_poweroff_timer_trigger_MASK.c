
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc2952_poweroff {int dev; } ;
struct hrtimer {int dummy; } ;
typedef enum hrtimer_restart { ____Placeholder_hrtimer_restart } hrtimer_restart ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ltc2952_poweroff*) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 struct ltc2952_poweroff* FUNC_3 (struct hrtimer*,int ) ;

__attribute__((used)) static enum hrtimer_restart
FUNC_4(struct hrtimer *VAR_2)
{
 struct ltc2952_poweroff *VAR_3 = FUNC_3(VAR_2, VAR_1);

 FUNC_1(VAR_3);
 FUNC_0(VAR_3->dev, "executing shutdown\n");
 FUNC_2(1);

 return VAR_0;
}
