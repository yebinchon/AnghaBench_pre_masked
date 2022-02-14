
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_pos; struct file* ki_filp; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_io_priv {int reqs; int bytes; int write; int async; int blocking; int refcnt; int * done; struct kiocb* iocb; scalar_t__ err; scalar_t__ offset; scalar_t__ size; int lock; } ;
struct fuse_file {TYPE_2__* fc; } ;
struct file {TYPE_1__* f_mapping; struct fuse_file* private_data; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {int async_dio; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct fuse_io_priv*,struct iov_iter*,scalar_t__*) ;
 int FUNC_2 (struct fuse_io_priv*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (struct fuse_io_priv*,struct iov_iter*,scalar_t__*,int ) ;
 int FUNC_4 (struct file*) ;
 scalar_t__ FUNC_5 (struct fuse_io_priv*) ;
 int FUNC_6 (struct inode*) ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 size_t FUNC_10 (struct iov_iter*) ;
 scalar_t__ FUNC_11 (struct iov_iter*) ;
 int FUNC_12 (struct iov_iter*,int ) ;
 int FUNC_13 (struct kiocb*) ;
 struct fuse_io_priv* FUNC_14 (int,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int VAR_7 ;
 int FUNC_19 (int *) ;

__attribute__((used)) static ssize_t
FUNC_20(struct kiocb *VAR_8, struct iov_iter *VAR_9)
{
 FUNC_0(VAR_7);
 ssize_t VAR_10 = 0;
 struct file *VAR_11 = VAR_8->ki_filp;
 struct fuse_file *VAR_12 = VAR_11->private_data;
 bool VAR_13 = VAR_12->fc->async_dio;
 loff_t VAR_14 = 0;
 struct inode *VAR_15;
 loff_t VAR_16;
 size_t VAR_17 = FUNC_10(VAR_9);
 loff_t VAR_18 = VAR_8->ki_pos;
 struct fuse_io_priv *VAR_19;

 VAR_14 = VAR_18;
 VAR_15 = VAR_11->f_mapping->host;
 VAR_16 = FUNC_9(VAR_15);

 if ((FUNC_11(VAR_9) == VAR_4) && (VAR_18 > VAR_16))
  return 0;


 if (VAR_13 && FUNC_11(VAR_9) != VAR_5 && VAR_18 + VAR_17 > VAR_16) {
  if (VAR_18 >= VAR_16)
   return 0;
  FUNC_12(VAR_9, FUNC_7(VAR_12->fc, VAR_16 - VAR_18));
  VAR_17 = FUNC_10(VAR_9);
 }

 VAR_19 = FUNC_14(sizeof(struct fuse_io_priv), VAR_3);
 if (!VAR_19)
  return -VAR_1;
 FUNC_18(&VAR_19->lock);
 FUNC_16(&VAR_19->refcnt);
 VAR_19->reqs = 1;
 VAR_19->bytes = -1;
 VAR_19->size = 0;
 VAR_19->offset = VAR_18;
 VAR_19->write = (FUNC_11(VAR_9) == VAR_5);
 VAR_19->err = 0;




 VAR_19->async = VAR_13;
 VAR_19->iocb = VAR_8;
 VAR_19->blocking = FUNC_13(VAR_8);





 if ((VAR_18 + VAR_17 > VAR_16) && FUNC_11(VAR_9) == VAR_5)
  VAR_19->blocking = 1;

 if (VAR_19->async && VAR_19->blocking) {




  FUNC_15(&VAR_19->refcnt);
  VAR_19->done = &VAR_7;
 }

 if (FUNC_11(VAR_9) == VAR_5) {
  VAR_10 = FUNC_3(VAR_19, VAR_9, &VAR_14, VAR_2);
  FUNC_6(VAR_15);
 } else {
  VAR_10 = FUNC_1(VAR_19, VAR_9, &VAR_14);
 }

 if (VAR_19->async) {
  bool VAR_20 = VAR_19->blocking;

  FUNC_2(VAR_19, VAR_10 < 0 ? VAR_10 : 0, -1);


  if (!VAR_20)
   return -VAR_0;

  FUNC_19(&VAR_7);
  VAR_10 = FUNC_5(VAR_19);
 }

 FUNC_17(&VAR_19->refcnt, VAR_6);

 if (FUNC_11(VAR_9) == VAR_5) {
  if (VAR_10 > 0)
   FUNC_8(VAR_15, VAR_14);
  else if (VAR_10 < 0 && VAR_18 + VAR_17 > VAR_16)
   FUNC_4(VAR_11);
 }

 return VAR_10;
}
