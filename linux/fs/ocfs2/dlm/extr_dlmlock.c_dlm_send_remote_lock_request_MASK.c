
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int name; int len; } ;
struct dlm_lock_resource {int owner; TYPE_2__ lockname; } ;
struct TYPE_3__ {int cookie; int type; } ;
struct dlm_lock {TYPE_1__ ml; } ;
struct dlm_ctxt {int name; int key; int node_num; } ;
struct dlm_create_lock {int name; int namelen; int flags; int cookie; int requested_type; int node_idx; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
typedef int create ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct dlm_lock_resource*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct dlm_create_lock*,int ,int) ;
 int FUNC_7 (int ,char*,int ,int ,int ,int,...) ;
 int FUNC_8 (int ,int ,struct dlm_create_lock*,int,int ,int*) ;

__attribute__((used)) static enum dlm_status FUNC_9(struct dlm_ctxt *VAR_4,
            struct dlm_lock_resource *VAR_5,
            struct dlm_lock *VAR_6, int VAR_7)
{
 struct dlm_create_lock VAR_8;
 int VAR_9, VAR_10 = 0;
 enum dlm_status VAR_11;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.node_idx = VAR_4->node_num;
 VAR_8.requested_type = VAR_6->ml.type;
 VAR_8.cookie = VAR_6->ml.cookie;
 VAR_8.namelen = VAR_5->lockname.len;
 VAR_8.flags = FUNC_1(VAR_7);
 FUNC_5(VAR_8.name, VAR_5->lockname.name, VAR_8.namelen);

 VAR_9 = FUNC_8(VAR_0, VAR_4->key, &VAR_8,
        sizeof(VAR_8), VAR_5->owner, &VAR_10);
 if (VAR_9 >= 0) {
  VAR_11 = VAR_10;
  if (VAR_11 == VAR_2) {
   FUNC_7(VAR_3, "%s: res %.*s, Stale lockres no longer "
        "owned by node %u. That node is coming back up "
        "currently.\n", VAR_4->name, VAR_8.namelen,
        VAR_8.name, VAR_5->owner);
   FUNC_4(VAR_5);
   FUNC_0();
  }
 } else {
  FUNC_7(VAR_3, "%s: res %.*s, Error %d send CREATE LOCK to "
       "node %u\n", VAR_4->name, VAR_8.namelen, VAR_8.name,
       VAR_9, VAR_5->owner);
  if (FUNC_3(VAR_9))
   VAR_11 = VAR_1;
  else
   VAR_11 = FUNC_2(VAR_9);
 }

 return VAR_11;
}
