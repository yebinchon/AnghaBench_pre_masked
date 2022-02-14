
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_path {int dummy; } ;
struct TYPE_3__ {int et_root_bh; int et_ci; } ;
struct ocfs2_move_extents_context {int dealloc; int meta_ac; int new_phys_cpos; TYPE_1__ et; struct inode* inode; } ;
struct ocfs2_extent_rec {int e_flags; int e_blkno; int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
struct inode {int i_sb; } ;
typedef int replace_rec ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (struct inode*,int *,int ,int ,int ,int *,int) ;
 int FUNC_11 (int *,struct inode*,int ,int ,int ,int ) ;
 int FUNC_12 (int ,char*,unsigned long long,int ) ;
 int FUNC_13 (int ,struct ocfs2_path*,int ) ;
 int FUNC_14 (struct ocfs2_path*) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 struct ocfs2_path* FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (struct ocfs2_extent_list*,int ) ;
 int FUNC_20 (int *,TYPE_1__*,struct ocfs2_path*,int,struct ocfs2_extent_rec*,int ,int *) ;
 int FUNC_21 (struct ocfs2_super*,int *,scalar_t__,int ) ;
 int FUNC_22 (int *,struct inode*,int ) ;
 struct ocfs2_extent_list* FUNC_23 (struct ocfs2_path*) ;

__attribute__((used)) static int FUNC_24(handle_t *VAR_3,
          struct ocfs2_move_extents_context *VAR_4,
          u32 VAR_5, u32 VAR_6, u32 VAR_7, u32 VAR_8,
          int VAR_9)
{
 int VAR_10 = 0, VAR_11;
 struct inode *VAR_12 = VAR_4->inode;
 struct ocfs2_super *VAR_13 = FUNC_2(VAR_12->i_sb);
 struct ocfs2_extent_rec *VAR_14, VAR_15;
 struct ocfs2_path *VAR_16 = ((void*)0);
 struct ocfs2_extent_list *VAR_17;
 u64 VAR_18 = FUNC_17(VAR_4->et.et_ci);
 u64 VAR_19 = FUNC_9(VAR_12->i_sb, VAR_7);

 VAR_10 = FUNC_11(VAR_3, VAR_12, VAR_5,
            VAR_7, VAR_8, VAR_6);
 if (VAR_10) {
  FUNC_7(VAR_10);
  goto out;
 }

 FUNC_6(&VAR_15, 0, sizeof(VAR_15));
 VAR_15.e_cpos = FUNC_4(VAR_5);
 VAR_15.e_leaf_clusters = FUNC_3(VAR_6);
 VAR_15.e_blkno = FUNC_5(FUNC_9(VAR_12->i_sb,
           VAR_8));

 VAR_16 = FUNC_18(&VAR_4->et);
 if (!VAR_16) {
  VAR_10 = -VAR_0;
  FUNC_7(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_13(FUNC_1(VAR_12), VAR_16, VAR_5);
 if (VAR_10) {
  FUNC_7(VAR_10);
  goto out;
 }

 VAR_17 = FUNC_23(VAR_16);

 VAR_11 = FUNC_19(VAR_17, VAR_5);
 if (VAR_11 == -1) {
  VAR_10 = FUNC_12(VAR_12->i_sb,
      "Inode %llu has an extent at cpos %u which can no longer be found\n",
      (unsigned long long)VAR_18, VAR_5);
  goto out;
 }

 VAR_14 = &VAR_17->l_recs[VAR_11];

 FUNC_0(VAR_9 != VAR_14->e_flags);




 VAR_15.e_flags = VAR_9 & ~VAR_1;

 VAR_10 = FUNC_15(VAR_3, FUNC_1(VAR_12),
          VAR_4->et.et_root_bh,
          VAR_2);
 if (VAR_10) {
  FUNC_7(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_20(VAR_3, &VAR_4->et, VAR_16, VAR_11,
     &VAR_15, VAR_4->meta_ac,
     &VAR_4->dealloc);
 if (VAR_10) {
  FUNC_7(VAR_10);
  goto out;
 }

 FUNC_16(VAR_3, VAR_4->et.et_root_bh);

 VAR_4->new_phys_cpos = VAR_8;




 if (VAR_19) {
  if (VAR_9 & VAR_1)
   VAR_10 = FUNC_10(VAR_12, VAR_3,
     FUNC_8(VAR_13->sb,
         VAR_19),
     VAR_6, VAR_4->meta_ac,
     &VAR_4->dealloc, 1);
  else
   VAR_10 = FUNC_21(VAR_13, VAR_3,
       VAR_19, VAR_6);
 }

 FUNC_22(VAR_3, VAR_12, 0);
out:
 FUNC_14(VAR_16);
 return VAR_10;
}
