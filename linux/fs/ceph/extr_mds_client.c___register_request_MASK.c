
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_mds_request {scalar_t__ r_tid; int r_err; scalar_t__ r_op; struct inode* r_unsafe_dir; int r_gid; int r_uid; scalar_t__ r_num_caps; int r_caps_reservation; } ;
struct ceph_mds_client {scalar_t__ last_tid; scalar_t__ oldest_tid; int request_tree; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_client*,int *,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,struct ceph_mds_request*,scalar_t__) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,struct ceph_mds_request*) ;
 int FUNC_7 (char*,struct ceph_mds_request*,int) ;

__attribute__((used)) static void FUNC_8(struct ceph_mds_client *VAR_1,
          struct ceph_mds_request *VAR_2,
          struct inode *VAR_3)
{
 int VAR_4 = 0;

 VAR_2->r_tid = ++VAR_1->last_tid;
 if (VAR_2->r_num_caps) {
  VAR_4 = FUNC_1(VAR_1, &VAR_2->r_caps_reservation,
     VAR_2->r_num_caps);
  if (VAR_4 < 0) {
   FUNC_7("__register_request %p "
          "failed to reserve caps: %d\n", VAR_2, VAR_4);

   VAR_2->r_err = VAR_4;
   return;
  }
 }
 FUNC_4("__register_request %p tid %lld\n", VAR_2, VAR_2->r_tid);
 FUNC_0(VAR_2);
 FUNC_6(&VAR_1->request_tree, VAR_2);

 VAR_2->r_uid = FUNC_3();
 VAR_2->r_gid = FUNC_2();

 if (VAR_1->oldest_tid == 0 && VAR_2->r_op != VAR_0)
  VAR_1->oldest_tid = VAR_2->r_tid;

 if (VAR_3) {
  FUNC_5(VAR_3);
  VAR_2->r_unsafe_dir = VAR_3;
 }
}
