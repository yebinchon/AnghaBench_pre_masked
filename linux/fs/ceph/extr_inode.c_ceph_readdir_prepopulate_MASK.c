
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qstr {int name; int len; int hash; } ;
struct inode {int dummy; } ;
struct dentry {int d_sb; int d_lock; } ;
struct ceph_vino {scalar_t__ ino; scalar_t__ snap; } ;
struct ceph_readdir_cache_control {scalar_t__ index; } ;
struct ceph_mds_session {int dummy; } ;
struct TYPE_14__ {int offset_hash; int frag; } ;
struct TYPE_15__ {TYPE_5__ readdir; } ;
struct ceph_mds_request_head {TYPE_6__ args; } ;
struct ceph_mds_reply_info_parsed {int dir_nr; scalar_t__ hash_order; struct ceph_mds_reply_dir_entry* dir_entries; TYPE_9__* dir_dir; TYPE_7__* head; scalar_t__ offset_hash; } ;
struct ceph_mds_request {int r_readdir_offset; scalar_t__ r_readdir_cache_idx; int r_req_flags; int r_request_started; int r_session; int r_caps_reservation; void* r_dir_ordered_cnt; void* r_dir_release_cnt; int r_path2; TYPE_3__* r_request; struct ceph_mds_reply_info_parsed r_reply_info; struct dentry* r_dentry; } ;
struct TYPE_17__ {TYPE_1__* in; } ;
struct ceph_mds_reply_dir_entry {scalar_t__ offset; int lease; TYPE_8__ inode; int name_len; int name; } ;
struct TYPE_13__ {int dl_dir_hash; } ;
struct ceph_inode_info {int i_shared_gen; TYPE_4__ i_dir_layout; int i_ordered_count; int i_release_count; } ;
struct ceph_dentry_info {scalar_t__ offset; scalar_t__ lease_shared_gen; } ;
struct TYPE_18__ {int frag; } ;
struct TYPE_16__ {int op; } ;
struct TYPE_11__ {struct ceph_mds_request_head* iov_base; } ;
struct TYPE_12__ {TYPE_2__ front; } ;
struct TYPE_10__ {int snapid; int ino; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ceph_inode_info*) ;
 void* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;
 struct ceph_dentry_info* FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*,TYPE_9__*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 struct inode* FUNC_11 (int ,struct ceph_vino) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 struct ceph_inode_info* FUNC_13 (struct inode*) ;
 void* FUNC_14 (scalar_t__,int ,int) ;
 int FUNC_15 (struct ceph_readdir_cache_control*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (int ,int ,int ) ;
 struct dentry* FUNC_19 (struct dentry*,struct qstr*) ;
 int FUNC_20 (struct dentry*) ;
 int FUNC_21 (struct dentry*) ;
 struct inode* FUNC_22 (struct dentry*) ;
 struct dentry* FUNC_23 (struct dentry*,struct qstr*) ;
 scalar_t__ FUNC_24 (struct dentry*) ;
 scalar_t__ FUNC_25 (struct dentry*) ;
 int FUNC_26 (char*,...) ;
 int FUNC_27 (struct dentry*) ;
 int FUNC_28 (struct inode*,int *,TYPE_8__*,int *,struct ceph_mds_session*,int ,int,int *) ;
 int FUNC_29 (struct inode*,struct dentry*,struct ceph_readdir_cache_control*,struct ceph_mds_request*) ;
 int FUNC_30 (struct dentry*,int ,int ) ;
 scalar_t__ FUNC_31 (int ) ;
 void* FUNC_32 (int ) ;
 int FUNC_33 (char*,struct inode*) ;
 int FUNC_34 (struct ceph_mds_request*,struct ceph_mds_session*) ;
 int FUNC_35 (int ,int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (struct dentry**,struct inode*) ;
 int FUNC_39 (int ) ;
 scalar_t__ FUNC_40 (int ,int *) ;
 int FUNC_41 (struct inode*,struct dentry*,int ,int ,int ) ;

int FUNC_42(struct ceph_mds_request *VAR_4,
        struct ceph_mds_session *VAR_5)
{
 struct dentry *VAR_6 = VAR_4->r_dentry;
 struct ceph_inode_info *VAR_7 = FUNC_13(FUNC_22(VAR_6));
 struct ceph_mds_reply_info_parsed *VAR_8 = &VAR_4->r_reply_info;
 struct qstr VAR_9;
 struct dentry *VAR_10;
 struct inode *VAR_11;
 int VAR_12 = 0, VAR_13 = 0, VAR_14, VAR_15;
 struct ceph_mds_request_head *VAR_16 = VAR_4->r_request->front.iov_base;
 u32 VAR_17 = FUNC_31(VAR_16->args.readdir.frag);
 u32 VAR_18 = 0;
 u32 VAR_19;
 struct ceph_readdir_cache_control VAR_20 = {};

 if (FUNC_40(VAR_1, &VAR_4->r_req_flags))
  return FUNC_34(VAR_4, VAR_5);

 if (VAR_8->hash_order) {
  if (VAR_4->r_path2) {
   VAR_18 = FUNC_18(VAR_7->i_dir_layout.dl_dir_hash,
        VAR_4->r_path2,
        FUNC_39(VAR_4->r_path2));
   VAR_18 = FUNC_10(VAR_18);
  } else if (VAR_8->offset_hash) {

   FUNC_2(VAR_4->r_readdir_offset != 2);
   VAR_18 = FUNC_31(VAR_16->args.readdir.offset_hash);
  }
 }

 if (VAR_8->dir_dir &&
     FUNC_31(VAR_8->dir_dir->frag) != VAR_17) {
  FUNC_26("readdir_prepopulate got new frag %x -> %x\n",
       VAR_17, FUNC_31(VAR_8->dir_dir->frag));
  VAR_17 = FUNC_31(VAR_8->dir_dir->frag);
  if (!VAR_8->hash_order)
   VAR_4->r_readdir_offset = 2;
 }

 if (FUNC_31(VAR_8->head->op) == VAR_0) {
  FUNC_26("readdir_prepopulate %d items under SNAPDIR dn %p\n",
       VAR_8->dir_nr, VAR_6);
 } else {
  FUNC_26("readdir_prepopulate %d items under dn %p\n",
       VAR_8->dir_nr, VAR_6);
  if (VAR_8->dir_dir)
   FUNC_8(FUNC_22(VAR_6), VAR_8->dir_dir);

  if (FUNC_9(VAR_17) &&
      VAR_4->r_readdir_offset == 2 &&
      !(VAR_8->hash_order && VAR_18)) {


   VAR_4->r_dir_release_cnt =
    FUNC_4(&VAR_7->i_release_count);
   VAR_4->r_dir_ordered_cnt =
    FUNC_4(&VAR_7->i_ordered_count);
   VAR_4->r_readdir_cache_idx = 0;
  }
 }

 VAR_20.index = VAR_4->r_readdir_cache_idx;
 VAR_19 = VAR_4->r_readdir_offset;


 for (VAR_15 = 0; VAR_15 < VAR_8->dir_nr; VAR_15++) {
  struct ceph_mds_reply_dir_entry *VAR_21 = VAR_8->dir_entries + VAR_15;
  struct ceph_vino VAR_22;

  VAR_9.name = VAR_21->name;
  VAR_9.len = VAR_21->name_len;
  VAR_9.hash = FUNC_30(VAR_6, VAR_9.name, VAR_9.len);

  VAR_22.ino = FUNC_32(VAR_21->inode.in->ino);
  VAR_22.snap = FUNC_32(VAR_21->inode.in->snapid);

  if (VAR_8->hash_order) {
   u32 VAR_23 = FUNC_18(VAR_7->i_dir_layout.dl_dir_hash,
       VAR_21->name, VAR_21->name_len);
   VAR_23 = FUNC_10(VAR_23);
   if (VAR_23 != VAR_18)
    VAR_19 = 2;
   VAR_18 = VAR_23;
   VAR_21->offset = FUNC_14(VAR_23, VAR_19++, 1);
  } else {
   VAR_21->offset = FUNC_14(VAR_17, VAR_19++, 0);
  }

retry_lookup:
  VAR_10 = FUNC_23(VAR_6, &VAR_9);
  FUNC_26("d_lookup on parent=%p name=%.*s got %p\n",
       VAR_6, VAR_9.len, VAR_9.name, VAR_10);

  if (!VAR_10) {
   VAR_10 = FUNC_19(VAR_6, &VAR_9);
   FUNC_26("d_alloc %p '%.*s' = %p\n", VAR_6,
        VAR_9.len, VAR_9.name, VAR_10);
   if (!VAR_10) {
    FUNC_26("d_alloc badness\n");
    VAR_12 = -VAR_3;
    goto out;
   }
  } else if (FUNC_25(VAR_10) &&
      (FUNC_12(FUNC_22(VAR_10)) != VAR_22.ino ||
       FUNC_17(FUNC_22(VAR_10)) != VAR_22.snap)) {
   struct ceph_dentry_info *VAR_24 = FUNC_7(VAR_10);
   FUNC_26(" dn %p points to wrong inode %p\n",
        VAR_10, FUNC_22(VAR_10));

   FUNC_36(&VAR_10->d_lock);
   if (VAR_24->offset > 0 &&
       VAR_24->lease_shared_gen ==
       FUNC_5(&VAR_7->i_shared_gen)) {
    FUNC_3(VAR_7);
    VAR_24->offset = 0;
   }
   FUNC_37(&VAR_10->d_lock);

   FUNC_20(VAR_10);
   FUNC_27(VAR_10);
   goto retry_lookup;
  }


  if (FUNC_25(VAR_10)) {
   VAR_11 = FUNC_22(VAR_10);
  } else {
   VAR_11 = FUNC_11(VAR_6->d_sb, VAR_22);
   if (FUNC_0(VAR_11)) {
    FUNC_26("new_inode badness\n");
    FUNC_21(VAR_10);
    FUNC_27(VAR_10);
    VAR_12 = FUNC_1(VAR_11);
    goto out;
   }
  }

  VAR_14 = FUNC_28(VAR_11, ((void*)0), &VAR_21->inode, ((void*)0), VAR_5,
     VAR_4->r_request_started, -1,
     &VAR_4->r_caps_reservation);
  if (VAR_14 < 0) {
   FUNC_33("fill_inode badness on %p\n", VAR_11);
   if (FUNC_24(VAR_10)) {


    FUNC_6(VAR_11);
   }
   FUNC_21(VAR_10);
   VAR_12 = VAR_14;
   goto next_item;
  }

  if (FUNC_24(VAR_10)) {
   if (FUNC_16(VAR_11)) {
    FUNC_26(" skip splicing dn %p to inode %p"
         " (security xattr deadlock)\n", VAR_10, VAR_11);
    FUNC_6(VAR_11);
    VAR_13++;
    goto next_item;
   }

   VAR_12 = FUNC_38(&VAR_10, VAR_11);
   if (VAR_12 < 0)
    goto next_item;
  }

  FUNC_7(VAR_10)->offset = VAR_21->offset;

  FUNC_41(FUNC_22(VAR_6), VAR_10,
        VAR_21->lease, VAR_4->r_session,
        VAR_4->r_request_started);

  if (VAR_12 == 0 && VAR_13 == 0 && VAR_20.index >= 0) {
   VAR_14 = FUNC_29(FUNC_22(VAR_6), VAR_10,
       &VAR_20, VAR_4);
   if (VAR_14 < 0)
    VAR_12 = VAR_14;
  }
next_item:
  FUNC_27(VAR_10);
 }
out:
 if (VAR_12 == 0 && VAR_13 == 0) {
  FUNC_35(VAR_2, &VAR_4->r_req_flags);
  VAR_4->r_readdir_cache_idx = VAR_20.index;
 }
 FUNC_15(&VAR_20);
 FUNC_26("readdir_prepopulate done\n");
 return VAR_12;
}
