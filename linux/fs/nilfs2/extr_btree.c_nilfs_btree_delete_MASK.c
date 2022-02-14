
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {int dummy; } ;
struct nilfs_bmap_stats {int bs_nblocks; } ;
struct nilfs_bmap {int b_inode; } ;
struct inode {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct nilfs_bmap*) ;
 struct nilfs_btree_path* FUNC_2 () ;
 int FUNC_3 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct inode*) ;
 int FUNC_4 (struct nilfs_bmap*,struct nilfs_btree_path*,int ,int *,int ,int ) ;
 int FUNC_5 (struct nilfs_btree_path*) ;
 int FUNC_6 (struct nilfs_bmap*,struct nilfs_btree_path*,int*,struct nilfs_bmap_stats*,struct inode*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct nilfs_bmap *VAR_2, __u64 VAR_3)

{
 struct nilfs_btree_path *VAR_4;
 struct nilfs_bmap_stats VAR_5;
 struct inode *VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_2();
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_2, VAR_4, VAR_3, ((void*)0),
        VAR_1, 0);
 if (VAR_8 < 0)
  goto out;


 VAR_6 = FUNC_0(VAR_2) ? FUNC_1(VAR_2) : ((void*)0);

 VAR_8 = FUNC_6(VAR_2, VAR_4, &VAR_7, &VAR_5, VAR_6);
 if (VAR_8 < 0)
  goto out;
 FUNC_3(VAR_2, VAR_4, VAR_7, VAR_6);
 FUNC_7(VAR_2->b_inode, VAR_5.bs_nblocks);

out:
 FUNC_5(VAR_4);
 return VAR_8;
}
