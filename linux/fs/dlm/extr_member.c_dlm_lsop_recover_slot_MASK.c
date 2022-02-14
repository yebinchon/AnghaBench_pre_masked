
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dlm_slot {int slot; int nodeid; } ;
struct dlm_member {scalar_t__ comm_seq; int slot; int nodeid; } ;
struct dlm_ls {int ls_ops_arg; TYPE_1__* ls_ops; } ;
struct TYPE_2__ {int (* recover_slot ) (int ,struct dlm_slot*) ;} ;


 int FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (int ,struct dlm_slot*) ;

__attribute__((used)) static void FUNC_2(struct dlm_ls *VAR_0, struct dlm_member *VAR_1)
{
 struct dlm_slot VAR_2;
 uint32_t VAR_3;
 int VAR_4;

 if (!VAR_0->ls_ops || !VAR_0->ls_ops->recover_slot)
  return;







 VAR_4 = FUNC_0(VAR_1->nodeid, &VAR_3);

 if (!VAR_4 && VAR_3 == VAR_1->comm_seq)
  return;

 VAR_2.nodeid = VAR_1->nodeid;
 VAR_2.slot = VAR_1->slot;

 VAR_0->ls_ops->recover_slot(VAR_0->ls_ops_arg, &VAR_2);
}
