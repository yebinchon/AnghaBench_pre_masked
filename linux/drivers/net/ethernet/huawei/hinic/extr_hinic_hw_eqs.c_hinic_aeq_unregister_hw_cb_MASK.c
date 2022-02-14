
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_hw_event_cb {int hwe_state; int * hwe_handler; } ;
struct hinic_aeqs {struct hinic_hw_event_cb* hwe_cb; } ;
typedef enum hinic_aeq_type { ____Placeholder_hinic_aeq_type } hinic_aeq_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(struct hinic_aeqs *VAR_2,
    enum hinic_aeq_type VAR_3)
{
 struct hinic_hw_event_cb *VAR_4 = &VAR_2->hwe_cb[VAR_3];

 VAR_4->hwe_state &= ~VAR_0;

 while (VAR_4->hwe_state & VAR_1)
  FUNC_0();

 VAR_4->hwe_handler = ((void*)0);
}
