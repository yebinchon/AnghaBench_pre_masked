
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehea_port {int netdev; int mc_list; int stats_work; int reset_task; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int active_ports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ehea_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct ehea_port *VAR_0)
{
 struct ehea_adapter *VAR_1 = VAR_0->adapter;

 FUNC_1(&VAR_0->reset_task);
 FUNC_0(&VAR_0->stats_work);
 FUNC_5(VAR_0->netdev);
 FUNC_2(VAR_0);
 FUNC_4(VAR_0->mc_list);
 FUNC_3(VAR_0->netdev);
 VAR_1->active_ports--;
}
