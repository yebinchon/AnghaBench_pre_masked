
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {void* l_next_free_rec; void* l_count; scalar_t__ l_tree_depth; } ;
struct ocfs2_xattr_tree_root {TYPE_2__ xt_list; scalar_t__ xt_last_eb_blk; void* xt_clusters; } ;
struct ocfs2_xattr_set_ctxt {int handle; TYPE_5__* meta_ac; } ;
struct TYPE_9__ {struct ocfs2_xattr_tree_root xb_root; } ;
struct ocfs2_xattr_block {void* xb_flags; TYPE_1__ xb_attrs; void* xb_blkno; void* xb_fs_generation; void* xb_suballoc_bit; void* xb_suballoc_loc; void* xb_suballoc_slot; } ;
struct ocfs2_dinode {void* i_dyn_features; void* i_xattr_loc; } ;
struct inode {TYPE_3__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_14__ {int ip_dyn_features; int ip_lock; } ;
struct TYPE_13__ {int fs_generation; } ;
struct TYPE_12__ {int ac_alloc_slot; } ;
struct TYPE_11__ {int s_blocksize; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_8__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 TYPE_6__* FUNC_2 (TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct buffer_head*) ;
 void* FUNC_4 (int) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (struct ocfs2_xattr_block*,int ,int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,TYPE_5__*,int,int *,int*,int *,int *) ;
 int FUNC_10 (int ,int ,struct buffer_head*,int ) ;
 int FUNC_11 (int ,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int ,struct buffer_head*) ;
 int FUNC_13 (int ,struct buffer_head*) ;
 int FUNC_14 (TYPE_3__*) ;
 struct buffer_head* FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (void*,int ) ;

__attribute__((used)) static int FUNC_19(struct inode *VAR_5,
        struct buffer_head *VAR_6,
        struct ocfs2_xattr_set_ctxt *VAR_7,
        int VAR_8,
        struct buffer_head **VAR_9)
{
 int VAR_10;
 u16 VAR_11;
 u32 VAR_12;
 u64 VAR_13, VAR_14;
 struct ocfs2_dinode *VAR_15 = (struct ocfs2_dinode *)VAR_6->b_data;
 struct buffer_head *VAR_16 = ((void*)0);
 struct ocfs2_xattr_block *VAR_17;

 VAR_10 = FUNC_10(VAR_7->handle, FUNC_0(VAR_5),
          VAR_6, VAR_2);
 if (VAR_10 < 0) {
  FUNC_8(VAR_10);
  goto end;
 }

 VAR_10 = FUNC_9(VAR_7->handle, VAR_7->meta_ac, 1,
       &VAR_13, &VAR_11,
       &VAR_12, &VAR_14);
 if (VAR_10 < 0) {
  FUNC_8(VAR_10);
  goto end;
 }

 VAR_16 = FUNC_15(VAR_5->i_sb, VAR_14);
 if (!VAR_16) {
  VAR_10 = -VAR_0;
  FUNC_8(VAR_10);
  goto end;
 }

 FUNC_13(FUNC_0(VAR_5), VAR_16);

 VAR_10 = FUNC_11(VAR_7->handle, FUNC_0(VAR_5),
          VAR_16,
          VAR_2);
 if (VAR_10 < 0) {
  FUNC_8(VAR_10);
  goto end;
 }


 VAR_17 = (struct ocfs2_xattr_block *)VAR_16->b_data;
 FUNC_7(VAR_17, 0, VAR_5->i_sb->s_blocksize);
 FUNC_18((void *)VAR_17, VAR_3);
 VAR_17->xb_suballoc_slot = FUNC_4(VAR_7->meta_ac->ac_alloc_slot);
 VAR_17->xb_suballoc_loc = FUNC_6(VAR_13);
 VAR_17->xb_suballoc_bit = FUNC_4(VAR_11);
 VAR_17->xb_fs_generation =
  FUNC_5(FUNC_2(VAR_5->i_sb)->fs_generation);
 VAR_17->xb_blkno = FUNC_6(VAR_14);
 if (VAR_8) {
  struct ocfs2_xattr_tree_root *VAR_18 = &VAR_17->xb_attrs.xb_root;
  VAR_18->xt_clusters = FUNC_5(1);
  VAR_18->xt_last_eb_blk = 0;
  VAR_18->xt_list.l_tree_depth = 0;
  VAR_18->xt_list.l_count = FUNC_4(
     FUNC_14(VAR_5->i_sb));
  VAR_18->xt_list.l_next_free_rec = FUNC_4(1);
  VAR_17->xb_flags = FUNC_4(VAR_4);
 }
 FUNC_12(VAR_7->handle, VAR_16);


 VAR_15->i_xattr_loc = FUNC_6(VAR_14);

 FUNC_16(&FUNC_1(VAR_5)->ip_lock);
 FUNC_1(VAR_5)->ip_dyn_features |= VAR_1;
 VAR_15->i_dyn_features = FUNC_4(FUNC_1(VAR_5)->ip_dyn_features);
 FUNC_17(&FUNC_1(VAR_5)->ip_lock);

 FUNC_12(VAR_7->handle, VAR_6);

 *VAR_9 = VAR_16;
 VAR_16 = ((void*)0);

end:
 FUNC_3(VAR_16);
 return VAR_10;
}
