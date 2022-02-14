
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct ocfs2_extent_rec {unsigned int e_flags; int e_blkno; int e_leaf_clusters; int e_cpos; } ;
struct ocfs2_extent_list {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int replace_rec ;
typedef int handle_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ocfs2_extent_rec*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct super_block*,int ) ;
 int FUNC_6 (struct super_block*,char*,unsigned long long,int ) ;
 int FUNC_7 (int ,struct ocfs2_path*,int ) ;
 int FUNC_8 (struct ocfs2_path*) ;
 struct super_block* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 struct ocfs2_path* FUNC_11 (struct ocfs2_extent_tree*) ;
 int FUNC_12 (struct ocfs2_extent_list*,int ) ;
 int FUNC_13 (int *,struct ocfs2_extent_tree*,struct ocfs2_path*,int,struct ocfs2_extent_rec*,struct ocfs2_alloc_context*,struct ocfs2_cached_dealloc_ctxt*) ;
 struct ocfs2_extent_list* FUNC_14 (struct ocfs2_path*) ;
 int FUNC_15 (unsigned long long,int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_16(handle_t *VAR_2,
        struct ocfs2_extent_tree *VAR_3,
        u32 VAR_4, u32 VAR_5, u32 VAR_6,
        unsigned int VAR_7,
        struct ocfs2_alloc_context *VAR_8,
        struct ocfs2_cached_dealloc_ctxt *VAR_9)
{
 int VAR_10, VAR_11;
 struct ocfs2_extent_rec VAR_12;
 struct ocfs2_path *VAR_13 = ((void*)0);
 struct ocfs2_extent_list *VAR_14;
 struct super_block *VAR_15 = FUNC_9(VAR_3->et_ci);
 u64 VAR_16 = FUNC_10(VAR_3->et_ci);

 FUNC_15((unsigned long long)VAR_16,
           VAR_4, VAR_6, VAR_5, VAR_7);

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.e_cpos = FUNC_1(VAR_4);
 VAR_12.e_leaf_clusters = FUNC_0(VAR_6);
 VAR_12.e_blkno = FUNC_2(FUNC_5(VAR_15,
           VAR_5));
 VAR_12.e_flags = VAR_7;
 VAR_12.e_flags &= ~VAR_1;

 VAR_13 = FUNC_11(VAR_3);
 if (!VAR_13) {
  VAR_10 = -VAR_0;
  FUNC_4(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_7(VAR_3->et_ci, VAR_13, VAR_4);
 if (VAR_10) {
  FUNC_4(VAR_10);
  goto out;
 }

 VAR_14 = FUNC_14(VAR_13);

 VAR_11 = FUNC_12(VAR_14, VAR_4);
 if (VAR_11 == -1) {
  VAR_10 = FUNC_6(VAR_15,
      "Inode %llu has an extent at cpos %u which can no longer be found\n",
      (unsigned long long)VAR_16, VAR_4);
  goto out;
 }

 VAR_10 = FUNC_13(VAR_2, VAR_3, VAR_13, VAR_11,
     &VAR_12, VAR_8, VAR_9);
 if (VAR_10)
  FUNC_4(VAR_10);

out:
 FUNC_8(VAR_13);
 return VAR_10;
}
