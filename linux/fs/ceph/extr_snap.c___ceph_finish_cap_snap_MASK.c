
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_ctime; int i_atime; int i_mtime; int i_size; int i_sb; } ;
struct ceph_mds_client {int snap_flush_lock; int snap_flush_list; } ;
struct ceph_inode_info {int i_snap_flush_item; int i_ceph_flags; int i_truncate_seq; int i_truncate_size; int i_time_warp_seq; int i_btime; struct inode vfs_inode; } ;
struct ceph_cap_snap {int size; int dirty; TYPE_1__* context; scalar_t__ dirty_pages; int truncate_seq; int truncate_size; int time_warp_seq; int change_attr; int btime; int ctime; int atime; int mtime; int writing; } ;
struct TYPE_4__ {struct ceph_mds_client* mdsc; } ;
struct TYPE_3__ {int seq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (char*,struct inode*,struct ceph_cap_snap*,TYPE_1__*,int ,int ,int ,...) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct ceph_inode_info *VAR_1,
       struct ceph_cap_snap *VAR_2)
{
 struct inode *VAR_3 = &VAR_1->vfs_inode;
 struct ceph_mds_client *VAR_4 = FUNC_2(VAR_3->i_sb)->mdsc;

 FUNC_0(VAR_2->writing);
 VAR_2->size = VAR_3->i_size;
 VAR_2->mtime = VAR_3->i_mtime;
 VAR_2->atime = VAR_3->i_atime;
 VAR_2->ctime = VAR_3->i_ctime;
 VAR_2->btime = VAR_1->i_btime;
 VAR_2->change_attr = FUNC_4(VAR_3);
 VAR_2->time_warp_seq = VAR_1->i_time_warp_seq;
 VAR_2->truncate_size = VAR_1->i_truncate_size;
 VAR_2->truncate_seq = VAR_1->i_truncate_seq;
 if (VAR_2->dirty_pages) {
  FUNC_3("finish_cap_snap %p cap_snap %p snapc %p %llu %s s=%llu "
       "still has %d dirty pages\n", VAR_3, VAR_2,
       VAR_2->context, VAR_2->context->seq,
       FUNC_1(VAR_2->dirty), VAR_2->size,
       VAR_2->dirty_pages);
  return 0;
 }

 VAR_1->i_ceph_flags |= VAR_0;
 FUNC_3("finish_cap_snap %p cap_snap %p snapc %p %llu %s s=%llu\n",
      VAR_3, VAR_2, VAR_2->context,
      VAR_2->context->seq, FUNC_1(VAR_2->dirty),
      VAR_2->size);

 FUNC_7(&VAR_4->snap_flush_lock);
 if (FUNC_6(&VAR_1->i_snap_flush_item))
  FUNC_5(&VAR_1->i_snap_flush_item, &VAR_4->snap_flush_list);
 FUNC_8(&VAR_4->snap_flush_lock);
 return 1;
}
