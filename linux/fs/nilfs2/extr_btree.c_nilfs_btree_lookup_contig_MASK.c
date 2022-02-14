
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_readahead_info {int ncmax; int index; int max_ra_blocks; struct nilfs_btree_node* node; } ;
struct nilfs_btree_path {int bp_index; int * bp_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap const*) ;
 int VAR_1 ;
 int FUNC_1 (struct nilfs_bmap const*,scalar_t__,int **,struct nilfs_btree_readahead_info*) ;
 int FUNC_2 (int *) ;
 struct inode* FUNC_3 (struct nilfs_bmap const*) ;
 struct nilfs_btree_path* FUNC_4 () ;
 int FUNC_5 (struct nilfs_bmap const*,struct nilfs_btree_path*,scalar_t__,scalar_t__*,int,int) ;
 int FUNC_6 (struct nilfs_btree_path*) ;
 void* FUNC_7 (struct nilfs_bmap const*,struct nilfs_btree_path*,int,int*) ;
 struct nilfs_btree_node* FUNC_8 (struct nilfs_btree_path*,int) ;
 int FUNC_9 (struct nilfs_bmap const*) ;
 int FUNC_10 (struct nilfs_bmap const*) ;
 scalar_t__ FUNC_11 (struct nilfs_btree_node*,int) ;
 int FUNC_12 (struct nilfs_btree_node*) ;
 scalar_t__ FUNC_13 (struct nilfs_btree_node*,int,int) ;
 int FUNC_14 (struct inode*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_15(const struct nilfs_bmap *VAR_2,
         __u64 VAR_3, __u64 *VAR_4,
         unsigned int VAR_5)
{
 struct nilfs_btree_path *VAR_6;
 struct nilfs_btree_node *VAR_7;
 struct inode *VAR_8 = ((void*)0);
 __u64 VAR_9, VAR_10;
 sector_t VAR_11;
 int VAR_12 = VAR_1;
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 struct nilfs_btree_readahead_info VAR_18;

 VAR_6 = FUNC_4();
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_2, VAR_6, VAR_3, &VAR_9, VAR_12, 1);
 if (VAR_13 < 0)
  goto out;

 if (FUNC_0(VAR_2)) {
  VAR_8 = FUNC_3(VAR_2);
  VAR_13 = FUNC_14(VAR_8, VAR_9, &VAR_11);
  if (VAR_13 < 0)
   goto out;
  VAR_9 = VAR_11;
 }
 VAR_14 = 1;
 if (VAR_14 == VAR_5)
  goto end;

 VAR_16 = FUNC_9(VAR_2) - 1;
 VAR_7 = FUNC_7(VAR_2, VAR_6, VAR_12, &VAR_17);
 VAR_15 = VAR_6[VAR_12].bp_index + 1;
 for (;;) {
  while (VAR_15 < FUNC_12(VAR_7)) {
   if (FUNC_11(VAR_7, VAR_15) !=
       VAR_3 + VAR_14)
    goto end;
   VAR_10 = FUNC_13(VAR_7, VAR_15, VAR_17);
   if (VAR_8) {
    VAR_13 = FUNC_14(VAR_8, VAR_10, &VAR_11);
    if (VAR_13 < 0)
     goto out;
    VAR_10 = VAR_11;
   }
   if (VAR_10 != VAR_9 + VAR_14 || ++VAR_14 == VAR_5)
    goto end;
   VAR_15++;
   continue;
  }
  if (VAR_12 == VAR_16)
   break;


  VAR_18.node = FUNC_7(VAR_2, VAR_6, VAR_12 + 1, &VAR_18.ncmax);
  VAR_18.index = VAR_6[VAR_12 + 1].bp_index + 1;
  VAR_18.max_ra_blocks = 7;
  if (VAR_18.index >= FUNC_12(VAR_18.node) ||
      FUNC_11(VAR_18.node, VAR_18.index) != VAR_3 + VAR_14)
   break;
  VAR_10 = FUNC_13(VAR_18.node, VAR_18.index, VAR_18.ncmax);
  VAR_6[VAR_12 + 1].bp_index = VAR_18.index;

  FUNC_2(VAR_6[VAR_12].bp_bh);
  VAR_6[VAR_12].bp_bh = ((void*)0);

  VAR_13 = FUNC_1(VAR_2, VAR_10, &VAR_6[VAR_12].bp_bh,
           &VAR_18);
  if (VAR_13 < 0)
   goto out;
  VAR_7 = FUNC_8(VAR_6, VAR_12);
  VAR_17 = FUNC_10(VAR_2);
  VAR_15 = 0;
  VAR_6[VAR_12].bp_index = VAR_15;
 }
 end:
 *VAR_4 = VAR_9;
 VAR_13 = VAR_14;
 out:
 FUNC_6(VAR_6);
 return VAR_13;
}
