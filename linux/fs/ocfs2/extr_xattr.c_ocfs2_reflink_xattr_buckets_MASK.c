
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned int u32 ;
struct ocfs2_reflink_xattr_tree_args {int old_bucket; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_sb; } ;
typedef int handle_t ;
struct TYPE_2__ {int xh_num_buckets; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,struct ocfs2_alloc_context*,int,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int *,struct ocfs2_extent_tree*,unsigned int,scalar_t__,unsigned int,int ,struct ocfs2_alloc_context*) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,unsigned int,unsigned int*,unsigned int,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,struct ocfs2_reflink_xattr_tree_args*) ;
 int FUNC_10 (int ) ;
 unsigned int FUNC_11 (int ) ;
 int FUNC_12 (unsigned long long,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_13(handle_t *VAR_0,
    struct inode *VAR_1,
    struct ocfs2_reflink_xattr_tree_args *VAR_2,
    struct ocfs2_extent_tree *VAR_3,
    struct ocfs2_alloc_context *VAR_4,
    struct ocfs2_alloc_context *VAR_5,
    u64 VAR_6, u32 VAR_7, u32 VAR_8)
{
 int VAR_9, VAR_10 = 0;
 u32 VAR_11, VAR_12, VAR_13 = 0;
 u64 VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17 =
  FUNC_11(FUNC_0(VAR_1->i_sb));

 VAR_9 = FUNC_8(VAR_2->old_bucket, VAR_6);
 if (VAR_9) {
  FUNC_4(VAR_9);
  goto out;
 }
 VAR_15 = FUNC_2(FUNC_1(VAR_2->old_bucket)->xh_num_buckets);
 FUNC_10(VAR_2->old_bucket);

 while (VAR_8 && VAR_15) {
  VAR_9 = FUNC_5(VAR_0, VAR_5,
        1, &VAR_11, &VAR_12);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }

  VAR_14 = FUNC_6(VAR_1->i_sb, VAR_11);
  VAR_16 = FUNC_3(VAR_15, VAR_17 * VAR_12);

  VAR_9 = FUNC_9(VAR_0, VAR_6,
       VAR_14, VAR_12,
       &VAR_13, VAR_16,
       VAR_4, VAR_5, VAR_2);
  if (VAR_9) {
   FUNC_4(VAR_9);
   goto out;
  }






  if (!VAR_10) {
   VAR_13 = VAR_7;
   VAR_10 = 1;
  }
  VAR_9 = FUNC_7(VAR_0, VAR_3, VAR_13, VAR_14,
       VAR_12, 0, VAR_4);
  if (VAR_9)
   FUNC_4(VAR_9);

  FUNC_12((unsigned long long)VAR_14,
        VAR_12, VAR_13);

  VAR_8 -= VAR_12;
  VAR_6 += FUNC_6(VAR_1->i_sb, VAR_12);
  VAR_15 -= VAR_16;
 }
out:
 return VAR_9;
}
