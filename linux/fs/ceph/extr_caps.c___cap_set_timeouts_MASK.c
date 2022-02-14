
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mount_options {int caps_wanted_delay_min; int caps_wanted_delay_max; } ;
struct ceph_mds_client {TYPE_1__* fsc; } ;
struct ceph_inode_info {void* i_hold_caps_max; void* i_hold_caps_min; int vfs_inode; } ;
struct TYPE_2__ {struct ceph_mount_options* mount_options; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,void*,void*) ;
 void* VAR_1 ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct ceph_mds_client *VAR_2,
          struct ceph_inode_info *VAR_3)
{
 struct ceph_mount_options *VAR_4 = VAR_2->fsc->mount_options;

 VAR_3->i_hold_caps_min = FUNC_1(VAR_1 +
         VAR_4->caps_wanted_delay_min * VAR_0);
 VAR_3->i_hold_caps_max = FUNC_1(VAR_1 +
         VAR_4->caps_wanted_delay_max * VAR_0);
 FUNC_0("__cap_set_timeouts %p min %lu max %lu\n", &VAR_3->vfs_inode,
      VAR_3->i_hold_caps_min - VAR_1, VAR_3->i_hold_caps_max - VAR_1);
}
