
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_enet_tqp_vector {int napi; int vector_irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct hns3_enet_tqp_vector*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hns3_enet_tqp_vector *VAR_0)
{

 FUNC_1(VAR_0, 0);

 FUNC_0(VAR_0->vector_irq);
 FUNC_2(&VAR_0->napi);
}
