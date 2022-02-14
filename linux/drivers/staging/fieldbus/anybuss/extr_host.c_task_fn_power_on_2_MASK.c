
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int power_on; int dev; int irq; int card_boot; } ;
struct ab_task {scalar_t__ start_jiffies; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (struct anybuss_host*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct anybuss_host *VAR_4,
         struct ab_task *VAR_5)
{
 if (FUNC_0(&VAR_4->card_boot)) {
  VAR_4->power_on = 1;
  return 0;
 }
 if (FUNC_4(VAR_3, VAR_5->start_jiffies + VAR_2)) {
  FUNC_2(VAR_4->irq);
  FUNC_3(VAR_4);
  FUNC_1(VAR_4->dev, "power on timed out");
  return -VAR_1;
 }
 return -VAR_0;
}
