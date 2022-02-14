
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_tx_queue {int dummy; } ;
struct mvpp2_port {int ntxqs; struct mvpp2_tx_queue** txqs; scalar_t__ has_tx_irqs; int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mvpp2_port*) ;
 int FUNC_2 (struct mvpp2_port*,struct mvpp2_tx_queue*) ;
 int FUNC_3 (struct mvpp2_port*) ;
 int FUNC_4 (struct mvpp2_port*,struct mvpp2_tx_queue*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct mvpp2_port*,int) ;

__attribute__((used)) static int FUNC_8(struct mvpp2_port *VAR_1)
{
 struct mvpp2_tx_queue *VAR_2;
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1->ntxqs; VAR_3++) {
  VAR_2 = VAR_1->txqs[VAR_3];
  VAR_4 = FUNC_4(VAR_1, VAR_2);
  if (VAR_4)
   goto err_cleanup;


  VAR_5 = VAR_3 % FUNC_6();
  FUNC_5(VAR_1->dev, FUNC_0(VAR_5), VAR_3);
 }

 if (VAR_1->has_tx_irqs) {
  FUNC_3(VAR_1);
  for (VAR_3 = 0; VAR_3 < VAR_1->ntxqs; VAR_3++) {
   VAR_2 = VAR_1->txqs[VAR_3];
   FUNC_2(VAR_1, VAR_2);
  }
 }

 FUNC_7(VAR_0, VAR_1, 1);
 return 0;

err_cleanup:
 FUNC_1(VAR_1);
 return VAR_4;
}
