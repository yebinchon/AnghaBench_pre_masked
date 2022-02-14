
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int deref_node; struct dlm_lock_resource* deref_res; } ;
struct TYPE_5__ {TYPE_1__ dl; } ;
struct dlm_work_item {TYPE_2__ u; struct dlm_ctxt* dlm; } ;
struct TYPE_6__ {int name; int len; } ;
struct dlm_lock_resource {int state; TYPE_3__ lockname; int spinlock; int refmap; } ;
struct dlm_ctxt {int name; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct dlm_lock_resource*,int ) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,int) ;
 int FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_4 (struct dlm_ctxt*,struct dlm_lock_resource*,int) ;
 int FUNC_5 (struct dlm_lock_resource*) ;
 int FUNC_6 (struct dlm_lock_resource*) ;
 int FUNC_7 (int ,char*,int ,int ,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int,int ) ;

__attribute__((used)) static void FUNC_11(struct dlm_work_item *VAR_3, void *VAR_4)
{
 struct dlm_ctxt *VAR_5;
 struct dlm_lock_resource *VAR_6;
 u8 VAR_7;
 u8 VAR_8 = 0;

 VAR_5 = VAR_3->dlm;
 VAR_6 = VAR_3->u.dl.deref_res;
 VAR_7 = VAR_3->u.dl.deref_node;

 FUNC_8(&VAR_6->spinlock);
 FUNC_0(VAR_6->state & VAR_0);
 FUNC_1(VAR_6, VAR_1);
 if (FUNC_10(VAR_7, VAR_6->refmap)) {
  FUNC_4(VAR_5, VAR_6, VAR_7);
  VAR_8 = 1;
 }
 FUNC_9(&VAR_6->spinlock);

 FUNC_2(VAR_5, VAR_6, VAR_7);

 if (VAR_8) {
  FUNC_7(0, "%s:%.*s node %u ref dropped in dispatch\n",
       VAR_5->name, VAR_6->lockname.len, VAR_6->lockname.name, VAR_7);
  FUNC_3(VAR_5, VAR_6);
 } else {
  FUNC_7(VAR_2, "%s:%.*s: node %u trying to drop ref "
       "but it is already dropped!\n", VAR_5->name,
       VAR_6->lockname.len, VAR_6->lockname.name, VAR_7);
  FUNC_6(VAR_6);
 }

 FUNC_5(VAR_6);
}
