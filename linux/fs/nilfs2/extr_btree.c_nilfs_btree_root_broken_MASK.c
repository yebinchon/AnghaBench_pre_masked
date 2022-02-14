
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nilfs_btree_node const*) ;
 int FUNC_1 (struct nilfs_btree_node const*) ;
 int FUNC_2 (struct nilfs_btree_node const*) ;
 int FUNC_3 (int ,int ,char*,int ,int,int,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(const struct nilfs_btree_node *VAR_4,
       struct inode *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_2(VAR_4);

 if (FUNC_4(VAR_6 < VAR_2 ||
       VAR_6 >= VAR_1 ||
       VAR_8 < 0 ||
       VAR_8 > VAR_3)) {
  FUNC_3(VAR_5->i_sb, VAR_0,
     "bad btree root (ino=%lu): level = %d, flags = 0x%x, nchildren = %d",
     VAR_5->i_ino, VAR_6, VAR_7, VAR_8);
  VAR_9 = 1;
 }
 return VAR_9;
}
