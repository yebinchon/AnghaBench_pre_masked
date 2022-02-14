
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {struct inode* b_inode; } ;
struct inode {int i_ino; int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct nilfs_bmap *VAR_2,
         const char *VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_2->b_inode;

 if (VAR_4 == -VAR_0) {
  FUNC_0(VAR_5->i_sb, VAR_3,
         "broken bmap (inode number=%lu)", VAR_5->i_ino);
  VAR_4 = -VAR_1;
 }
 return VAR_4;
}
