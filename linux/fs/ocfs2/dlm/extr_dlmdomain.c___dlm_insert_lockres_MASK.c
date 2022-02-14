
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hlist_head {int dummy; } ;
struct TYPE_2__ {int name; int len; int hash; } ;
struct dlm_lock_resource {TYPE_1__ lockname; int hash_node; } ;
struct dlm_ctxt {int name; int spinlock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 struct hlist_head* FUNC_2 (struct dlm_ctxt*,int ) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 int FUNC_4 (int ,char*,int ,int ,int ) ;

void FUNC_5(struct dlm_ctxt *VAR_0, struct dlm_lock_resource *VAR_1)
{
 struct hlist_head *VAR_2;

 FUNC_0(&VAR_0->spinlock);

 VAR_2 = FUNC_2(VAR_0, VAR_1->lockname.hash);


 FUNC_1(VAR_1);

 FUNC_3(&VAR_1->hash_node, VAR_2);

 FUNC_4(0, "%s: Hash res %.*s\n", VAR_0->name, VAR_1->lockname.len,
      VAR_1->lockname.name);
}
