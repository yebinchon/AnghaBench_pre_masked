
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int * writeback_fid; } ;
struct inode {int i_data; } ;


 struct v9fs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct inode*) ;

void FUNC_6(struct inode *VAR_0)
{
 struct v9fs_inode *VAR_1 = FUNC_0(VAR_0);

 FUNC_4(&VAR_0->i_data);
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->i_data);

 FUNC_5(VAR_0);

 if (VAR_1->writeback_fid) {
  FUNC_3(VAR_1->writeback_fid);
  VAR_1->writeback_fid = ((void*)0);
 }
}
