
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int i_ctime; int i_mtime; int i_atime; int i_ino; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 () ;
 struct inode* FUNC_2 (struct super_block*) ;

__attribute__((used)) static struct inode *FUNC_3(struct super_block *VAR_0, int VAR_1)
{
 struct inode *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2) {
  VAR_2->i_ino = FUNC_1();
  VAR_2->i_mode = VAR_1;
  VAR_2->i_atime = VAR_2->i_mtime = VAR_2->i_ctime =
   FUNC_0(VAR_2);
 }
 return VAR_2;
}
