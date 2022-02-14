
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_pqueue {int lock; int * processing; int io; } ;
struct fuse_dev {struct fuse_pqueue pq; struct fuse_conn* fc; } ;
struct TYPE_2__ {int * fasync; } ;
struct fuse_conn {TYPE_1__ iq; int dev_count; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct fuse_conn*,int *) ;
 int FUNC_4 (struct fuse_conn*) ;
 int FUNC_5 (struct fuse_dev*) ;
 struct fuse_dev* FUNC_6 (struct file*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_1 ;

int FUNC_11(struct inode *VAR_2, struct file *VAR_3)
{
 struct fuse_dev *VAR_4 = FUNC_6(VAR_3);

 if (VAR_4) {
  struct fuse_conn *VAR_5 = VAR_4->fc;
  struct fuse_pqueue *VAR_6 = &VAR_4->pq;
  FUNC_0(VAR_1);
  unsigned int VAR_7;

  FUNC_9(&VAR_6->lock);
  FUNC_1(!FUNC_7(&VAR_6->io));
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_8(&VAR_6->processing[VAR_7], &VAR_1);
  FUNC_10(&VAR_6->lock);

  FUNC_3(VAR_5, &VAR_1);


  if (FUNC_2(&VAR_5->dev_count)) {
   FUNC_1(VAR_5->iq.fasync != ((void*)0));
   FUNC_4(VAR_5);
  }
  FUNC_5(VAR_4);
 }
 return 0;
}
