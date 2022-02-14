
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int * i_op; int * i_fop; int i_ctime; int i_mtime; int i_atime; int i_ino; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,int *,int) ;
 struct inode* FUNC_4 (struct super_block*) ;
 int VAR_2 ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_3)
{
 struct inode *VAR_4 = FUNC_4(VAR_3);
 umode_t VAR_5 = VAR_0 | 0755;

 if (VAR_4) {
  VAR_4->i_ino = FUNC_1();
  FUNC_3(VAR_4, ((void*)0), VAR_5);
  VAR_4->i_atime = VAR_4->i_mtime = VAR_4->i_ctime = FUNC_0(VAR_4);
  FUNC_2(VAR_4);

  VAR_4->i_fop = &VAR_2;
  VAR_4->i_op = &VAR_1;
 }

 return VAR_4;
}
