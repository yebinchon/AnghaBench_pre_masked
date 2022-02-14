
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_mds_request {int r_err; scalar_t__ r_old_dentry_dir; scalar_t__ r_parent; scalar_t__ r_inode; } ;
struct ceph_mds_client {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_mds_client*,struct ceph_mds_request*) ;
 int FUNC_1 (struct ceph_mds_client*,struct ceph_mds_request*,struct inode*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,struct ceph_mds_request*,struct inode*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct ceph_mds_client *VAR_1, struct inode *VAR_2,
         struct ceph_mds_request *VAR_3)
{
 int VAR_4;


 if (VAR_3->r_inode)
  FUNC_2(FUNC_3(VAR_3->r_inode), VAR_0);
 if (VAR_3->r_parent)
  FUNC_2(FUNC_3(VAR_3->r_parent), VAR_0);
 if (VAR_3->r_old_dentry_dir)
  FUNC_2(FUNC_3(VAR_3->r_old_dentry_dir),
      VAR_0);

 FUNC_4("submit_request on %p for inode %p\n", VAR_3, VAR_2);
 FUNC_5(&VAR_1->mutex);
 FUNC_1(VAR_1, VAR_3, VAR_2);
 FUNC_0(VAR_1, VAR_3);
 VAR_4 = VAR_3->r_err;
 FUNC_6(&VAR_1->mutex);
 return VAR_4;
}
