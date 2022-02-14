
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct mvneta_port {int is_stopped; int ports; int node_dead; int node_online; int lock; int neta_armada3700; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct mvneta_port*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mvneta_port*) ;
 int FUNC_4 (struct mvneta_port*) ;
 int FUNC_5 (struct mvneta_port*) ;
 int VAR_1 ;
 int FUNC_6 (struct mvneta_port*) ;
 struct mvneta_port* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,struct mvneta_port*,int) ;
 int VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3)
{
 struct mvneta_port *VAR_4 = FUNC_7(VAR_3);

 if (!VAR_4->neta_armada3700) {





  FUNC_9(&VAR_4->lock);
  VAR_4->is_stopped = 1;
  FUNC_10(&VAR_4->lock);

  FUNC_6(VAR_4);
  FUNC_5(VAR_4);

  FUNC_0(VAR_2,
          &VAR_4->node_online);
  FUNC_0(VAR_0,
          &VAR_4->node_dead);
  FUNC_8(VAR_1, VAR_4, 1);
  FUNC_2(VAR_3->irq, VAR_4->ports);
 } else {
  FUNC_6(VAR_4);
  FUNC_5(VAR_4);
  FUNC_1(VAR_3->irq, VAR_4);
 }

 FUNC_3(VAR_4);
 FUNC_4(VAR_4);

 return 0;
}
