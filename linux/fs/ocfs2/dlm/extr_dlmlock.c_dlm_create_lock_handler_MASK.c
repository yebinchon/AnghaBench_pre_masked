
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct o2net_msg {scalar_t__ buf; } ;
struct dlm_lockstatus {int flags; } ;
struct dlm_lock_resource {int spinlock; } ;
struct dlm_lock {struct dlm_lockstatus* lksb; } ;
struct dlm_ctxt {int name; } ;
struct dlm_create_lock {char* name; unsigned int namelen; int flags; int cookie; int node_idx; int requested_type; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct dlm_lock_resource*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dlm_ctxt*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct dlm_ctxt*) ;
 int FUNC_7 (struct dlm_lock*,struct dlm_lock_resource*) ;
 int FUNC_8 (struct dlm_lock*) ;
 int FUNC_9 (struct dlm_lock_resource*) ;
 struct dlm_lock_resource* FUNC_10 (struct dlm_ctxt*,char*,unsigned int) ;
 struct dlm_lock* FUNC_11 (int ,int ,int ,int *) ;
 int FUNC_12 (struct dlm_ctxt*) ;
 int FUNC_13 (struct dlm_ctxt*,struct dlm_lock_resource*,struct dlm_lock*,int) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int FUNC_17(struct o2net_msg *VAR_9, u32 VAR_10, void *VAR_11,
       void **VAR_12)
{
 struct dlm_ctxt *VAR_13 = VAR_11;
 struct dlm_create_lock *VAR_14 = (struct dlm_create_lock *)VAR_9->buf;
 struct dlm_lock_resource *VAR_15 = ((void*)0);
 struct dlm_lock *VAR_16 = ((void*)0);
 struct dlm_lockstatus *VAR_17 = ((void*)0);
 enum dlm_status VAR_18 = VAR_4;
 char *VAR_19;
 unsigned int VAR_20;

 FUNC_0(!VAR_13);

 if (!FUNC_6(VAR_13))
  return VAR_5;

 VAR_19 = VAR_14->name;
 VAR_20 = VAR_14->namelen;
 VAR_18 = VAR_5;
 if (!FUNC_4(VAR_13)) {
  FUNC_14(VAR_8, "Domain %s not fully joined, but node %u is "
       "sending a create_lock message for lock %.*s!\n",
       VAR_13->name, VAR_14->node_idx, VAR_20, VAR_19);
  FUNC_5(VAR_18);
  goto leave;
 }

 VAR_18 = VAR_0;
 if (VAR_20 > VAR_3) {
  FUNC_5(VAR_18);
  goto leave;
 }

 VAR_18 = VAR_6;
 VAR_16 = FUNC_11(VAR_14->requested_type,
          VAR_14->node_idx,
          FUNC_3(VAR_14->cookie), ((void*)0));
 if (!VAR_16) {
  FUNC_5(VAR_18);
  goto leave;
 }

 VAR_17 = VAR_16->lksb;

 if (FUNC_2(VAR_14->flags) & VAR_7) {
  VAR_17->flags |= VAR_2;
  FUNC_14(0, "set DLM_LKSB_GET_LVB flag\n");
 }

 VAR_18 = VAR_1;
 VAR_15 = FUNC_10(VAR_13, VAR_19, VAR_20);
 if (!VAR_15) {
  FUNC_5(VAR_18);
  goto leave;
 }

 FUNC_15(&VAR_15->spinlock);
 VAR_18 = FUNC_1(VAR_15);
 FUNC_16(&VAR_15->spinlock);

 if (VAR_18 != VAR_4) {
  FUNC_14(0, "lockres recovering/migrating/in-progress\n");
  goto leave;
 }

 FUNC_7(VAR_16, VAR_15);

 VAR_18 = FUNC_13(VAR_13, VAR_15, VAR_16, FUNC_2(VAR_14->flags));
leave:
 if (VAR_18 != VAR_4)
  if (VAR_16)
   FUNC_8(VAR_16);

 if (VAR_15)
  FUNC_9(VAR_15);

 FUNC_12(VAR_13);

 return VAR_18;
}
