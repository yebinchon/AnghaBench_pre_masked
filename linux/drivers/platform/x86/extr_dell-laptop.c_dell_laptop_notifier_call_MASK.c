
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_5,
         unsigned long VAR_6, void *VAR_7)
{
 bool VAR_8 = 0;
 enum led_brightness VAR_9;

 switch (VAR_6) {
 case 128:
  if (!VAR_4)
   break;

  FUNC_2(&VAR_3);
  VAR_9 = FUNC_0(&VAR_1);
  if (VAR_2 != VAR_9) {
   VAR_2 = VAR_9;
   VAR_8 = 1;
  }
  FUNC_3(&VAR_3);

  if (VAR_8)
   FUNC_1(&VAR_1,
        VAR_2);
  break;
 }

 return VAR_0;
}
