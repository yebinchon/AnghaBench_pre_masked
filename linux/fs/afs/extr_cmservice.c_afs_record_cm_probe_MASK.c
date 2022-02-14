
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int said_rebooted; scalar_t__ cm_epoch; int cm_probed; int said_inconsistent; } ;
struct afs_server {scalar_t__ cm_epoch; int probe_lock; TYPE_1__ probe; int uuid; int flags; } ;
struct afs_call {scalar_t__ epoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct afs_call *VAR_2, struct afs_server *VAR_3)
{
 FUNC_0("");

 if (FUNC_4(VAR_0, &VAR_3->flags) &&
     !FUNC_4(VAR_1, &VAR_3->flags)) {
  if (VAR_3->cm_epoch == VAR_2->epoch)
   return 0;

  if (!VAR_3->probe.said_rebooted) {
   FUNC_1("kAFS: FS rebooted %pU\n", &VAR_3->uuid);
   VAR_3->probe.said_rebooted = 1;
  }
 }

 FUNC_2(&VAR_3->probe_lock);

 if (!FUNC_4(VAR_0, &VAR_3->flags)) {
  VAR_3->cm_epoch = VAR_2->epoch;
  VAR_3->probe.cm_epoch = VAR_2->epoch;
  goto out;
 }

 if (VAR_3->probe.cm_probed &&
     VAR_2->epoch != VAR_3->probe.cm_epoch &&
     !VAR_3->probe.said_inconsistent) {
  FUNC_1("kAFS: FS endpoints inconsistent %pU\n",
     &VAR_3->uuid);
  VAR_3->probe.said_inconsistent = 1;
 }

 if (!VAR_3->probe.cm_probed || VAR_2->epoch == VAR_3->cm_epoch)
  VAR_3->probe.cm_epoch = VAR_3->cm_epoch;

out:
 VAR_3->probe.cm_probed = 1;
 FUNC_3(&VAR_3->probe_lock);
 return 0;
}
