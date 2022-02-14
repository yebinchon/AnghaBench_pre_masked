
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_irq {int data; int vector; } ;
struct ena_adapter {struct ena_irq* irq_tbl; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ena_adapter *VAR_1)
{
 struct ena_irq *VAR_2;

 VAR_2 = &VAR_1->irq_tbl[VAR_0];
 FUNC_2(VAR_2->vector);
 FUNC_1(VAR_2->vector, ((void*)0));
 FUNC_0(VAR_2->vector, VAR_2->data);
}
