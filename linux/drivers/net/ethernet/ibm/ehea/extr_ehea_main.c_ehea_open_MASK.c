
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ehea_port {int stats_work; int port_lock; } ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ehea_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ehea_port*,int ,struct net_device*,char*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct ehea_port*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 int VAR_2;
 struct ehea_port *VAR_3 = FUNC_4(VAR_1);

 FUNC_2(&VAR_3->port_lock);

 FUNC_6(VAR_3, VAR_0, VAR_1, "enabling port\n");

 FUNC_5(VAR_1);

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  FUNC_8(VAR_3);
  FUNC_7(VAR_1);
 }

 FUNC_3(&VAR_3->port_lock);
 FUNC_10(&VAR_3->stats_work,
         FUNC_9(FUNC_1(1000)));

 return VAR_2;
}
