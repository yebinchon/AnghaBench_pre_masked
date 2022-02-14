
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int s_blocksize; } ;
struct ocfs2_xattr_value_buf {int vb_access; } ;
struct ocfs2_reflink_xattr_tree_args {TYPE_3__* new_bucket; TYPE_3__* old_bucket; TYPE_6__* reflink; } ;
struct ocfs2_alloc_context {int dummy; } ;
typedef int handle_t ;
struct TYPE_18__ {int xh_num_buckets; TYPE_2__* xh_entries; } ;
struct TYPE_17__ {TYPE_1__* old_inode; } ;
struct TYPE_16__ {int bu_blocks; int * bu_bhs; } ;
struct TYPE_15__ {int xe_name_hash; } ;
struct TYPE_14__ {struct super_block* i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int) ;
 TYPE_7__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_3__*,int,int) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int *,TYPE_6__*,int ,TYPE_7__*,int ,TYPE_7__*,struct ocfs2_xattr_value_buf*,struct ocfs2_alloc_context*,int ,struct ocfs2_reflink_xattr_tree_args*) ;
 int FUNC_9 (int *,TYPE_3__*,int ) ;
 int FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_12(handle_t *VAR_4,
    u64 VAR_5, u64 VAR_6, u32 VAR_7,
    u32 *VAR_8, int VAR_9,
    struct ocfs2_alloc_context *VAR_10,
    struct ocfs2_alloc_context *VAR_11,
    struct ocfs2_reflink_xattr_tree_args *VAR_12)
{
 int VAR_13, VAR_14, VAR_15 = 0;
 struct super_block *VAR_16 = VAR_12->reflink->old_inode->i_sb;
 int VAR_17 = VAR_12->old_bucket->bu_blocks;
 struct ocfs2_xattr_value_buf VAR_18 = {
  .vb_access = VAR_3,
 };

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++, VAR_5 += VAR_17, VAR_6 += VAR_17) {
  VAR_15 = FUNC_7(VAR_12->old_bucket, VAR_5);
  if (VAR_15) {
   FUNC_5(VAR_15);
   break;
  }

  VAR_15 = FUNC_6(VAR_12->new_bucket, VAR_6, 1);
  if (VAR_15) {
   FUNC_5(VAR_15);
   break;
  }

  VAR_15 = FUNC_9(VAR_4,
      VAR_12->new_bucket,
      VAR_0);
  if (VAR_15) {
   FUNC_5(VAR_15);
   break;
  }

  for (VAR_14 = 0; VAR_14 < VAR_17; VAR_14++)
   FUNC_4(FUNC_0(VAR_12->new_bucket, VAR_14),
          FUNC_0(VAR_12->old_bucket, VAR_14),
          VAR_16->s_blocksize);






  if (VAR_13 == 0) {
   *VAR_8 = FUNC_3(FUNC_1(VAR_12->new_bucket)->
         xh_entries[0].xe_name_hash);
   FUNC_1(VAR_12->new_bucket)->xh_num_buckets =
    FUNC_2(VAR_9);
  }

  FUNC_10(VAR_4, VAR_12->new_bucket);

  VAR_15 = FUNC_8(VAR_4, VAR_12->reflink,
     VAR_12->old_bucket->bu_bhs[0],
     FUNC_1(VAR_12->old_bucket),
     VAR_12->new_bucket->bu_bhs[0],
     FUNC_1(VAR_12->new_bucket),
     &VAR_18, VAR_10,
     VAR_2,
     VAR_12);
  if (VAR_15) {
   FUNC_5(VAR_15);
   break;
  }






  VAR_15 = FUNC_9(VAR_4,
      VAR_12->new_bucket,
      VAR_1);
  if (VAR_15) {
   FUNC_5(VAR_15);
   break;
  }

  FUNC_10(VAR_4, VAR_12->new_bucket);

  FUNC_11(VAR_12->old_bucket);
  FUNC_11(VAR_12->new_bucket);
 }

 FUNC_11(VAR_12->old_bucket);
 FUNC_11(VAR_12->new_bucket);
 return VAR_15;
}
