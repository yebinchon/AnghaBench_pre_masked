
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; struct inode vfs_inode; } ;


 int FUNC_0 (struct ceph_inode_info*,int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct inode*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ceph_inode_info *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = &VAR_0->vfs_inode;
 int VAR_3;

 FUNC_3(&VAR_0->i_ceph_lock);
 VAR_3 = FUNC_0(VAR_0, ((void*)0), VAR_1);
 FUNC_4(&VAR_0->i_ceph_lock);
 FUNC_2("ceph_caps_revoking %p %s = %d\n", VAR_2,
      FUNC_1(VAR_1), VAR_3);
 return VAR_3;
}
