
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int cap_delay_lock; int cap_delay_list; } ;
struct ceph_inode_info {int i_cap_delay_list; int i_ceph_flags; int vfs_inode; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ceph_mds_client *VAR_1,
          struct ceph_inode_info *VAR_2)
{
 FUNC_0("__cap_delay_requeue_front %p\n", &VAR_2->vfs_inode);
 FUNC_4(&VAR_1->cap_delay_lock);
 VAR_2->i_ceph_flags |= VAR_0;
 if (!FUNC_3(&VAR_2->i_cap_delay_list))
  FUNC_2(&VAR_2->i_cap_delay_list);
 FUNC_1(&VAR_2->i_cap_delay_list, &VAR_1->cap_delay_list);
 FUNC_5(&VAR_1->cap_delay_lock);
}
