
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_rxq {struct hinic_rq* rq; } ;
struct hinic_rq {int irq; } ;


 int FUNC_0 (int ,struct hinic_rxq*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct hinic_rxq*) ;

__attribute__((used)) static void FUNC_3(struct hinic_rxq *VAR_0)
{
 struct hinic_rq *VAR_1 = VAR_0->rq;

 FUNC_1(VAR_1->irq, ((void*)0));
 FUNC_0(VAR_1->irq, VAR_0);
 FUNC_2(VAR_0);
}
