
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct msqid64_ds {int msg_stime; int msg_rtime; int msg_ctime; int msg_stime_high; int msg_rtime_high; int msg_ctime_high; void* msg_lrpid; void* msg_lspid; int msg_qbytes; int msg_qnum; int msg_cbytes; int msg_perm; } ;
struct TYPE_8__ {int id; } ;
struct msg_queue {int q_stime; int q_rtime; int q_ctime; TYPE_1__ q_perm; int q_lrpid; int q_lspid; int q_qbytes; int q_qnum; int q_cbytes; } ;
struct ipc_namespace {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct msg_queue*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct msg_queue*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct ipc_namespace*,TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (struct msqid64_ds*,int ,int) ;
 struct msg_queue* FUNC_9 (struct ipc_namespace*,int) ;
 struct msg_queue* FUNC_10 (struct ipc_namespace*,int) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_15(struct ipc_namespace *VAR_6, int VAR_7,
    int VAR_8, struct msqid64_ds *VAR_9)
{
 struct msg_queue *VAR_10;
 int VAR_11;

 FUNC_8(VAR_9, 0, sizeof(*VAR_9));

 FUNC_12();
 if (VAR_8 == VAR_3 || VAR_8 == VAR_4) {
  VAR_10 = FUNC_9(VAR_6, VAR_7);
  if (FUNC_0(VAR_10)) {
   VAR_11 = FUNC_1(VAR_10);
   goto out_unlock;
  }
 } else {
  VAR_10 = FUNC_10(VAR_6, VAR_7);
  if (FUNC_0(VAR_10)) {
   VAR_11 = FUNC_1(VAR_10);
   goto out_unlock;
  }
 }


 if (VAR_8 == VAR_4)
  FUNC_2(&VAR_10->q_perm);
 else {
  VAR_11 = -VAR_0;
  if (FUNC_6(VAR_6, &VAR_10->q_perm, VAR_5))
   goto out_unlock;
 }

 VAR_11 = FUNC_14(&VAR_10->q_perm, VAR_8);
 if (VAR_11)
  goto out_unlock;

 FUNC_3(&VAR_10->q_perm);

 if (!FUNC_5(&VAR_10->q_perm)) {
  FUNC_4(&VAR_10->q_perm);
  VAR_11 = -VAR_1;
  goto out_unlock;
 }

 FUNC_7(&VAR_10->q_perm, &VAR_9->msg_perm);
 VAR_9->msg_stime = VAR_10->q_stime;
 VAR_9->msg_rtime = VAR_10->q_rtime;
 VAR_9->msg_ctime = VAR_10->q_ctime;

 VAR_9->msg_stime_high = VAR_10->q_stime >> 32;
 VAR_9->msg_rtime_high = VAR_10->q_rtime >> 32;
 VAR_9->msg_ctime_high = VAR_10->q_ctime >> 32;

 VAR_9->msg_cbytes = VAR_10->q_cbytes;
 VAR_9->msg_qnum = VAR_10->q_qnum;
 VAR_9->msg_qbytes = VAR_10->q_qbytes;
 VAR_9->msg_lspid = FUNC_11(VAR_10->q_lspid);
 VAR_9->msg_lrpid = FUNC_11(VAR_10->q_lrpid);

 if (VAR_8 == VAR_2) {




  VAR_11 = 0;
 } else {




  VAR_11 = VAR_10->q_perm.id;
 }

 FUNC_4(&VAR_10->q_perm);
out_unlock:
 FUNC_13();
 return VAR_11;
}
