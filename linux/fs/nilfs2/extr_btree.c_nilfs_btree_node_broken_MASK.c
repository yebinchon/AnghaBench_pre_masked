
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_btree_node {int dummy; } ;
struct inode {int i_ino; int i_sb; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int VAR_3 ;
 int FUNC_1 (struct nilfs_btree_node const*) ;
 int FUNC_2 (struct nilfs_btree_node const*) ;
 int FUNC_3 (struct nilfs_btree_node const*) ;
 int FUNC_4 (int ,int ,char*,int ,unsigned long long,int,int,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(const struct nilfs_btree_node *VAR_4,
       size_t VAR_5, struct inode *VAR_6,
       sector_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_2(VAR_4);
 VAR_9 = FUNC_1(VAR_4);
 VAR_10 = FUNC_3(VAR_4);

 if (FUNC_5(VAR_8 < VAR_2 ||
       VAR_8 >= VAR_1 ||
       (VAR_9 & VAR_3) ||
       VAR_10 < 0 ||
       VAR_10 > FUNC_0(VAR_5))) {
  FUNC_4(VAR_6->i_sb, VAR_0,
     "bad btree node (ino=%lu, blocknr=%llu): level = %d, flags = 0x%x, nchildren = %d",
     VAR_6->i_ino, (unsigned long long)VAR_7, VAR_8,
     VAR_9, VAR_10);
  VAR_11 = 1;
 }
 return VAR_11;
}
