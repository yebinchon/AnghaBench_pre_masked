
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ehea_port {int flags; int port_lock; int stats_work; int reset_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct ehea_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct ehea_port*,int ,struct net_device*,char*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct ehea_port*) ;
 int FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_2)
{
 int VAR_3;
 struct ehea_port *VAR_4 = FUNC_6(VAR_2);

 FUNC_7(VAR_4, VAR_1, VAR_2, "disabling port\n");

 FUNC_10(VAR_0, &VAR_4->flags);
 FUNC_1(&VAR_4->reset_task);
 FUNC_0(&VAR_4->stats_work);
 FUNC_4(&VAR_4->port_lock);
 FUNC_8(VAR_2);
 FUNC_9(VAR_4);
 VAR_3 = FUNC_3(VAR_2);
 FUNC_5(&VAR_4->port_lock);
 FUNC_2(VAR_0, &VAR_4->flags);
 return VAR_3;
}
