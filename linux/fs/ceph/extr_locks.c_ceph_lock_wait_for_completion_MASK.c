
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {scalar_t__ rule; scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ filelock_change; } ;
struct ceph_mds_request {scalar_t__ r_op; int r_err; int r_num_caps; int r_safe_completion; TYPE_2__ r_args; struct inode* r_inode; int r_session; int r_fill_mutex; int r_req_flags; int r_tid; int r_completion; } ;
struct ceph_mds_client {int mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct ceph_mds_request*) ;
 int FUNC_2 (struct ceph_mds_request*) ;
 int VAR_9 ;
 struct ceph_mds_request* FUNC_3 (struct ceph_mds_client*,scalar_t__,int ) ;
 int FUNC_4 (struct ceph_mds_client*,struct inode*,struct ceph_mds_request*) ;
 int FUNC_5 (struct ceph_mds_request*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct ceph_mds_client *VAR_10,
                                         struct ceph_mds_request *VAR_11)
{
 struct ceph_mds_request *VAR_12;
 struct inode *VAR_13 = VAR_11->r_inode;
 int VAR_14, VAR_15;

 FUNC_0(VAR_11->r_op != VAR_5);
 if (VAR_11->r_args.filelock_change.rule == VAR_0)
  VAR_15 = VAR_1;
 else if (VAR_11->r_args.filelock_change.rule == VAR_2)
  VAR_15 = VAR_3;
 else
  FUNC_0(1);
 FUNC_0(VAR_11->r_args.filelock_change.type == VAR_4);

 VAR_14 = FUNC_12(&VAR_11->r_completion);
 if (!VAR_14)
  return 0;

 FUNC_6("ceph_lock_wait_for_completion: request %llu was interrupted\n",
      VAR_11->r_tid);

 FUNC_8(&VAR_10->mutex);
 if (FUNC_11(VAR_7, &VAR_11->r_req_flags)) {
  VAR_14 = 0;
 } else {





  FUNC_8(&VAR_11->r_fill_mutex);
  VAR_11->r_err = VAR_14;
  FUNC_10(VAR_6, &VAR_11->r_req_flags);
  FUNC_9(&VAR_11->r_fill_mutex);

  if (!VAR_11->r_session) {

   VAR_14 = 0;
  }
 }
 FUNC_9(&VAR_10->mutex);
 if (!VAR_14)
  return 0;

 VAR_12 = FUNC_3(VAR_10, VAR_5,
         VAR_9);
 if (FUNC_1(VAR_12))
  return FUNC_2(VAR_12);

 VAR_12->r_inode = VAR_13;
 FUNC_7(VAR_13);
 VAR_12->r_num_caps = 1;

 VAR_12->r_args.filelock_change = VAR_11->r_args.filelock_change;
 VAR_12->r_args.filelock_change.rule = VAR_15;
 VAR_12->r_args.filelock_change.type = VAR_4;

 VAR_14 = FUNC_4(VAR_10, VAR_13, VAR_12);
 FUNC_5(VAR_12);

 if (VAR_14 && VAR_14 != -VAR_8)
  return VAR_14;

 FUNC_13(&VAR_11->r_safe_completion);
 return 0;
}
