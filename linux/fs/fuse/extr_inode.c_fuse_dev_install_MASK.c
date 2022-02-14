
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_dev {int entry; int fc; } ;
struct fuse_conn {int lock; int devices; } ;


 int FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct fuse_dev *VAR_0, struct fuse_conn *VAR_1)
{
 VAR_0->fc = FUNC_0(VAR_1);
 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_0->entry, &VAR_1->devices);
 FUNC_3(&VAR_1->lock);
}
