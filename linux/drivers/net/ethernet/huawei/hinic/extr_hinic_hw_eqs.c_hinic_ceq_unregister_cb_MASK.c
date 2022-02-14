
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_ceqs {struct hinic_ceq_cb* ceq_cb; } ;
struct hinic_ceq_cb {int ceqe_state; int * handler; } ;
typedef enum hinic_ceq_type { ____Placeholder_hinic_ceq_type } hinic_ceq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(struct hinic_ceqs *VAR_2,
        enum hinic_ceq_type VAR_3)
{
 struct hinic_ceq_cb *VAR_4 = &VAR_2->ceq_cb[VAR_3];

 VAR_4->ceqe_state &= ~VAR_0;

 while (VAR_4->ceqe_state & VAR_1)
  FUNC_0();

 VAR_4->handler = ((void*)0);
}
