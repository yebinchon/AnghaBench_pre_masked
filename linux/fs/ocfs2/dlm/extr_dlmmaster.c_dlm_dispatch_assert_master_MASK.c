
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int ignore_higher; int flags; int request_from; struct dlm_lock_resource* lockres; } ;
struct TYPE_5__ {TYPE_1__ am; } ;
struct dlm_work_item {int list; TYPE_2__ u; } ;
struct TYPE_6__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_3__ lockname; } ;
struct dlm_ctxt {int dispatched_work; int dlm_worker; int work_lock; int work_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_ctxt*,struct dlm_work_item*,int ,int *) ;
 struct dlm_work_item* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dlm_ctxt *VAR_3,
          struct dlm_lock_resource *VAR_4,
          int VAR_5, u8 VAR_6, u32 VAR_7)
{
 struct dlm_work_item *VAR_8;
 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;



 FUNC_0(VAR_3, VAR_8, VAR_2, ((void*)0));
 VAR_8->u.am.lockres = VAR_4;

 VAR_8->u.am.ignore_higher = VAR_5;
 VAR_8->u.am.request_from = VAR_6;
 VAR_8->u.am.flags = VAR_7;

 if (VAR_5)
  FUNC_3(0, "IGNORE HIGHER: %.*s\n", VAR_4->lockname.len,
       VAR_4->lockname.name);

 FUNC_5(&VAR_3->work_lock);
 FUNC_2(&VAR_8->list, &VAR_3->work_list);
 FUNC_6(&VAR_3->work_lock);

 FUNC_4(VAR_3->dlm_worker, &VAR_3->dispatched_work);
 return 0;
}
