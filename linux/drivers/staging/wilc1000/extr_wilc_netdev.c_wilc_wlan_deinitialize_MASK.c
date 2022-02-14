
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int initialized; int txq_event; int hif_cs; TYPE_1__* hif_func; int dev_irq_num; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* disable_interrupt ) (struct wilc*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*) ;
 int FUNC_5 (struct net_device*,char*) ;
 int FUNC_6 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct wilc*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct wilc*,struct wilc_vif*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_0)
{
 struct wilc_vif *VAR_1 = FUNC_7(VAR_0);
 struct wilc *VAR_2 = VAR_1->wilc;

 if (!VAR_2) {
  FUNC_5(VAR_0, "wl is NULL\n");
  return;
 }

 if (VAR_2->initialized) {
  FUNC_6(VAR_0, "Deinitializing wilc1000...\n");

  if (!VAR_2->dev_irq_num &&
      VAR_2->hif_func->disable_interrupt) {
   FUNC_2(&VAR_2->hif_cs);
   VAR_2->hif_func->disable_interrupt(VAR_2);
   FUNC_3(&VAR_2->hif_cs);
  }
  FUNC_0(&VAR_2->txq_event);

  FUNC_12(VAR_0);
  FUNC_1(VAR_0);

  FUNC_10(VAR_2, VAR_1);
  FUNC_9(VAR_0);
  FUNC_11(VAR_0);

  VAR_2->initialized = 0;

  FUNC_4(VAR_0, "wilc1000 deinitialization Done\n");
 } else {
  FUNC_4(VAR_0, "wilc1000 is not initialized\n");
 }
}
