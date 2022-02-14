
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_btree_readahead_info {int max_ra_blocks; int index; int ncmax; int node; } ;
struct nilfs_bmap {TYPE_1__* b_inode; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_4__ {struct address_space i_btnode_cache; } ;
struct TYPE_3__ {int i_ino; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct nilfs_bmap const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct address_space*,scalar_t__,int ,int ,int ,struct buffer_head**,int *) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (int ,int,int) ;
 int FUNC_9 (int ,int ,char*,int ,unsigned long long) ;
 int FUNC_10 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_11(const struct nilfs_bmap *VAR_7, __u64 VAR_8,
       struct buffer_head **VAR_9,
       const struct nilfs_btree_readahead_info *VAR_10)
{
 struct address_space *VAR_11 = &FUNC_0(VAR_7)->i_btnode_cache;
 struct buffer_head *VAR_12, *VAR_13;
 sector_t VAR_14 = 0;
 int VAR_15;

 VAR_15 = FUNC_6(VAR_11, VAR_8, 0, VAR_5, 0, &VAR_12,
     &VAR_14);
 if (VAR_15) {
  if (VAR_15 != -VAR_1)
   return VAR_15;
  goto out_check;
 }

 if (VAR_10) {
  int VAR_16, VAR_17;
  __u64 VAR_18;


  for (VAR_17 = VAR_10->max_ra_blocks, VAR_16 = VAR_10->index + 1;
       VAR_17 > 0 && VAR_16 < VAR_10->ncmax; VAR_17--, VAR_16++) {
   VAR_18 = FUNC_8(VAR_10->node, VAR_16, VAR_10->ncmax);

   VAR_15 = FUNC_6(VAR_11, VAR_18, 0,
       VAR_5, VAR_6,
       &VAR_13, &VAR_14);
   if (FUNC_5(!VAR_15 || VAR_15 == -VAR_1))
    FUNC_1(VAR_13);
   else if (VAR_15 != -VAR_0)
    break;
   if (!FUNC_2(VAR_12))
    goto out_no_wait;
  }
 }

 FUNC_10(VAR_12);

 out_no_wait:
 if (!FUNC_3(VAR_12)) {
  FUNC_9(VAR_7->b_inode->i_sb, VAR_4,
     "I/O error reading b-tree node block (ino=%lu, blocknr=%llu)",
     VAR_7->b_inode->i_ino, (unsigned long long)VAR_8);
  FUNC_1(VAR_12);
  return -VAR_3;
 }

 out_check:
 if (FUNC_7(VAR_12)) {
  FUNC_4(VAR_12);
  FUNC_1(VAR_12);
  return -VAR_2;
 }

 *VAR_9 = VAR_12;
 return 0;
}
