
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int dirty; scalar_t__ index_version; scalar_t__ version; scalar_t__ vals_size; scalar_t__ names_size; scalar_t__ count; void* index; int * prealloc_blob; int * blob; } ;
struct TYPE_3__ {int pool_ns; } ;
struct ceph_inode_info {struct inode vfs_inode; scalar_t__ i_meta_err; int i_btime; scalar_t__ i_work_mask; int i_work; int i_snap_flush_item; int i_snap_realm_item; int * i_snap_realm; int i_unsafe_lock; int i_unsafe_iops; int i_unsafe_dirops; scalar_t__ i_rdcache_revoking; scalar_t__ i_rdcache_gen; int i_shared_gen; int i_filelock_ref; scalar_t__ i_wrbuffer_ref_head; scalar_t__ i_wrbuffer_ref; scalar_t__ i_wb_ref; scalar_t__ i_wr_ref; scalar_t__ i_rdcache_ref; scalar_t__ i_rd_ref; scalar_t__ i_pin_ref; scalar_t__ i_requested_max_size; scalar_t__ i_wanted_max_size; scalar_t__ i_reported_size; scalar_t__ i_max_size; scalar_t__ i_truncate_pending; scalar_t__ i_truncate_size; scalar_t__ i_truncate_seq; int i_truncate_mutex; scalar_t__* i_nr_by_mode; scalar_t__ i_snap_caps; int * i_head_snapc; int i_cap_snaps; int i_cap_delay_list; scalar_t__ i_hold_caps_max; scalar_t__ i_hold_caps_min; int i_cap_wq; int i_cap_flush_list; int * i_prealloc_cap_flush; int i_flushing_item; int i_dirty_item; scalar_t__ i_flushing_caps; scalar_t__ i_dirty_caps; int * i_auth_cap; void* i_caps; TYPE_2__ i_xattrs; int i_fragtree_mutex; void* i_fragtree; TYPE_1__ i_layout; int i_dir_layout; scalar_t__ i_max_files; scalar_t__ i_max_bytes; int * i_symlink; int * i_complete_seq; int i_release_count; int i_ordered_count; scalar_t__ i_ceph_flags; scalar_t__ i_time_warp_seq; scalar_t__ i_inline_version; scalar_t__ i_version; int i_ceph_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 void* VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ceph_inode_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*,struct inode*) ;
 int FUNC_7 (int *) ;
 struct ceph_inode_info* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,char,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

struct inode *FUNC_12(struct super_block *VAR_5)
{
 struct ceph_inode_info *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(VAR_3, VAR_1);
 if (!VAR_6)
  return ((void*)0);

 FUNC_6("alloc_inode %p\n", &VAR_6->vfs_inode);

 FUNC_11(&VAR_6->i_ceph_lock);

 VAR_6->i_version = 0;
 VAR_6->i_inline_version = 0;
 VAR_6->i_time_warp_seq = 0;
 VAR_6->i_ceph_flags = 0;
 FUNC_3(&VAR_6->i_ordered_count, 1);
 FUNC_3(&VAR_6->i_release_count, 1);
 FUNC_3(&VAR_6->i_complete_seq[0], 0);
 FUNC_3(&VAR_6->i_complete_seq[1], 0);
 VAR_6->i_symlink = ((void*)0);

 VAR_6->i_max_bytes = 0;
 VAR_6->i_max_files = 0;

 FUNC_9(&VAR_6->i_dir_layout, 0, sizeof(VAR_6->i_dir_layout));
 FUNC_2(VAR_6->i_layout.pool_ns, ((void*)0));

 VAR_6->i_fragtree = VAR_2;
 FUNC_10(&VAR_6->i_fragtree_mutex);

 VAR_6->i_xattrs.blob = ((void*)0);
 VAR_6->i_xattrs.prealloc_blob = ((void*)0);
 VAR_6->i_xattrs.dirty = 0;
 VAR_6->i_xattrs.index = VAR_2;
 VAR_6->i_xattrs.count = 0;
 VAR_6->i_xattrs.names_size = 0;
 VAR_6->i_xattrs.vals_size = 0;
 VAR_6->i_xattrs.version = 0;
 VAR_6->i_xattrs.index_version = 0;

 VAR_6->i_caps = VAR_2;
 VAR_6->i_auth_cap = ((void*)0);
 VAR_6->i_dirty_caps = 0;
 VAR_6->i_flushing_caps = 0;
 FUNC_0(&VAR_6->i_dirty_item);
 FUNC_0(&VAR_6->i_flushing_item);
 VAR_6->i_prealloc_cap_flush = ((void*)0);
 FUNC_0(&VAR_6->i_cap_flush_list);
 FUNC_7(&VAR_6->i_cap_wq);
 VAR_6->i_hold_caps_min = 0;
 VAR_6->i_hold_caps_max = 0;
 FUNC_0(&VAR_6->i_cap_delay_list);
 FUNC_0(&VAR_6->i_cap_snaps);
 VAR_6->i_head_snapc = ((void*)0);
 VAR_6->i_snap_caps = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_6->i_nr_by_mode[VAR_7] = 0;

 FUNC_10(&VAR_6->i_truncate_mutex);
 VAR_6->i_truncate_seq = 0;
 VAR_6->i_truncate_size = 0;
 VAR_6->i_truncate_pending = 0;

 VAR_6->i_max_size = 0;
 VAR_6->i_reported_size = 0;
 VAR_6->i_wanted_max_size = 0;
 VAR_6->i_requested_max_size = 0;

 VAR_6->i_pin_ref = 0;
 VAR_6->i_rd_ref = 0;
 VAR_6->i_rdcache_ref = 0;
 VAR_6->i_wr_ref = 0;
 VAR_6->i_wb_ref = 0;
 VAR_6->i_wrbuffer_ref = 0;
 VAR_6->i_wrbuffer_ref_head = 0;
 FUNC_4(&VAR_6->i_filelock_ref, 0);
 FUNC_4(&VAR_6->i_shared_gen, 1);
 VAR_6->i_rdcache_gen = 0;
 VAR_6->i_rdcache_revoking = 0;

 FUNC_0(&VAR_6->i_unsafe_dirops);
 FUNC_0(&VAR_6->i_unsafe_iops);
 FUNC_11(&VAR_6->i_unsafe_lock);

 VAR_6->i_snap_realm = ((void*)0);
 FUNC_0(&VAR_6->i_snap_realm_item);
 FUNC_0(&VAR_6->i_snap_flush_item);

 FUNC_1(&VAR_6->i_work, VAR_4);
 VAR_6->i_work_mask = 0;
 FUNC_9(&VAR_6->i_btime, '\0', sizeof(VAR_6->i_btime));

 FUNC_5(VAR_6);

 VAR_6->i_meta_err = 0;

 return &VAR_6->vfs_inode;
}
