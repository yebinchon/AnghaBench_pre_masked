
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct clock_cooling_device {int clock_val; } ;
struct clk_notifier_data {int new_rate; } ;



 int VAR_0 ;
 int VAR_1 ;


 struct clock_cooling_device* FUNC_0 (struct notifier_block*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2,
     unsigned long VAR_3, void *VAR_4)
{
 struct clk_notifier_data *VAR_5 = VAR_4;
 struct clock_cooling_device *VAR_6 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 128:






  if (VAR_5->new_rate > VAR_6->clock_val)
   return VAR_0;

 case 129:
 case 130:
 default:
  return VAR_1;
 }
}
