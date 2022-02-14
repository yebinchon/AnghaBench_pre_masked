
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rwsem; } ;
struct ceph_inode_info {int i_ceph_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ceph_inode_info*,struct inode*) ;
 struct ceph_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct inode *VAR_1)
{
 struct ceph_inode_info *VAR_2 = FUNC_2(VAR_1);


 FUNC_3(&VAR_1->i_rwsem);
 if (FUNC_0(VAR_2->i_ceph_flags) & VAR_0)
  return;
 FUNC_6(&VAR_1->i_rwsem);

 FUNC_4(&VAR_1->i_rwsem);
 FUNC_1(VAR_2, VAR_1);
 FUNC_5(&VAR_1->i_rwsem);
}
