
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_mds_request {scalar_t__ r_old_dentry; scalar_t__ r_dentry; struct inode* r_old_dentry_dir; struct inode* r_parent; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,struct inode*,struct inode*) ;

void FUNC_3(struct ceph_mds_request *VAR_0)
{
 struct inode *VAR_1 = VAR_0->r_parent;
 struct inode *VAR_2 = VAR_0->r_old_dentry_dir;

 FUNC_2("invalidate_dir_request %p %p (complete, lease(s))\n", VAR_1, VAR_2);

 FUNC_0(VAR_1);
 if (VAR_2)
  FUNC_0(VAR_2);
 if (VAR_0->r_dentry)
  FUNC_1(VAR_0->r_dentry);
 if (VAR_0->r_old_dentry)
  FUNC_1(VAR_0->r_old_dentry);
}
