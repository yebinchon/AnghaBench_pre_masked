
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_3__ {scalar_t__ uid; scalar_t__ gid; int pid; } ;
struct TYPE_4__ {TYPE_1__ h; } ;
struct fuse_req {TYPE_2__ in; int flags; } ;
struct fuse_conn {int pid_ns; int user_ns; int blocked_waitq; scalar_t__ conn_error; int connected; int num_waiting; } ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fuse_req* FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct fuse_conn*,int) ;
 int FUNC_8 (struct fuse_conn*) ;
 int FUNC_9 (struct fuse_conn*,struct fuse_req*) ;
 struct fuse_req* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 scalar_t__ FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static struct fuse_req *FUNC_17(struct fuse_conn *VAR_9, bool VAR_10)
{
 struct fuse_req *VAR_11;
 int VAR_12;
 FUNC_2(&VAR_9->num_waiting);

 if (FUNC_7(VAR_9, VAR_10)) {
  VAR_12 = -VAR_1;
  if (FUNC_15(VAR_9->blocked_waitq,
    !FUNC_7(VAR_9, VAR_10)))
   goto out;
 }

 FUNC_12();

 VAR_12 = -VAR_3;
 if (!VAR_9->connected)
  goto out;

 VAR_12 = -VAR_0;
 if (VAR_9->conn_error)
  goto out;

 VAR_11 = FUNC_10(VAR_7);
 VAR_12 = -VAR_2;
 if (!VAR_11) {
  if (VAR_10)
   FUNC_16(&VAR_9->blocked_waitq);
  goto out;
 }

 VAR_11->in.h.uid = FUNC_6(VAR_9->user_ns, FUNC_4());
 VAR_11->in.h.gid = FUNC_5(VAR_9->user_ns, FUNC_3());
 VAR_11->in.h.pid = FUNC_11(FUNC_13(VAR_8), VAR_9->pid_ns);

 FUNC_1(VAR_6, &VAR_11->flags);
 if (VAR_10)
  FUNC_1(VAR_5, &VAR_11->flags);

 if (FUNC_14(VAR_11->in.h.uid == ((uid_t)-1) ||
       VAR_11->in.h.gid == ((gid_t)-1))) {
  FUNC_9(VAR_9, VAR_11);
  return FUNC_0(-VAR_4);
 }
 return VAR_11;

 out:
 FUNC_8(VAR_9);
 return FUNC_0(VAR_12);
}
