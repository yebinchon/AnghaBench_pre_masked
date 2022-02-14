
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_1 (struct super_block*) ;

struct inode *FUNC_2(struct super_block *VAR_4)
{
 struct inode *VAR_5 = FUNC_1(VAR_4);
 if (VAR_5) {
  VAR_5->i_ino = VAR_0;
  VAR_5->i_op = &VAR_2;
  VAR_5->i_fop = &VAR_3;
  VAR_5->i_mode = 0444;
  return VAR_5;
 }
 return FUNC_0(-VAR_1);
}
