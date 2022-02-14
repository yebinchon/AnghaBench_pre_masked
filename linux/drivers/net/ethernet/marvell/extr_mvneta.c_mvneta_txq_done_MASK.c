
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct mvneta_tx_queue {scalar_t__ count; scalar_t__ tx_wake_threshold; int id; } ;
struct mvneta_port {int dev; } ;


 int FUNC_0 (struct mvneta_port*,struct mvneta_tx_queue*,int,struct netdev_queue*) ;
 int FUNC_1 (struct mvneta_port*,struct mvneta_tx_queue*) ;
 struct netdev_queue* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct netdev_queue*) ;

__attribute__((used)) static void FUNC_5(struct mvneta_port *VAR_0,
      struct mvneta_tx_queue *VAR_1)
{
 struct netdev_queue *VAR_2 = FUNC_2(VAR_0->dev, VAR_1->id);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);

 VAR_1->count -= VAR_3;

 if (FUNC_3(VAR_2)) {
  if (VAR_1->count <= VAR_1->tx_wake_threshold)
   FUNC_4(VAR_2);
 }
}
