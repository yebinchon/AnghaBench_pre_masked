
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_btree_node {int dummy; } ;
struct nilfs_bmap {TYPE_1__* b_inode; } ;
struct TYPE_2__ {int i_ino; int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct nilfs_btree_node*) ;
 int FUNC_2 (int ,int ,char*,int ,int,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const struct nilfs_bmap *VAR_1,
    struct nilfs_btree_node *VAR_2, int VAR_3)
{
 if (FUNC_3(FUNC_1(VAR_2) != VAR_3)) {
  FUNC_0();
  FUNC_2(VAR_1->b_inode->i_sb, VAR_0,
     "btree level mismatch (ino=%lu): %d != %d",
     VAR_1->b_inode->i_ino,
     FUNC_1(VAR_2), VAR_3);
  return 1;
 }
 return 0;
}
