
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_mds_client {int last_cap_flush_tid; int nodename; void* pool_perm_tree; int pool_perm_rwsem; int snapid_map_lru; void* snapid_map_tree; int snapid_map_lock; int dentry_dir_leases; int dentry_leases; int dentry_list_lock; int cap_reclaim_pending; int cap_reclaim_work; int cap_flushing_wq; int cap_dirty_lock; scalar_t__ num_cap_flushing; int cap_dirty_migrating; int cap_dirty; int cap_flush_list; int snap_flush_lock; int snap_flush_list; int cap_delay_lock; int cap_delay_list; int last_renew_caps; int delayed_work; void* request_tree; scalar_t__ oldest_tid; scalar_t__ last_tid; int snap_empty_lock; scalar_t__ num_snap_realms; int snap_empty; void* snap_realms; int snap_rwsem; scalar_t__ last_snap_seq; int quotarealms_inodes_mutex; void* quotarealms_inodes; int quotarealms_count; scalar_t__ stopping; scalar_t__ max_sessions; int num_sessions; int * sessions; int waiting_for_map; int session_close_wq; int safe_umount_waiters; void* mdsmap; int mutex; struct ceph_fs_client* fsc; } ;
struct ceph_fs_client {int mount_options; struct ceph_mds_client* mdsc; } ;
struct TYPE_2__ {int nodename; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 void* VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct ceph_mds_client*,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct ceph_mds_client*) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (struct ceph_mds_client*) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int) ;
 TYPE_1__* FUNC_15 () ;

int FUNC_16(struct ceph_fs_client *VAR_6)

{
 struct ceph_mds_client *VAR_7;

 VAR_7 = FUNC_11(sizeof(struct ceph_mds_client), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_7->fsc = VAR_6;
 FUNC_12(&VAR_7->mutex);
 VAR_7->mdsmap = FUNC_11(sizeof(*VAR_7->mdsmap), VAR_1);
 if (!VAR_7->mdsmap) {
  FUNC_10(VAR_7);
  return -VAR_0;
 }

 VAR_6->mdsc = VAR_7;
 FUNC_7(&VAR_7->safe_umount_waiters);
 FUNC_9(&VAR_7->session_close_wq);
 FUNC_1(&VAR_7->waiting_for_map);
 VAR_7->sessions = ((void*)0);
 FUNC_4(&VAR_7->num_sessions, 0);
 VAR_7->max_sessions = 0;
 VAR_7->stopping = 0;
 FUNC_3(&VAR_7->quotarealms_count, 0);
 VAR_7->quotarealms_inodes = VAR_2;
 FUNC_12(&VAR_7->quotarealms_inodes_mutex);
 VAR_7->last_snap_seq = 0;
 FUNC_8(&VAR_7->snap_rwsem);
 VAR_7->snap_realms = VAR_2;
 FUNC_1(&VAR_7->snap_empty);
 VAR_7->num_snap_realms = 0;
 FUNC_13(&VAR_7->snap_empty_lock);
 VAR_7->last_tid = 0;
 VAR_7->oldest_tid = 0;
 VAR_7->request_tree = VAR_2;
 FUNC_0(&VAR_7->delayed_work, VAR_4);
 VAR_7->last_renew_caps = VAR_5;
 FUNC_1(&VAR_7->cap_delay_list);
 FUNC_13(&VAR_7->cap_delay_lock);
 FUNC_1(&VAR_7->snap_flush_list);
 FUNC_13(&VAR_7->snap_flush_lock);
 VAR_7->last_cap_flush_tid = 1;
 FUNC_1(&VAR_7->cap_flush_list);
 FUNC_1(&VAR_7->cap_dirty);
 FUNC_1(&VAR_7->cap_dirty_migrating);
 VAR_7->num_cap_flushing = 0;
 FUNC_13(&VAR_7->cap_dirty_lock);
 FUNC_9(&VAR_7->cap_flushing_wq);
 FUNC_2(&VAR_7->cap_reclaim_work, VAR_3);
 FUNC_4(&VAR_7->cap_reclaim_pending, 0);

 FUNC_13(&VAR_7->dentry_list_lock);
 FUNC_1(&VAR_7->dentry_leases);
 FUNC_1(&VAR_7->dentry_dir_leases);

 FUNC_6(VAR_7);
 FUNC_5(VAR_7, VAR_6->mount_options);

 FUNC_13(&VAR_7->snapid_map_lock);
 VAR_7->snapid_map_tree = VAR_2;
 FUNC_1(&VAR_7->snapid_map_lru);

 FUNC_8(&VAR_7->pool_perm_rwsem);
 VAR_7->pool_perm_tree = VAR_2;

 FUNC_14(VAR_7->nodename, FUNC_15()->nodename,
  sizeof(VAR_7->nodename));
 return 0;
}
