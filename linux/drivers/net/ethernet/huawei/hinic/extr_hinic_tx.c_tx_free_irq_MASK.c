
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_txq {struct hinic_sq* sq; } ;
struct hinic_sq {int irq; } ;


 int FUNC_0 (int ,struct hinic_txq*) ;
 int FUNC_1 (struct hinic_txq*) ;

__attribute__((used)) static void FUNC_2(struct hinic_txq *VAR_0)
{
 struct hinic_sq *VAR_1 = VAR_0->sq;

 FUNC_0(VAR_1->irq, VAR_0);
 FUNC_1(VAR_0);
}
