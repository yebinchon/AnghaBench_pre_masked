
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int dummy; } ;
struct mvneta_tx_queue {int count; scalar_t__ txq_get_index; scalar_t__ txq_put_index; int id; } ;
struct mvneta_port {int dev; } ;


 int FUNC_0 (struct mvneta_port*,struct mvneta_tx_queue*,int,struct netdev_queue*) ;
 struct netdev_queue* FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct mvneta_port *VAR_0,
      struct mvneta_tx_queue *VAR_1)

{
 struct netdev_queue *VAR_2 = FUNC_1(VAR_0->dev, VAR_1->id);
 int VAR_3 = VAR_1->count;

 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2);


 VAR_1->count = 0;
 VAR_1->txq_put_index = 0;
 VAR_1->txq_get_index = 0;
}
