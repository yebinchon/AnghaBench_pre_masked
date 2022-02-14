
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_io_priv {int err; scalar_t__ bytes; int reqs; int refcnt; TYPE_1__* iocb; scalar_t__ blocking; int lock; int done; } ;
struct fuse_inode {int lock; int attr_version; } ;
struct fuse_conn {int attr_version; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int (* ki_complete ) (TYPE_1__*,scalar_t__,int ) ;int ki_filp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct fuse_io_priv*) ;
 int VAR_0 ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 struct fuse_inode* FUNC_5 (struct inode*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_10(struct fuse_io_priv *VAR_1, int VAR_2, ssize_t VAR_3)
{
 int VAR_4;

 FUNC_7(&VAR_1->lock);
 if (VAR_2)
  VAR_1->err = VAR_1->err ? : VAR_2;
 else if (VAR_3 >= 0 && (VAR_1->bytes < 0 || VAR_3 < VAR_1->bytes))
  VAR_1->bytes = VAR_3;

 VAR_4 = --VAR_1->reqs;
 if (!VAR_4 && VAR_1->blocking)
  FUNC_1(VAR_1->done);
 FUNC_8(&VAR_1->lock);

 if (!VAR_4 && !VAR_1->blocking) {
  ssize_t VAR_5 = FUNC_3(VAR_1);

  if (VAR_5 >= 0) {
   struct inode *VAR_6 = FUNC_2(VAR_1->iocb->ki_filp);
   struct fuse_conn *VAR_7 = FUNC_4(VAR_6);
   struct fuse_inode *VAR_8 = FUNC_5(VAR_6);

   FUNC_7(&VAR_8->lock);
   VAR_8->attr_version = FUNC_0(&VAR_7->attr_version);
   FUNC_8(&VAR_8->lock);
  }

  VAR_1->iocb->ki_complete(VAR_1->iocb, VAR_5, 0);
 }

 FUNC_6(&VAR_1->refcnt, VAR_0);
}
