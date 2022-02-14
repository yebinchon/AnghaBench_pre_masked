
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_irq {int irq; int txn_data; int txn_addr; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct gsc_irq *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 < 0) {
  FUNC_0("cannot get irq\n");
  return VAR_2;
 }

 VAR_1->txn_addr = FUNC_1(VAR_2);
 VAR_1->txn_data = FUNC_2(VAR_2);
 VAR_1->irq = VAR_2;

 return VAR_2;
}
