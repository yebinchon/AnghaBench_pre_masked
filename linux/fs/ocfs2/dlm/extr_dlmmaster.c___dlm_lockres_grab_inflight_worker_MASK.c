
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {int inflight_assert_workers; TYPE_1__ lockname; int spinlock; } ;
struct dlm_ctxt {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ) ;

void FUNC_2(struct dlm_ctxt *VAR_0,
  struct dlm_lock_resource *VAR_1)
{
 FUNC_0(&VAR_1->spinlock);
 VAR_1->inflight_assert_workers++;
 FUNC_1(0, "%s:%.*s: inflight assert worker++: now %u\n",
   VAR_0->name, VAR_1->lockname.len, VAR_1->lockname.name,
   VAR_1->inflight_assert_workers);
}
