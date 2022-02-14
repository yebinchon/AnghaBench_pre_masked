
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int seq; int i_gid; int i_uid; int i_mode; } ;
struct ceph_snap_context {int seq; int i_gid; int i_uid; int i_mode; } ;
struct TYPE_4__ {scalar_t__ version; int blob; } ;
struct ceph_inode_info {scalar_t__ i_wrbuffer_ref_head; scalar_t__ i_inline_version; scalar_t__ i_wr_ref; scalar_t__ i_dirty_caps; scalar_t__ i_flushing_caps; int i_ceph_lock; struct inode* i_head_snapc; int i_cap_snaps; TYPE_2__ i_xattrs; TYPE_1__* i_snap_realm; struct inode vfs_inode; } ;
struct ceph_cap_snap {int need_flush; int dirty; int inline_data; scalar_t__ dirty_pages; int writing; int ci_item; struct inode* context; scalar_t__ xattr_version; int * xattr_blob; int gid; int uid; int mode; int issued; int follows; int nref; } ;
struct ceph_buffer {int dummy; } ;
struct TYPE_3__ {struct inode* cached_context; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 struct ceph_buffer* FUNC_2 (struct ceph_inode_info*) ;
 int FUNC_3 (struct ceph_inode_info*) ;
 int FUNC_4 (struct ceph_inode_info*,int *) ;
 int FUNC_5 (struct ceph_inode_info*) ;
 int FUNC_6 (struct ceph_inode_info*,struct ceph_cap_snap*) ;
 scalar_t__ FUNC_7 (struct ceph_inode_info*) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (struct ceph_buffer*) ;
 int FUNC_10 (int) ;
 struct inode* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (char*,struct inode*,...) ;
 scalar_t__ FUNC_14 (struct inode*,struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct ceph_cap_snap*) ;
 struct ceph_cap_snap* FUNC_17 (int,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (char*,struct inode*) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

void FUNC_23(struct ceph_inode_info *VAR_5)
{
 struct inode *VAR_6 = &VAR_5->vfs_inode;
 struct ceph_cap_snap *VAR_7;
 struct ceph_snap_context *VAR_8, *VAR_9;
 struct ceph_buffer *VAR_10 = ((void*)0);
 int VAR_11, VAR_12;

 VAR_7 = FUNC_17(sizeof(*VAR_7), VAR_4);
 if (!VAR_7) {
  FUNC_19("ENOMEM allocating ceph_cap_snap on %p\n", VAR_6);
  return;
 }

 FUNC_21(&VAR_5->i_ceph_lock);
 VAR_11 = FUNC_5(VAR_5);
 VAR_12 = FUNC_3(VAR_5);

 VAR_8 = VAR_5->i_head_snapc;
 VAR_9 = VAR_5->i_snap_realm->cached_context;






 if (VAR_11 & VAR_1)
  VAR_12 |= VAR_1;

 if (FUNC_7(VAR_5)) {




  FUNC_13("queue_cap_snap %p already pending\n", VAR_6);
  goto update_snapc;
 }
 if (VAR_5->i_wrbuffer_ref_head == 0 &&
     !(VAR_12 & (VAR_0|VAR_1))) {
  FUNC_13("queue_cap_snap %p nothing dirty|writing\n", VAR_6);
  goto update_snapc;
 }

 FUNC_0(!VAR_8);
 if (FUNC_14(VAR_8, VAR_9)) {
  if (VAR_12 & (VAR_0|VAR_1))
   VAR_7->need_flush = 1;
 } else {
  if (!(VAR_11 & VAR_1) &&
      VAR_5->i_wrbuffer_ref_head == 0) {
   FUNC_13("queue_cap_snap %p "
        "no new_snap|dirty_page|writing\n", VAR_6);
   goto update_snapc;
  }
 }

 FUNC_13("queue_cap_snap %p cap_snap %p queuing under %p %s %s\n",
      VAR_6, VAR_7, VAR_8, FUNC_10(VAR_12),
      VAR_7->need_flush ? "" : "no_flush");
 FUNC_15(VAR_6);

 FUNC_20(&VAR_7->nref, 1);
 FUNC_1(&VAR_7->ci_item);

 VAR_7->follows = VAR_8->seq;
 VAR_7->issued = FUNC_4(VAR_5, ((void*)0));
 VAR_7->dirty = VAR_12;

 VAR_7->mode = VAR_6->i_mode;
 VAR_7->uid = VAR_6->i_uid;
 VAR_7->gid = VAR_6->i_gid;

 if (VAR_12 & VAR_2) {
  VAR_10 = FUNC_2(VAR_5);
  VAR_7->xattr_blob =
   FUNC_8(VAR_5->i_xattrs.blob);
  VAR_7->xattr_version = VAR_5->i_xattrs.version;
 } else {
  VAR_7->xattr_blob = ((void*)0);
  VAR_7->xattr_version = 0;
 }

 VAR_7->inline_data = VAR_5->i_inline_version != VAR_3;




 VAR_7->dirty_pages = VAR_5->i_wrbuffer_ref_head;
 VAR_5->i_wrbuffer_ref_head = 0;
 VAR_7->context = VAR_8;
 FUNC_18(&VAR_7->ci_item, &VAR_5->i_cap_snaps);

 if (VAR_11 & VAR_1) {
  FUNC_13("queue_cap_snap %p cap_snap %p snapc %p"
       " seq %llu used WR, now pending\n", VAR_6,
       VAR_7, VAR_8, VAR_8->seq);
  VAR_7->writing = 1;
 } else {

  FUNC_6(VAR_5, VAR_7);
 }
 VAR_7 = ((void*)0);
 VAR_8 = ((void*)0);

update_snapc:
       if (VAR_5->i_wrbuffer_ref_head == 0 &&
           VAR_5->i_wr_ref == 0 &&
           VAR_5->i_dirty_caps == 0 &&
           VAR_5->i_flushing_caps == 0) {
               VAR_5->i_head_snapc = ((void*)0);
       } else {
  VAR_5->i_head_snapc = FUNC_11(VAR_9);
  FUNC_13(" new snapc is %p\n", VAR_9);
 }
 FUNC_22(&VAR_5->i_ceph_lock);

 FUNC_9(VAR_10);
 FUNC_16(VAR_7);
 FUNC_12(VAR_8);
}
