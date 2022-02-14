
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wilc_vif {struct wilc* wilc; } ;
struct wilc {int close; int * txq_thread; int txq_event; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct wilc_vif* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct wilc_vif *VAR_1 = FUNC_2(VAR_0);
 struct wilc *VAR_2 = VAR_1->wilc;

 VAR_2->close = 1;

 FUNC_0(&VAR_2->txq_event);

 if (VAR_2->txq_thread) {
  FUNC_1(VAR_2->txq_thread);
  VAR_2->txq_thread = ((void*)0);
 }
}
