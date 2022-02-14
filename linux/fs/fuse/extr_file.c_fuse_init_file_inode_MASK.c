
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * a_ops; } ;
struct inode {TYPE_1__ i_data; int * i_fop; } ;
struct fuse_inode {int writepages; int page_waitq; scalar_t__ writectr; int queued_writes; int write_files; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 struct fuse_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct inode *VAR_2)
{
 struct fuse_inode *VAR_3 = FUNC_1(VAR_2);

 VAR_2->i_fop = &VAR_1;
 VAR_2->i_data.a_ops = &VAR_0;

 FUNC_0(&VAR_3->write_files);
 FUNC_0(&VAR_3->queued_writes);
 VAR_3->writectr = 0;
 FUNC_2(&VAR_3->page_waitq);
 FUNC_0(&VAR_3->writepages);
}
