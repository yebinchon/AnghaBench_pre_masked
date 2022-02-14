
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct page {int dummy; } ;
struct merkle_tree_params {scalar_t__ block_size; unsigned int num_levels; int* level_start; scalar_t__ digest_size; int log_blocksize; } ;
struct inode {int i_mapping; TYPE_1__* i_sb; } ;
struct fsverity_operations {int (* write_merkle_tree_block ) (struct inode*,int *,int,int ) ;struct page* (* read_merkle_tree_page ) (struct inode*,int) ;} ;
struct ahash_request {int dummy; } ;
typedef int pgoff_t ;
struct TYPE_2__ {struct fsverity_operations* s_vop; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*,char*,int,int) ;
 int FUNC_6 (struct merkle_tree_params const*,struct inode*,struct ahash_request*,struct page*,int *) ;
 int FUNC_7 (int *,int ,scalar_t__) ;
 int FUNC_8 (char*,int,int,unsigned int) ;
 int FUNC_9 (struct page*) ;
 struct page* FUNC_10 (int ,int,int *) ;
 struct page* FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct inode*,int *,int,int ) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_4, unsigned int VAR_5,
       u64 VAR_6,
       const struct merkle_tree_params *VAR_7,
       u8 *VAR_8,
       struct ahash_request *VAR_9)
{
 const struct fsverity_operations *VAR_10 = VAR_4->i_sb->s_vop;
 unsigned int VAR_11 = 0;
 u64 VAR_12;
 u64 VAR_13;
 int VAR_14;

 if (FUNC_2(VAR_7->block_size != VAR_2))
  return -VAR_1;

 if (VAR_5 < VAR_7->num_levels) {
  VAR_12 = VAR_7->level_start[VAR_5];
 } else {
  if (FUNC_2(VAR_6 != 1))
   return -VAR_1;
  VAR_12 = 0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  struct page *VAR_15;

  if ((pgoff_t)VAR_13 % 10000 == 0 || VAR_13 + 1 == VAR_6)
   FUNC_8("Hashing block %llu of %llu for level %u\n",
     VAR_13 + 1, VAR_6, VAR_5);

  if (VAR_5 == 0) {

   VAR_15 = FUNC_10(VAR_4->i_mapping, VAR_13, ((void*)0));
   if (FUNC_0(VAR_15)) {
    VAR_14 = FUNC_1(VAR_15);
    FUNC_5(VAR_4,
          "Error %d reading data page %llu",
          VAR_14, VAR_13);
    return VAR_14;
   }
  } else {

   VAR_15 = VAR_10->read_merkle_tree_page(VAR_4,
     VAR_7->level_start[VAR_5 - 1] + VAR_13);
   if (FUNC_0(VAR_15)) {
    VAR_14 = FUNC_1(VAR_15);
    FUNC_5(VAR_4,
          "Error %d reading Merkle tree page %llu",
          VAR_14, VAR_7->level_start[VAR_5 - 1] + VAR_13);
    return VAR_14;
   }
  }

  VAR_14 = FUNC_6(VAR_7, VAR_4, VAR_9, VAR_15,
      &VAR_8[VAR_11]);
  FUNC_9(VAR_15);
  if (VAR_14)
   return VAR_14;
  VAR_11 += VAR_7->digest_size;

  if (VAR_5 == VAR_7->num_levels)
   return 0;

  if (VAR_11 + VAR_7->digest_size > VAR_7->block_size ||
      VAR_13 + 1 == VAR_6) {

   FUNC_7(&VAR_8[VAR_11], 0,
          VAR_7->block_size - VAR_11);
   VAR_14 = VAR_10->write_merkle_tree_block(VAR_4,
     VAR_8,
     VAR_12,
     VAR_7->log_blocksize);
   if (VAR_14) {
    FUNC_5(VAR_4,
          "Error %d writing Merkle tree block %llu",
          VAR_14, VAR_12);
    return VAR_14;
   }
   VAR_12++;
   VAR_11 = 0;
  }

  if (FUNC_4(VAR_3))
   return -VAR_0;
  FUNC_3();
 }
 return 0;
}
