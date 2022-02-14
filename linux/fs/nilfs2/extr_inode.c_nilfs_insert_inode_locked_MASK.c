
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_root {int dummy; } ;
struct nilfs_iget_args {unsigned long ino; int for_gc; int cno; struct nilfs_root* root; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,unsigned long,int ,struct nilfs_iget_args*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1,
         struct nilfs_root *VAR_2,
         unsigned long VAR_3)
{
 struct nilfs_iget_args VAR_4 = {
  .ino = VAR_3, .root = VAR_2, .cno = 0, .for_gc = 0
 };

 return FUNC_0(VAR_1, VAR_3, VAR_0, &VAR_4);
}
