
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_mode; int i_sb; int i_ino; } ;
struct TYPE_10__ {int dentry; } ;
struct file {TYPE_3__ f_path; struct ceph_dir_file_info* private_data; } ;
struct dir_context {int pos; } ;
struct dentry {int dummy; } ;
struct ceph_vino {void* snap; void* ino; } ;
struct ceph_mds_reply_info_parsed {int dir_nr; struct ceph_mds_reply_dir_entry* dir_entries; scalar_t__ dir_end; scalar_t__ hash_order; TYPE_4__* dir_dir; scalar_t__ dir_complete; } ;
struct TYPE_8__ {int flags; void* frag; void* offset_hash; } ;
struct TYPE_9__ {TYPE_1__ readdir; } ;
struct ceph_mds_request {unsigned int r_direct_hash; scalar_t__ r_dir_release_cnt; scalar_t__ r_dir_ordered_cnt; int r_readdir_cache_idx; int r_readdir_offset; struct ceph_mds_reply_info_parsed r_reply_info; int r_req_flags; int r_dentry; struct inode* r_inode; TYPE_2__ r_args; int r_path2; int r_inode_drop; int r_direct_mode; } ;
struct TYPE_13__ {TYPE_5__* in; } ;
struct ceph_mds_reply_dir_entry {int offset; char* name; int name_len; TYPE_6__ inode; } ;
struct ceph_mds_client {int dummy; } ;
struct ceph_inode_info {int i_ceph_lock; int i_ordered_count; int i_release_count; int i_shared_gen; } ;
struct ceph_fs_client {struct ceph_mds_client* mdsc; } ;
struct TYPE_14__ {int flags; } ;
struct ceph_dir_file_info {scalar_t__ dir_release_count; scalar_t__ dir_ordered_count; int readdir_cache_idx; int next_offset; unsigned int frag; TYPE_7__ file_info; int * last_name; struct ceph_mds_request* last_readdir; } ;
typedef int loff_t ;
typedef int ino_t ;
struct TYPE_12__ {int snapid; int ino; int mode; } ;
struct TYPE_11__ {int frag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (struct ceph_mds_request*) ;
 int VAR_13 ;
 int FUNC_2 (struct ceph_mds_request*) ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct ceph_inode_info*,int ,int) ;
 scalar_t__ FUNC_4 (struct ceph_inode_info*) ;
 int FUNC_5 (struct ceph_inode_info*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct file*,struct dir_context*,int) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ceph_mds_request*,struct inode*) ;
 unsigned int FUNC_11 (struct ceph_inode_info*,unsigned int,int *,int *) ;
 scalar_t__ FUNC_12 (unsigned int) ;
 int FUNC_13 (unsigned int) ;
 unsigned int FUNC_14 (unsigned int) ;
 unsigned int FUNC_15 (unsigned int) ;
 struct ceph_inode_info* FUNC_16 (struct inode*) ;
 struct ceph_fs_client* FUNC_17 (struct inode*) ;
 void* FUNC_18 (unsigned int,int,int) ;
 struct ceph_mds_request* FUNC_19 (struct ceph_mds_client*,int,int ) ;
 int FUNC_20 (struct ceph_mds_client*,int *,struct ceph_mds_request*) ;
 int FUNC_21 (struct ceph_mds_request*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 scalar_t__ FUNC_23 (struct ceph_fs_client*,int ) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (struct ceph_vino) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (unsigned int) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (struct dir_context*,char*,int,int ,int) ;
 int FUNC_31 (char*,...) ;
 struct inode* FUNC_32 (struct file*) ;
 unsigned int FUNC_33 (int) ;
 unsigned int FUNC_34 (int) ;
 int FUNC_35 (int) ;
 int FUNC_36 (struct inode*,int) ;
 int FUNC_37 (struct inode*) ;
 scalar_t__ FUNC_38 (int) ;
 int FUNC_39 (int *) ;
 int FUNC_40 (int *,int ) ;
 int FUNC_41 (int ) ;
 void* FUNC_42 (int ) ;
 scalar_t__ FUNC_43 (struct ceph_dir_file_info*,int) ;
 int FUNC_44 (struct ceph_dir_file_info*,char*,int,unsigned int) ;
 int FUNC_45 (int ) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (int *) ;
 scalar_t__ FUNC_48 (int ,int *) ;

__attribute__((used)) static int FUNC_49(struct file *VAR_15, struct dir_context *VAR_16)
{
 struct ceph_dir_file_info *VAR_17 = VAR_15->private_data;
 struct inode *VAR_18 = FUNC_32(VAR_15);
 struct ceph_inode_info *VAR_19 = FUNC_16(VAR_18);
 struct ceph_fs_client *VAR_20 = FUNC_17(VAR_18);
 struct ceph_mds_client *VAR_21 = VAR_20->mdsc;
 int VAR_22;
 int VAR_23;
 unsigned VAR_24 = -1;
 struct ceph_mds_reply_info_parsed *VAR_25;

 FUNC_31("readdir %p file %p pos %llx\n", VAR_18, VAR_15, VAR_16->pos);
 if (VAR_17->file_info.flags & VAR_2)
  return 0;


 if (VAR_16->pos == 0) {
  FUNC_31("readdir off 0 -> '.'\n");
  if (!FUNC_30(VAR_16, ".", 1,
       FUNC_24(VAR_18->i_sb, VAR_18->i_ino),
       VAR_18->i_mode >> 12))
   return 0;
  VAR_16->pos = 1;
 }
 if (VAR_16->pos == 1) {
  ino_t VAR_26 = FUNC_45(VAR_15->f_path.dentry);
  FUNC_31("readdir off 1 -> '..'\n");
  if (!FUNC_30(VAR_16, "..", 2,
       FUNC_24(VAR_18->i_sb, VAR_26),
       VAR_18->i_mode >> 12))
   return 0;
  VAR_16->pos = 2;
 }


 FUNC_46(&VAR_19->i_ceph_lock);
 if (FUNC_23(VAR_20, VAR_9) &&
     !FUNC_23(VAR_20, VAR_13) &&
     FUNC_22(VAR_18) != VAR_8 &&
     FUNC_4(VAR_19) &&
     FUNC_3(VAR_19, VAR_1, 1)) {
  int VAR_27 = FUNC_9(&VAR_19->i_shared_gen);
  FUNC_47(&VAR_19->i_ceph_lock);
  VAR_23 = FUNC_6(VAR_15, VAR_16, VAR_27);
  if (VAR_23 != -VAR_10)
   return VAR_23;
 } else {
  FUNC_47(&VAR_19->i_ceph_lock);
 }


more:

 if (FUNC_43(VAR_17, VAR_16->pos)) {
  struct ceph_mds_request *VAR_28;
  int VAR_29 = FUNC_22(VAR_18) == VAR_8 ?
   VAR_3 : VAR_4;


  if (VAR_17->last_readdir) {
   FUNC_21(VAR_17->last_readdir);
   VAR_17->last_readdir = ((void*)0);
  }

  if (FUNC_38(VAR_16->pos)) {


   if (VAR_24 == (unsigned)-1)
    VAR_24 = FUNC_11(VAR_19, FUNC_34(VAR_16->pos),
       ((void*)0), ((void*)0));
  } else {
   VAR_24 = FUNC_33(VAR_16->pos);
  }

  FUNC_31("readdir fetching %llx.%llx frag %x offset '%s'\n",
       FUNC_26(VAR_18), VAR_24, VAR_17->last_name);
  VAR_28 = FUNC_19(VAR_21, VAR_29, VAR_14);
  if (FUNC_1(VAR_28))
   return FUNC_2(VAR_28);
  VAR_23 = FUNC_10(VAR_28, VAR_18);
  if (VAR_23) {
   FUNC_21(VAR_28);
   return VAR_23;
  }

  VAR_28->r_direct_mode = VAR_14;
  if (VAR_29 == VAR_4) {
   VAR_28->r_direct_hash = FUNC_15(VAR_24);
   FUNC_7(VAR_6, &VAR_28->r_req_flags);
   VAR_28->r_inode_drop = VAR_0;
  }
  if (VAR_17->last_name) {
   VAR_28->r_path2 = FUNC_40(VAR_17->last_name, VAR_12);
   if (!VAR_28->r_path2) {
    FUNC_21(VAR_28);
    return -VAR_11;
   }
  } else if (FUNC_38(VAR_16->pos)) {
   VAR_28->r_args.readdir.offset_hash =
    FUNC_28(FUNC_34(VAR_16->pos));
  }

  VAR_28->r_dir_release_cnt = VAR_17->dir_release_count;
  VAR_28->r_dir_ordered_cnt = VAR_17->dir_ordered_count;
  VAR_28->r_readdir_cache_idx = VAR_17->readdir_cache_idx;
  VAR_28->r_readdir_offset = VAR_17->next_offset;
  VAR_28->r_args.readdir.frag = FUNC_28(VAR_24);
  VAR_28->r_args.readdir.flags =
    FUNC_27(VAR_7);

  VAR_28->r_inode = VAR_18;
  FUNC_37(VAR_18);
  VAR_28->r_dentry = FUNC_29(VAR_15->f_path.dentry);
  VAR_23 = FUNC_20(VAR_21, ((void*)0), VAR_28);
  if (VAR_23 < 0) {
   FUNC_21(VAR_28);
   return VAR_23;
  }
  FUNC_31("readdir got and parsed readdir result=%d on "
       "frag %x, end=%d, complete=%d, hash_order=%d\n",
       VAR_23, VAR_24,
       (int)VAR_28->r_reply_info.dir_end,
       (int)VAR_28->r_reply_info.dir_complete,
       (int)VAR_28->r_reply_info.hash_order);

  VAR_25 = &VAR_28->r_reply_info;
  if (FUNC_41(VAR_25->dir_dir->frag) != VAR_24) {
   VAR_24 = FUNC_41(VAR_25->dir_dir->frag);
   if (!VAR_25->hash_order) {
    VAR_17->next_offset = VAR_28->r_readdir_offset;

    VAR_16->pos = FUNC_18(VAR_24,
         VAR_17->next_offset,
         0);
   }
  }

  VAR_17->frag = VAR_24;
  VAR_17->last_readdir = VAR_28;

  if (FUNC_48(VAR_5, &VAR_28->r_req_flags)) {
   VAR_17->readdir_cache_idx = VAR_28->r_readdir_cache_idx;
   if (VAR_17->readdir_cache_idx < 0) {

    VAR_17->dir_ordered_count = 0;
   } else if (FUNC_12(VAR_24) &&
       VAR_17->next_offset == 2) {


    VAR_17->dir_release_count = VAR_28->r_dir_release_cnt;
    VAR_17->dir_ordered_count = VAR_28->r_dir_ordered_cnt;
   }
  } else {
   FUNC_31("readdir !did_prepopulate\n");

   VAR_17->readdir_cache_idx = -1;

   VAR_17->dir_release_count = 0;
  }


  if (VAR_25->dir_nr > 0) {
   struct ceph_mds_reply_dir_entry *VAR_30 =
     VAR_25->dir_entries + (VAR_25->dir_nr-1);
   unsigned VAR_31 = VAR_28->r_reply_info.dir_end ?
     2 : (FUNC_35(VAR_30->offset) + 1);
   VAR_23 = FUNC_44(VAR_17, VAR_30->name, VAR_30->name_len,
            VAR_31);
   if (VAR_23)
    return VAR_23;
  } else if (VAR_28->r_reply_info.dir_end) {
   VAR_17->next_offset = 2;

  }
 }

 VAR_25 = &VAR_17->last_readdir->r_reply_info;
 FUNC_31("readdir frag %x num %d pos %llx chunk first %llx\n",
      VAR_17->frag, VAR_25->dir_nr, VAR_16->pos,
      VAR_25->dir_nr ? VAR_25->dir_entries[0].offset : 0LL);

 VAR_22 = 0;

 if (VAR_25->dir_nr > 0) {
  int VAR_32, VAR_33 = VAR_25->dir_nr;
  while (VAR_33 > 0) {
   VAR_32 = VAR_33 >> 1;
   if (VAR_25->dir_entries[VAR_22 + VAR_32].offset < VAR_16->pos) {
    VAR_22 += VAR_32 + 1;
    VAR_33 -= VAR_32 + 1;
   } else {
    VAR_33 = VAR_32;
   }
  }
 }
 for (; VAR_22 < VAR_25->dir_nr; VAR_22++) {
  struct ceph_mds_reply_dir_entry *VAR_34 = VAR_25->dir_entries + VAR_22;
  struct ceph_vino VAR_35;
  ino_t VAR_36;
  u32 VAR_37;

  FUNC_0(VAR_34->offset < VAR_16->pos);

  VAR_16->pos = VAR_34->offset;
  FUNC_31("readdir (%d/%d) -> %llx '%.*s' %p\n",
       VAR_22, VAR_25->dir_nr, VAR_16->pos,
       VAR_34->name_len, VAR_34->name, &VAR_34->inode.in);

  FUNC_0(!VAR_34->inode.in);
  VAR_37 = FUNC_41(VAR_34->inode.in->mode) >> 12;
  VAR_35.ino = FUNC_42(VAR_34->inode.in->ino);
  VAR_35.snap = FUNC_42(VAR_34->inode.in->snapid);
  VAR_36 = FUNC_25(VAR_35);

  if (!FUNC_30(VAR_16, VAR_34->name, VAR_34->name_len,
         FUNC_24(VAR_18->i_sb, VAR_36), VAR_37)) {
   FUNC_31("filldir stopping us...\n");
   return 0;
  }
  VAR_16->pos++;
 }

 FUNC_21(VAR_17->last_readdir);
 VAR_17->last_readdir = ((void*)0);

 if (VAR_17->next_offset > 2) {
  VAR_24 = VAR_17->frag;
  goto more;
 }


 if (!FUNC_13(VAR_17->frag)) {
  VAR_24 = FUNC_14(VAR_17->frag);
  if (FUNC_38(VAR_16->pos)) {
   loff_t VAR_38 = FUNC_18(FUNC_15(VAR_24),
       VAR_17->next_offset, 1);
   if (VAR_38 > VAR_16->pos)
    VAR_16->pos = VAR_38;

  } else {
   VAR_16->pos = FUNC_18(VAR_24, VAR_17->next_offset,
       0);
   FUNC_39(VAR_17->last_name);
   VAR_17->last_name = ((void*)0);
  }
  FUNC_31("readdir next frag is %x\n", VAR_24);
  goto more;
 }
 VAR_17->file_info.flags |= VAR_2;






 if (FUNC_8(&VAR_19->i_release_count) ==
     VAR_17->dir_release_count) {
  FUNC_46(&VAR_19->i_ceph_lock);
  if (VAR_17->dir_ordered_count ==
    FUNC_8(&VAR_19->i_ordered_count)) {
   FUNC_31(" marking %p complete and ordered\n", VAR_18);


   FUNC_0(VAR_17->readdir_cache_idx < 0);
   FUNC_36(VAR_18, VAR_17->readdir_cache_idx *
         sizeof(struct dentry*));
  } else {
   FUNC_31(" marking %p complete\n", VAR_18);
  }
  FUNC_5(VAR_19, VAR_17->dir_release_count,
     VAR_17->dir_ordered_count);
  FUNC_47(&VAR_19->i_ceph_lock);
 }

 FUNC_31("readdir %p file %p done.\n", VAR_18, VAR_15);
 return 0;
}
