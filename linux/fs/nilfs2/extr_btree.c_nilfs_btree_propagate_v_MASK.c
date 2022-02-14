
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_path {struct buffer_head* bp_bh; int bp_index; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 int FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 struct inode* FUNC_3 (struct nilfs_bmap*) ;
 int FUNC_4 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int,struct buffer_head*,struct inode*) ;
 struct nilfs_btree_node* FUNC_5 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*) ;
 int FUNC_6 (struct nilfs_btree_node*,int ,int) ;
 int FUNC_7 (struct nilfs_bmap*,struct nilfs_btree_path*,int,int*,struct inode*) ;
 int FUNC_8 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_9(struct nilfs_bmap *VAR_0,
       struct nilfs_btree_path *VAR_1,
       int VAR_2, struct buffer_head *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 struct nilfs_btree_node *VAR_6;
 struct inode *VAR_7 = FUNC_3(VAR_0);
 __u64 VAR_8;
 int VAR_9;

 FUNC_2(VAR_3);
 VAR_1[VAR_2].bp_bh = VAR_3;
 VAR_5 = FUNC_7(VAR_0, VAR_1, VAR_2, &VAR_4,
           VAR_7);
 if (VAR_5 < 0)
  goto out;

 if (FUNC_1(VAR_1[VAR_2].bp_bh)) {
  VAR_6 = FUNC_5(VAR_0, VAR_1, VAR_2 + 1, &VAR_9);
  VAR_8 = FUNC_6(VAR_6,
            VAR_1[VAR_2 + 1].bp_index,
            VAR_9);
  VAR_5 = FUNC_8(VAR_7, VAR_8);
  if (VAR_5 < 0)
   goto out;
 }

 FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3, VAR_7);

 out:
 FUNC_0(VAR_1[VAR_2].bp_bh);
 VAR_1[VAR_2].bp_bh = ((void*)0);
 return VAR_5;
}
