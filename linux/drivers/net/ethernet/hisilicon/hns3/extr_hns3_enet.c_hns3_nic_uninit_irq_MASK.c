
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns3_nic_priv {unsigned int vector_num; struct hns3_enet_tqp_vector* tqp_vector; } ;
struct hns3_enet_tqp_vector {scalar_t__ irq_init_flag; int vector_irq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,struct hns3_enet_tqp_vector*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct hns3_nic_priv *VAR_2)
{
 struct hns3_enet_tqp_vector *VAR_3;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->vector_num; VAR_4++) {
  VAR_3 = &VAR_2->tqp_vector[VAR_4];

  if (VAR_3->irq_init_flag != VAR_0)
   continue;


  FUNC_1(VAR_3->vector_irq, ((void*)0));


  FUNC_0(VAR_3->vector_irq, VAR_3);
  VAR_3->irq_init_flag = VAR_1;
 }
}
