
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; } ;


 int FUNC_0 (struct ceph_inode_info*) ;
 struct ceph_inode_info* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct inode *VAR_0)
{
 struct ceph_inode_info *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->i_ceph_lock);
 VAR_2 = FUNC_0(VAR_1);
 FUNC_3(&VAR_1->i_ceph_lock);

 return VAR_2;
}
