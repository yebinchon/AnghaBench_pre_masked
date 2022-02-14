
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int cap_delay_lock; } ;
struct ceph_inode_info {int i_cap_delay_list; int vfs_inode; } ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct ceph_mds_client *VAR_0,
          struct ceph_inode_info *VAR_1)
{
 FUNC_0("__cap_delay_cancel %p\n", &VAR_1->vfs_inode);
 if (FUNC_2(&VAR_1->i_cap_delay_list))
  return;
 FUNC_3(&VAR_0->cap_delay_lock);
 FUNC_1(&VAR_1->i_cap_delay_list);
 FUNC_4(&VAR_0->cap_delay_lock);
}
