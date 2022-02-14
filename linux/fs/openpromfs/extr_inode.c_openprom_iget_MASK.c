
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; scalar_t__ i_ino; int i_mode; int * i_fop; int * i_op; int i_ctime; int i_atime; int i_mtime; } ;
typedef int ino_t ;


 int VAR_0 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct super_block*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static struct inode *FUNC_4(struct super_block *VAR_8, ino_t VAR_9)
{
 struct inode *VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_9);
 if (!VAR_10)
  return FUNC_0(-VAR_0);
 if (VAR_10->i_state & VAR_1) {
  VAR_10->i_mtime = VAR_10->i_atime = VAR_10->i_ctime = FUNC_1(VAR_10);
  if (VAR_10->i_ino == VAR_2) {
   VAR_10->i_op = &VAR_6;
   VAR_10->i_fop = &VAR_7;
   VAR_10->i_mode = VAR_3 | VAR_4 | VAR_5;
  }
  FUNC_3(VAR_10);
 }
 return VAR_10;
}
