
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct fuse_dev* processing; } ;
struct fuse_dev {TYPE_1__ pq; int entry; struct fuse_conn* fc; } ;
struct fuse_conn {int lock; } ;


 int FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (struct fuse_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct fuse_dev *VAR_0)
{
 struct fuse_conn *VAR_1 = VAR_0->fc;

 if (VAR_1) {
  FUNC_3(&VAR_1->lock);
  FUNC_2(&VAR_0->entry);
  FUNC_4(&VAR_1->lock);

  FUNC_0(VAR_1);
 }
 FUNC_1(VAR_0->pq.processing);
 FUNC_1(VAR_0);
}
