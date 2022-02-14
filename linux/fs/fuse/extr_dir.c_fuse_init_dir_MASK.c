
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int * i_fop; int * i_op; } ;
struct TYPE_2__ {int cached; scalar_t__ version; scalar_t__ pos; scalar_t__ size; int lock; } ;
struct fuse_inode {TYPE_1__ rdc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct fuse_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct inode *VAR_2)
{
 struct fuse_inode *VAR_3 = FUNC_0(VAR_2);

 VAR_2->i_op = &VAR_0;
 VAR_2->i_fop = &VAR_1;

 FUNC_1(&VAR_3->rdc.lock);
 VAR_3->rdc.cached = 0;
 VAR_3->rdc.size = 0;
 VAR_3->rdc.pos = 0;
 VAR_3->rdc.version = 0;
}
