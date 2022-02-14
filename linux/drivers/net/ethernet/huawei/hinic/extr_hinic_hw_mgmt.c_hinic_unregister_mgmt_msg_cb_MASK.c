
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_pf_to_mgmt {struct hinic_mgmt_cb* mgmt_cb; } ;
struct hinic_mgmt_cb {int state; int * cb; } ;
typedef enum hinic_mod_type { ____Placeholder_hinic_mod_type } hinic_mod_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(struct hinic_pf_to_mgmt *VAR_2,
      enum hinic_mod_type VAR_3)
{
 struct hinic_mgmt_cb *VAR_4 = &VAR_2->mgmt_cb[VAR_3];

 VAR_4->state &= ~VAR_0;

 while (VAR_4->state & VAR_1)
  FUNC_0();

 VAR_4->cb = ((void*)0);
}
