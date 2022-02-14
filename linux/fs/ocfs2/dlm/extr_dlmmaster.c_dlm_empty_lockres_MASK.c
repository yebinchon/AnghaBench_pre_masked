
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_1__ lockname; int spinlock; } ;
struct dlm_ctxt {int spinlock; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_2 (struct dlm_ctxt*,struct dlm_lock_resource*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct dlm_ctxt*,struct dlm_lock_resource*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dlm_ctxt *VAR_1, struct dlm_lock_resource *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 u8 VAR_5 = VAR_0;

 FUNC_0(&VAR_1->spinlock);

 FUNC_5(&VAR_2->spinlock);
 if (FUNC_1(VAR_1, VAR_2))
  VAR_5 = FUNC_3(VAR_1, VAR_2);
 FUNC_6(&VAR_2->spinlock);

 if (VAR_5 == VAR_0)
  goto leave;


 FUNC_6(&VAR_1->spinlock);
 VAR_4 = 1;
 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_5);
 if (VAR_3)
  FUNC_4(0, "%s: res %.*s, Migrate to node %u failed with %d\n",
       VAR_1->name, VAR_2->lockname.len, VAR_2->lockname.name,
       VAR_5, VAR_3);
 FUNC_5(&VAR_1->spinlock);
leave:
 return VAR_4;
}
