
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_bmap_stats {int bs_nblocks; } ;
struct nilfs_bmap {int b_inode; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nilfs_btree_path* FUNC_0 () ;
 int FUNC_1 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int ,int ) ;
 int FUNC_2 (struct nilfs_bmap*,struct nilfs_btree_path*,int ,int *,int ,int ) ;
 int FUNC_3 (struct nilfs_btree_path*) ;
 int FUNC_4 (struct nilfs_bmap*,struct nilfs_btree_path*,int*,int ,int ,struct nilfs_bmap_stats*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct nilfs_bmap *VAR_4, __u64 VAR_5, __u64 VAR_6)
{
 struct nilfs_btree_path *VAR_7;
 struct nilfs_bmap_stats VAR_8;
 int VAR_9, VAR_10;

 VAR_7 = FUNC_0();
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_10 = FUNC_2(VAR_4, VAR_7, VAR_5, ((void*)0),
        VAR_3, 0);
 if (VAR_10 != -VAR_1) {
  if (VAR_10 == 0)
   VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_4(VAR_4, VAR_7, &VAR_9, VAR_5, VAR_6, &VAR_8);
 if (VAR_10 < 0)
  goto out;
 FUNC_1(VAR_4, VAR_7, VAR_9, VAR_5, VAR_6);
 FUNC_5(VAR_4->b_inode, VAR_8.bs_nblocks);

 out:
 FUNC_3(VAR_7);
 return VAR_10;
}
