
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int irq; int card_boot; int regmap; scalar_t__ power_on; } ;
struct ab_task {int task_fn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct anybuss_host*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct anybuss_host *VAR_3,
       struct ab_task *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_3->power_on)
  return 0;




 FUNC_1(VAR_3->regmap, VAR_1, &VAR_5);
 FUNC_2(&VAR_3->card_boot);
 FUNC_0(VAR_3->irq);
 FUNC_3(VAR_3);
 VAR_4->task_fn = VAR_2;
 return -VAR_0;
}
