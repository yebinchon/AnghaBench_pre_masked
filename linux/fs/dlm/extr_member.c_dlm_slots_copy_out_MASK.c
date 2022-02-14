
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcom_slot {int ro_slot; int ro_nodeid; } ;
struct rcom_config {int dummy; } ;
struct dlm_slot {int slot; int nodeid; } ;
struct dlm_rcom {scalar_t__ rc_buf; } ;
struct dlm_ls {int ls_slots_size; struct dlm_slot* ls_slots; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct dlm_ls *VAR_0, struct dlm_rcom *VAR_1)
{
 struct dlm_slot *VAR_2;
 struct rcom_slot *VAR_3;
 int VAR_4;

 VAR_3 = (struct rcom_slot *)(VAR_1->rc_buf + sizeof(struct rcom_config));



 for (VAR_4 = 0; VAR_4 < VAR_0->ls_slots_size; VAR_4++) {
  VAR_2 = &VAR_0->ls_slots[VAR_4];
  if (!VAR_2->nodeid)
   continue;
  VAR_3->ro_nodeid = FUNC_1(VAR_2->nodeid);
  VAR_3->ro_slot = FUNC_0(VAR_2->slot);
  VAR_3++;
 }
}
