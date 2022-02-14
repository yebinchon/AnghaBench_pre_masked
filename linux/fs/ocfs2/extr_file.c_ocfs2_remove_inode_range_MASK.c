
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {int s_clustersize_bits; int sb; } ;
struct ocfs2_path {scalar_t__ p_tree_depth; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_extent_rec {int e_flags; } ;
struct ocfs2_extent_list {struct ocfs2_extent_rec* l_recs; } ;
struct ocfs2_dinode {int i_refcount_loc; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {int i_sb; struct address_space* i_mapping; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct inode*,struct ocfs2_extent_list*,struct ocfs2_extent_rec*,int,int*,int*,int*,scalar_t__*,int*) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct inode*,struct buffer_head*,scalar_t__) ;
 int FUNC_9 (int ,struct ocfs2_path*,int*) ;
 int FUNC_10 (int ,struct ocfs2_path*,int) ;
 int FUNC_11 (struct ocfs2_extent_list*,int) ;
 int FUNC_12 (struct ocfs2_path*) ;
 int FUNC_13 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_14 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 struct ocfs2_path* FUNC_16 (struct ocfs2_extent_tree*) ;
 int FUNC_17 (struct ocfs2_path*,int) ;
 int FUNC_18 (struct inode*,struct ocfs2_extent_tree*,int,int,int,int,struct ocfs2_cached_dealloc_ctxt*,scalar_t__,int) ;
 int FUNC_19 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_20 (struct ocfs2_super*,int) ;
 int FUNC_21 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_22 (struct inode*,struct buffer_head*,scalar_t__,int ,int ) ;
 int FUNC_23 (struct inode*,scalar_t__,scalar_t__) ;
 struct ocfs2_extent_list* FUNC_24 (struct ocfs2_path*) ;
 int FUNC_25 (unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_26 (struct address_space*,int ) ;
 int FUNC_27 (struct address_space*,int ,int ,int ) ;

int FUNC_28(struct inode *VAR_2,
        struct buffer_head *VAR_3, u64 VAR_4,
        u64 VAR_5)
{
 int VAR_6 = 0, VAR_7 = 0, VAR_8 = 0, VAR_9;
 u32 VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15;
 struct ocfs2_super *VAR_16 = FUNC_2(VAR_2->i_sb);
 struct ocfs2_cached_dealloc_ctxt VAR_17;
 struct address_space *VAR_18 = VAR_2->i_mapping;
 struct ocfs2_extent_tree VAR_19;
 struct ocfs2_path *VAR_20 = ((void*)0);
 struct ocfs2_extent_list *VAR_21 = ((void*)0);
 struct ocfs2_extent_rec *VAR_22 = ((void*)0);
 struct ocfs2_dinode *VAR_23 = (struct ocfs2_dinode *)VAR_3->b_data;
 u64 VAR_24, VAR_25 = FUNC_3(VAR_23->i_refcount_loc);

 FUNC_14(&VAR_19, FUNC_0(VAR_2), VAR_3);
 FUNC_13(&VAR_17);

 FUNC_25(
   (unsigned long long)FUNC_1(VAR_2)->ip_blkno,
   (unsigned long long)VAR_4,
   (unsigned long long)VAR_5);

 if (VAR_5 == 0)
  return 0;

 if (FUNC_1(VAR_2)->ip_dyn_features & VAR_1) {
  VAR_6 = FUNC_22(VAR_2, VAR_3, VAR_4,
         VAR_4 + VAR_5, 0);
  if (VAR_6) {
   FUNC_4(VAR_6);
   goto out;
  }






  FUNC_27(VAR_18, 0, 0, 0);
  FUNC_26(VAR_18, 0);
  goto out;
 }







 if (FUNC_15(VAR_2)) {
  VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4);
  if (VAR_6) {
   FUNC_4(VAR_6);
   goto out;
  }

  VAR_6 = FUNC_8(VAR_2, VAR_3, VAR_4 + VAR_5);
  if (VAR_6) {
   FUNC_4(VAR_6);
   goto out;
  }
 }

 VAR_10 = FUNC_7(VAR_16->sb, VAR_4);
 VAR_12 = (VAR_4 + VAR_5) >> VAR_16->s_clustersize_bits;
 VAR_15 = VAR_12;

 VAR_6 = FUNC_23(VAR_2, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_4(VAR_6);
  goto out;
 }

 VAR_20 = FUNC_16(&VAR_19);
 if (!VAR_20) {
  VAR_6 = -VAR_0;
  FUNC_4(VAR_6);
  goto out;
 }

 while (VAR_12 > VAR_10) {

  VAR_6 = FUNC_10(FUNC_0(VAR_2), VAR_20,
          VAR_15);
  if (VAR_6) {
   FUNC_4(VAR_6);
   goto out;
  }

  VAR_21 = FUNC_24(VAR_20);

  VAR_9 = FUNC_11(VAR_21, VAR_12);



  if (VAR_9 < 0) {
   if (VAR_20->p_tree_depth == 0)
    break;

   VAR_6 = FUNC_9(VAR_2->i_sb,
           VAR_20,
           &VAR_15);
   if (VAR_6) {
    FUNC_4(VAR_6);
    goto out;
   }





   if (VAR_15 == 0)
    break;





   VAR_12 = VAR_15 + 1;

   FUNC_17(VAR_20, 1);

   continue;

  } else
   VAR_22 = &VAR_21->l_recs[VAR_9];

  FUNC_6(VAR_2, VAR_21, VAR_22, VAR_10, &VAR_13,
         &VAR_11, &VAR_12, &VAR_24, &VAR_8);
  if (VAR_8)
   break;

  VAR_7 = VAR_22->e_flags;
  VAR_14 = FUNC_5(VAR_2->i_sb, VAR_24);

  VAR_6 = FUNC_18(VAR_2, &VAR_19, VAR_13,
            VAR_14, VAR_11, VAR_7,
            &VAR_17, VAR_25, 0);
  if (VAR_6 < 0) {
   FUNC_4(VAR_6);
   goto out;
  }

  VAR_15 = VAR_12;

  FUNC_17(VAR_20, 1);
 }

 FUNC_21(VAR_2, VAR_4, VAR_5);

out:
 FUNC_12(VAR_20);
 FUNC_20(VAR_16, 1);
 FUNC_19(VAR_16, &VAR_17);

 return VAR_6;
}
