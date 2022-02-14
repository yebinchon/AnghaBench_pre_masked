
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netdev_queue {int dummy; } ;
struct mvneta_tx_queue {int id; scalar_t__ count; } ;
struct mvneta_port {int dev; } ;


 int FUNC_0 (struct netdev_queue*,int) ;
 int FUNC_1 (struct netdev_queue*) ;
 struct mvneta_tx_queue* FUNC_2 (struct mvneta_port*,int) ;
 int FUNC_3 (struct mvneta_port*,struct mvneta_tx_queue*) ;
 struct netdev_queue* FUNC_4 (int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct mvneta_port *VAR_0, u32 VAR_1)
{
 struct mvneta_tx_queue *VAR_2;
 struct netdev_queue *VAR_3;
 int VAR_4 = FUNC_5();

 while (VAR_1) {
  VAR_2 = FUNC_2(VAR_0, VAR_1);

  VAR_3 = FUNC_4(VAR_0->dev, VAR_2->id);
  FUNC_0(VAR_3, VAR_4);

  if (VAR_2->count)
   FUNC_3(VAR_0, VAR_2);

  FUNC_1(VAR_3);
  VAR_1 &= ~((1 << VAR_2->id));
 }
}
