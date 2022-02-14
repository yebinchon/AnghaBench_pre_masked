
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_mode; int * i_fop; int * i_op; int i_flags; int i_ctime; int i_mtime; int i_atime; int i_ino; } ;
typedef int dev_t ;



 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct super_block*) ;
 int VAR_4 ;

struct inode *FUNC_4(struct super_block *VAR_5,
    const struct inode *VAR_6, int VAR_7,
    dev_t VAR_8, bool VAR_9)
{
 struct inode *VAR_10 = FUNC_3(VAR_5);

 if (VAR_10) {
  VAR_10->i_ino = FUNC_1();
  VAR_10->i_mode = VAR_7;
  VAR_10->i_atime = VAR_10->i_mtime = VAR_10->i_ctime = FUNC_0(VAR_10);
  VAR_10->i_flags = VAR_9 ? 0 : VAR_1;
  switch (VAR_7 & VAR_0) {
  case 128:
   VAR_10->i_fop = &VAR_3;
   break;
  case 129:
   VAR_10->i_op = &VAR_2;
   VAR_10->i_fop = &VAR_4;
   FUNC_2(VAR_10);
   break;
  }
 }
 return VAR_10;
}
