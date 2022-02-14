
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_btree_path {int dummy; } ;
struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {TYPE_1__* b_inode; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int i_ino; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct buffer_head*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct nilfs_bmap*,struct buffer_head*) ;
 struct nilfs_btree_path* FUNC_5 () ;
 int FUNC_6 (struct nilfs_bmap*,struct nilfs_btree_path*,scalar_t__,int *,int,int ) ;
 int FUNC_7 (struct nilfs_btree_path*) ;
 scalar_t__ FUNC_8 (struct nilfs_btree_node*,int ) ;
 int FUNC_9 (struct nilfs_btree_node*) ;
 int FUNC_10 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct buffer_head*) ;
 int FUNC_11 (struct nilfs_bmap*,struct nilfs_btree_path*,int,struct buffer_head*) ;
 int FUNC_12 (int ,int ,char*,int ,unsigned long long,int) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct nilfs_bmap *VAR_4,
     struct buffer_head *VAR_5)
{
 struct nilfs_btree_path *VAR_6;
 struct nilfs_btree_node *VAR_7;
 __u64 VAR_8;
 int VAR_9, VAR_10;

 FUNC_1(!FUNC_2(VAR_5));

 VAR_6 = FUNC_5();
 if (VAR_6 == ((void*)0))
  return -VAR_1;

 if (FUNC_3(VAR_5)) {
  VAR_7 = (struct nilfs_btree_node *)VAR_5->b_data;
  VAR_8 = FUNC_8(VAR_7, 0);
  VAR_9 = FUNC_9(VAR_7);
 } else {
  VAR_8 = FUNC_4(VAR_4, VAR_5);
  VAR_9 = VAR_3;
 }

 VAR_10 = FUNC_6(VAR_4, VAR_6, VAR_8, ((void*)0), VAR_9 + 1, 0);
 if (VAR_10 < 0) {
  if (FUNC_13(VAR_10 == -VAR_0))
   FUNC_12(VAR_4->b_inode->i_sb, VAR_2,
      "writing node/leaf block does not appear in b-tree (ino=%lu) at key=%llu, level=%d",
      VAR_4->b_inode->i_ino,
      (unsigned long long)VAR_8, VAR_9);
  goto out;
 }

 VAR_10 = FUNC_0(VAR_4) ?
  FUNC_11(VAR_4, VAR_6, VAR_9, VAR_5) :
  FUNC_10(VAR_4, VAR_6, VAR_9, VAR_5);

 out:
 FUNC_7(VAR_6);

 return VAR_10;
}
