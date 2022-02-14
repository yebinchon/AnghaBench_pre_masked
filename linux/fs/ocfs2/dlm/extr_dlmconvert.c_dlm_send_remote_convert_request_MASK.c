
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvec {int iov_len; struct dlm_convert_lock* iov_base; } ;
struct TYPE_5__ {int name; int len; } ;
struct dlm_lock_resource {int owner; TYPE_2__ lockname; } ;
struct TYPE_4__ {int cookie; } ;
struct dlm_lock {TYPE_3__* lksb; TYPE_1__ ml; } ;
struct dlm_ctxt {int key; int node_num; } ;
struct dlm_convert_lock {int requested_type; int namelen; int name; int flags; int cookie; int node_idx; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;
struct TYPE_6__ {struct dlm_convert_lock* lvb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct dlm_ctxt*,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct dlm_convert_lock*,int ,int) ;
 int FUNC_7 (int ,char*,int,...) ;
 int FUNC_8 (int ,int ,struct kvec*,size_t,int ,int*) ;

__attribute__((used)) static enum dlm_status FUNC_9(struct dlm_ctxt *VAR_10,
        struct dlm_lock_resource *VAR_11,
        struct dlm_lock *VAR_12, int VAR_13, int VAR_14)
{
 struct dlm_convert_lock VAR_15;
 int VAR_16;
 enum dlm_status VAR_17;
 int VAR_18 = 0;
 struct kvec VAR_19[2];
 size_t VAR_20 = 1;

 FUNC_7(0, "%.*s\n", VAR_11->lockname.len, VAR_11->lockname.name);

 FUNC_6(&VAR_15, 0, sizeof(struct dlm_convert_lock));
 VAR_15.node_idx = VAR_10->node_num;
 VAR_15.requested_type = VAR_14;
 VAR_15.cookie = VAR_12->ml.cookie;
 VAR_15.namelen = VAR_11->lockname.len;
 VAR_15.flags = FUNC_0(VAR_13);
 FUNC_5(VAR_15.name, VAR_11->lockname.name, VAR_15.namelen);

 VAR_19[0].iov_len = sizeof(struct dlm_convert_lock);
 VAR_19[0].iov_base = &VAR_15;

 if (VAR_13 & VAR_8) {

  VAR_19[1].iov_len = VAR_2;
  VAR_19[1].iov_base = VAR_12->lksb->lvb;
  VAR_20++;
 }

 VAR_16 = FUNC_8(VAR_0, VAR_10->key,
     VAR_19, VAR_20, VAR_11->owner, &VAR_18);
 if (VAR_16 >= 0) {

  VAR_17 = VAR_18;
  if (VAR_17 == VAR_7) {
   FUNC_7(0, "node %u returned DLM_RECOVERING from convert "
        "message!\n", VAR_11->owner);
  } else if (VAR_17 == VAR_3) {
   FUNC_7(0, "node %u returned DLM_MIGRATING from convert "
        "message!\n", VAR_11->owner);
  } else if (VAR_17 == VAR_1) {
   FUNC_7(0, "node %u returned DLM_FORWARD from convert "
        "message!\n", VAR_11->owner);
  } else if (VAR_17 != VAR_5 && VAR_17 != VAR_6)
   FUNC_2(VAR_17);
 } else {
  FUNC_7(VAR_9, "Error %d when sending message %u (key 0x%x) to "
       "node %u\n", VAR_16, VAR_0, VAR_10->key,
       VAR_11->owner);
  if (FUNC_3(VAR_16)) {



   FUNC_4(VAR_10, VAR_11->owner,
      VAR_4);
   VAR_17 = VAR_7;
   FUNC_7(0, "node %u died so returning DLM_RECOVERING "
        "from convert message!\n", VAR_11->owner);
  } else {
   VAR_17 = FUNC_1(VAR_16);
  }
 }

 return VAR_17;
}
