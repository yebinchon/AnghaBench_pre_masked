
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_rwsem; } ;
struct ceph_inode_info {int i_ceph_flags; int i_ceph_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ceph_inode_info *VAR_1, struct inode *VAR_2)
{
 FUNC_2(&VAR_2->i_rwsem);

 if (FUNC_0(VAR_1->i_ceph_flags) & VAR_0) {
  FUNC_3(&VAR_1->i_ceph_lock);
  VAR_1->i_ceph_flags &= ~VAR_0;
  FUNC_4(&VAR_1->i_ceph_lock);
  FUNC_1(VAR_2);
 }
}
