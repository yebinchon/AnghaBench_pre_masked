
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_readahead_info {int index; int max_ra_blocks; int ncmax; int node; } ;
struct nilfs_btree_path {int bp_index; int * bp_bh; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nilfs_bmap const*,int ,int **,struct nilfs_btree_readahead_info*) ;
 scalar_t__ FUNC_2 (struct nilfs_bmap const*,struct nilfs_btree_node*,int) ;
 int FUNC_3 (struct nilfs_bmap const*,struct nilfs_btree_path*,int,int *) ;
 struct nilfs_btree_node* FUNC_4 (struct nilfs_btree_path*,int) ;
 struct nilfs_btree_node* FUNC_5 (struct nilfs_bmap const*) ;
 int FUNC_6 (struct nilfs_bmap const*) ;
 int FUNC_7 (struct nilfs_btree_node*) ;
 scalar_t__ FUNC_8 (struct nilfs_btree_node*) ;
 int FUNC_9 (struct nilfs_btree_node*,int,int) ;
 int FUNC_10 (struct nilfs_btree_node*,int ,int*) ;

__attribute__((used)) static int FUNC_11(const struct nilfs_bmap *VAR_5,
     struct nilfs_btree_path *VAR_6,
     __u64 VAR_7, __u64 *VAR_8, int VAR_9,
     int VAR_10)
{
 struct nilfs_btree_node *VAR_11;
 struct nilfs_btree_readahead_info VAR_12, *VAR_13;
 __u64 VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;

 VAR_11 = FUNC_5(VAR_5);
 VAR_15 = FUNC_7(VAR_11);
 if (VAR_15 < VAR_9 || FUNC_8(VAR_11) <= 0)
  return -VAR_1;

 VAR_17 = FUNC_10(VAR_11, VAR_7, &VAR_16);
 VAR_14 = FUNC_9(VAR_11, VAR_16,
           VAR_4);
 VAR_6[VAR_15].bp_bh = ((void*)0);
 VAR_6[VAR_15].bp_index = VAR_16;

 VAR_18 = FUNC_6(VAR_5);

 while (--VAR_15 >= VAR_9) {
  VAR_13 = ((void*)0);
  if (VAR_15 == VAR_3 && VAR_10) {
   VAR_12.node = FUNC_3(VAR_5, VAR_6, VAR_15 + 1,
            &VAR_12.ncmax);
   VAR_12.index = VAR_16;
   VAR_12.max_ra_blocks = 7;
   VAR_13 = &VAR_12;
  }
  VAR_19 = FUNC_1(VAR_5, VAR_14, &VAR_6[VAR_15].bp_bh,
           VAR_13);
  if (VAR_19 < 0)
   return VAR_19;

  VAR_11 = FUNC_4(VAR_6, VAR_15);
  if (FUNC_2(VAR_5, VAR_11, VAR_15))
   return -VAR_0;
  if (!VAR_17)
   VAR_17 = FUNC_10(VAR_11, VAR_7, &VAR_16);
  else
   VAR_16 = 0;
  if (VAR_16 < VAR_18) {
   VAR_14 = FUNC_9(VAR_11, VAR_16, VAR_18);
  } else {
   FUNC_0(VAR_17 || VAR_15 != VAR_3);

   VAR_14 = VAR_2;
  }
  VAR_6[VAR_15].bp_index = VAR_16;
 }
 if (!VAR_17)
  return -VAR_1;

 if (VAR_8 != ((void*)0))
  *VAR_8 = VAR_14;

 return 0;
}
