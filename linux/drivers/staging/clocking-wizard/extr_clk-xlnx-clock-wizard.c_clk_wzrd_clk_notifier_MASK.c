
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct clk_wzrd {scalar_t__ clk_in1; int speed_grade; scalar_t__ axi_clk; scalar_t__ suspended; } ;
struct clk_notifier_data {scalar_t__ clk; unsigned long new_rate; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 unsigned long VAR_3 ;
 unsigned long* VAR_4 ;
 struct clk_wzrd* FUNC_0 (struct notifier_block*) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_5, unsigned long VAR_6,
     void *VAR_7)
{
 unsigned long VAR_8;
 struct clk_notifier_data *VAR_9 = VAR_7;
 struct clk_wzrd *VAR_10 = FUNC_0(VAR_5);

 if (VAR_10->suspended)
  return VAR_2;

 if (VAR_9->clk == VAR_10->clk_in1)
  VAR_8 = VAR_4[VAR_10->speed_grade - 1];
 else if (VAR_9->clk == VAR_10->axi_clk)
  VAR_8 = VAR_3;
 else
  return VAR_1;

 switch (VAR_6) {
 case 128:
  if (VAR_9->new_rate > VAR_8)
   return VAR_0;
  return VAR_2;
 case 129:
 case 130:
 default:
  return VAR_1;
 }
}
