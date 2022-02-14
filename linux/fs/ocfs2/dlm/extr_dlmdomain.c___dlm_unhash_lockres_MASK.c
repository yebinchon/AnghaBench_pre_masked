
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int hash_node; TYPE_1__ lockname; } ;
struct dlm_ctxt {int name; } ;


 int FUNC_0 (struct dlm_lock_resource*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int ,int ,int ) ;

void FUNC_4(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1)
{
 if (FUNC_2(&VAR_1->hash_node))
  return;

 FUNC_3(0, "%s: Unhash res %.*s\n", VAR_0->name, VAR_1->lockname.len,
      VAR_1->lockname.name);
 FUNC_1(&VAR_1->hash_node);
 FUNC_0(VAR_1);
}
