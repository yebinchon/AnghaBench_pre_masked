
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int unlock ;
typedef scalar_t__ u8 ;
struct kvec {int iov_len; struct dlm_unlock_lock* iov_base; } ;
struct dlm_unlock_lock {int namelen; int name; int cookie; int flags; scalar_t__ node_idx; } ;
struct dlm_lockstatus {int dummy; } ;
struct TYPE_5__ {int name; int len; } ;
struct dlm_lock_resource {TYPE_2__ lockname; } ;
struct TYPE_4__ {int cookie; } ;
struct dlm_lock {TYPE_3__* lksb; TYPE_1__ ml; } ;
struct dlm_ctxt {int key; scalar_t__ node_num; int name; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_6__ {struct dlm_unlock_lock* lvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct dlm_ctxt*,scalar_t__) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct dlm_unlock_lock*,int ,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,int ,struct kvec*,size_t,scalar_t__,int*) ;

__attribute__((used)) static enum dlm_status FUNC_8(struct dlm_ctxt *VAR_7,
       struct dlm_lock_resource *VAR_8,
       struct dlm_lock *VAR_9,
       struct dlm_lockstatus *VAR_10,
       int VAR_11,
       u8 VAR_12)
{
 struct dlm_unlock_lock VAR_13;
 int VAR_14;
 enum dlm_status VAR_15;
 int VAR_16 = 0;
 struct kvec VAR_17[2];
 size_t VAR_18 = 1;

 FUNC_6(0, "%.*s\n", VAR_8->lockname.len, VAR_8->lockname.name);

 if (VAR_12 == VAR_7->node_num) {



  FUNC_6(0, "%s:%.*s: this node became the master due to a "
       "migration, re-evaluate now\n", VAR_7->name,
       VAR_8->lockname.len, VAR_8->lockname.name);
  return VAR_0;
 }

 FUNC_5(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.node_idx = VAR_7->node_num;
 VAR_13.flags = FUNC_0(VAR_11);
 VAR_13.cookie = VAR_9->ml.cookie;
 VAR_13.namelen = VAR_8->lockname.len;
 FUNC_4(VAR_13.name, VAR_8->lockname.name, VAR_13.namelen);

 VAR_17[0].iov_len = sizeof(struct dlm_unlock_lock);
 VAR_17[0].iov_base = &VAR_13;

 if (VAR_11 & VAR_5) {

  VAR_17[1].iov_len = VAR_1;
  VAR_17[1].iov_base = VAR_9->lksb->lvb;
  VAR_18++;
 }

 VAR_14 = FUNC_7(VAR_4, VAR_7->key,
     VAR_17, VAR_18, VAR_12, &VAR_16);
 if (VAR_14 >= 0) {

  if (VAR_16 == VAR_0)
   FUNC_6(0, "master was in-progress.  retry\n");
  VAR_15 = VAR_16;
 } else {
  FUNC_6(VAR_6, "Error %d when sending message %u (key 0x%x) to "
       "node %u\n", VAR_14, VAR_4, VAR_7->key, VAR_12);
  if (FUNC_2(VAR_14)) {







   if (FUNC_3(VAR_7, VAR_12))
    VAR_15 = VAR_3;
   else
    VAR_15 = VAR_2;
  } else {

   VAR_15 = FUNC_1(VAR_14);
  }
 }

 return VAR_15;
}
