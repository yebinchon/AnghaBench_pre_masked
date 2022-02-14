
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mds_client {int cap_delay_lock; int cap_delay_list; int stopping; } ;
struct ceph_inode_info {int i_ceph_flags; int i_cap_delay_list; int i_hold_caps_max; int vfs_inode; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_mds_client*,struct ceph_inode_info*) ;
 int FUNC_1 (char*,int *,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ceph_mds_client *VAR_1,
    struct ceph_inode_info *VAR_2,
    bool VAR_3)
{
 FUNC_1("__cap_delay_requeue %p flags %d at %lu\n", &VAR_2->vfs_inode,
      VAR_2->i_ceph_flags, VAR_2->i_hold_caps_max);
 if (!VAR_1->stopping) {
  FUNC_5(&VAR_1->cap_delay_lock);
  if (!FUNC_4(&VAR_2->i_cap_delay_list)) {
   if (VAR_2->i_ceph_flags & VAR_0)
    goto no_change;
   FUNC_3(&VAR_2->i_cap_delay_list);
  }
  if (VAR_3)
   FUNC_0(VAR_1, VAR_2);
  FUNC_2(&VAR_2->i_cap_delay_list, &VAR_1->cap_delay_list);
no_change:
  FUNC_6(&VAR_1->cap_delay_lock);
 }
}
