
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_fop; int i_opflags; int * i_op; int i_ctime; int i_mtime; int i_atime; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_4)
{
 FUNC_1(VAR_4);

 VAR_4->i_mode = VAR_1;
 VAR_4->i_atime = VAR_4->i_mtime = VAR_4->i_ctime =
  FUNC_0(VAR_4);
 VAR_4->i_op = &VAR_3;
 VAR_4->i_opflags &= ~VAR_0;
 VAR_4->i_fop = &VAR_2;
}
