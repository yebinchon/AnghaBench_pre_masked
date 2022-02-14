
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_host {int use_busy; int cmd; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct bcm2835_host*) ;
 int FUNC_2 (struct bcm2835_host*) ;

__attribute__((used)) static void FUNC_3(struct bcm2835_host *VAR_0)
{
 if (FUNC_0(!VAR_0->cmd)) {
  FUNC_1(VAR_0);
  return;
 }

 if (FUNC_0(!VAR_0->use_busy)) {
  FUNC_1(VAR_0);
  return;
 }
 VAR_0->use_busy = 0;

 FUNC_2(VAR_0);
}
