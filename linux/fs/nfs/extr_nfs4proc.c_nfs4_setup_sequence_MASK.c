
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
struct nfs_client {struct nfs4_slot_table* cl_slot_tbl; } ;
struct nfs4_slot_table {int slot_tbl_lock; int slot_tbl_waitq; } ;
struct nfs4_slot {int dummy; } ;
struct nfs4_session {struct nfs4_slot_table fc_slot_table; } ;
struct nfs4_sequence_res {int * sr_slot; } ;
struct nfs4_sequence_args {scalar_t__ sa_privileged; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_slot* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct nfs4_slot*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct nfs4_sequence_res*) ;
 struct nfs4_slot* FUNC_3 (struct nfs4_slot_table*) ;
 struct nfs4_session* FUNC_4 (struct nfs_client*) ;
 int FUNC_5 (struct nfs4_sequence_args*,struct nfs4_sequence_res*,struct nfs4_slot*) ;
 scalar_t__ FUNC_6 (struct nfs4_slot_table*) ;
 int FUNC_7 (struct rpc_task*) ;
 int FUNC_8 (int *,struct rpc_task*,int *) ;
 int FUNC_9 (int *,struct rpc_task*,int ) ;
 int FUNC_10 (int *,struct rpc_task*,scalar_t__,int ) ;
 int FUNC_11 (int *,struct rpc_task*,int *,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct nfs4_session*,struct nfs4_sequence_args*) ;

int FUNC_15(struct nfs_client *VAR_5,
   struct nfs4_sequence_args *VAR_6,
   struct nfs4_sequence_res *VAR_7,
   struct rpc_task *VAR_8)
{
 struct nfs4_session *VAR_9 = FUNC_4(VAR_5);
 struct nfs4_slot_table *VAR_10 = VAR_5->cl_slot_tbl;
 struct nfs4_slot *VAR_11;


 if (VAR_7->sr_slot != ((void*)0))
  goto out_start;

 if (VAR_9)
  VAR_10 = &VAR_9->fc_slot_table;

 FUNC_12(&VAR_10->slot_tbl_lock);

 if (FUNC_6(VAR_10) && !VAR_6->sa_privileged)
  goto out_sleep;

 VAR_11 = FUNC_3(VAR_10);
 if (FUNC_1(VAR_11)) {
  if (VAR_11 == FUNC_0(-VAR_1))
   goto out_sleep_timeout;
  goto out_sleep;
 }
 FUNC_13(&VAR_10->slot_tbl_lock);

 FUNC_5(VAR_6, VAR_7, VAR_11);

 FUNC_14(VAR_9, VAR_6);
out_start:
 FUNC_2(VAR_7);
 FUNC_7(VAR_8);
 return 0;
out_sleep_timeout:

 if (VAR_6->sa_privileged)
  FUNC_10(&VAR_10->slot_tbl_waitq, VAR_8,
    VAR_4 + (VAR_2 >> 2), VAR_3);
 else
  FUNC_11(&VAR_10->slot_tbl_waitq, VAR_8,
    ((void*)0), VAR_4 + (VAR_2 >> 2));
 FUNC_13(&VAR_10->slot_tbl_lock);
 return -VAR_0;
out_sleep:
 if (VAR_6->sa_privileged)
  FUNC_9(&VAR_10->slot_tbl_waitq, VAR_8,
    VAR_3);
 else
  FUNC_8(&VAR_10->slot_tbl_waitq, VAR_8, ((void*)0));
 FUNC_13(&VAR_10->slot_tbl_lock);
 return -VAR_0;
}
