
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_io_priv {int should_dirty; int async; TYPE_1__* iocb; } ;
struct TYPE_8__ {int write_flags; } ;
struct TYPE_9__ {TYPE_3__ in; } ;
struct fuse_io_args {int ap; TYPE_4__ write; struct fuse_io_priv* io; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {size_t max_write; size_t max_read; int max_pages; } ;
struct file {struct fuse_file* private_data; TYPE_2__* f_mapping; } ;
typedef size_t ssize_t ;
typedef size_t pgoff_t ;
typedef size_t loff_t ;
typedef int fl_owner_t ;
struct TYPE_10__ {int files; } ;
struct TYPE_7__ {struct inode* host; } ;
struct TYPE_6__ {struct file* ki_filp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_2 (int *,struct iov_iter*,size_t*,int,unsigned int) ;
 struct fuse_io_args* FUNC_3 (struct fuse_io_priv*,unsigned int) ;
 int FUNC_4 (struct fuse_io_args*) ;
 scalar_t__ FUNC_5 (struct inode*,size_t,size_t) ;
 int FUNC_6 (int *,int) ;
 size_t FUNC_7 (struct fuse_io_args*,size_t,size_t,int ) ;
 size_t FUNC_8 (struct fuse_io_args*,size_t,size_t,int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 size_t FUNC_12 (struct iov_iter*) ;
 unsigned int FUNC_13 (struct iov_iter*,int ) ;
 scalar_t__ FUNC_14 (struct iov_iter*) ;
 size_t FUNC_15 (size_t,size_t) ;

ssize_t FUNC_16(struct fuse_io_priv *VAR_7, struct iov_iter *VAR_8,
         loff_t *VAR_9, int VAR_10)
{
 int VAR_11 = VAR_10 & VAR_3;
 int VAR_12 = VAR_10 & VAR_2;
 struct file *VAR_13 = VAR_7->iocb->ki_filp;
 struct inode *VAR_14 = VAR_13->f_mapping->host;
 struct fuse_file *VAR_15 = VAR_13->private_data;
 struct fuse_conn *VAR_16 = VAR_15->fc;
 size_t VAR_17 = VAR_11 ? VAR_16->max_write : VAR_16->max_read;
 loff_t VAR_18 = *VAR_9;
 size_t VAR_19 = FUNC_12(VAR_8);
 pgoff_t VAR_20 = VAR_18 >> VAR_5;
 pgoff_t VAR_21 = (VAR_18 + VAR_19 - 1) >> VAR_5;
 ssize_t VAR_22 = 0;
 int VAR_23 = 0;
 struct fuse_io_args *VAR_24;
 unsigned int VAR_25;

 VAR_25 = FUNC_13(VAR_8, VAR_16->max_pages);
 VAR_24 = FUNC_3(VAR_7, VAR_25);
 if (!VAR_24)
  return -VAR_1;

 VAR_24->io = VAR_7;
 if (!VAR_12 && FUNC_5(VAR_14, VAR_20, VAR_21)) {
  if (!VAR_11)
   FUNC_10(VAR_14);
  FUNC_9(VAR_14);
  if (!VAR_11)
   FUNC_11(VAR_14);
 }

 VAR_7->should_dirty = !VAR_11 && FUNC_14(VAR_8);
 while (VAR_19) {
  ssize_t VAR_26;
  fl_owner_t VAR_27 = VAR_6->files;
  size_t VAR_28 = FUNC_15(VAR_19, VAR_17);

  VAR_23 = FUNC_2(&VAR_24->ap, VAR_8, &VAR_28, VAR_11,
       VAR_25);
  if (VAR_23 && !VAR_28)
   break;

  if (VAR_11) {
   if (!FUNC_1(VAR_0))
    VAR_24->write.in.write_flags |= VAR_4;

   VAR_26 = FUNC_8(VAR_24, VAR_18, VAR_28, VAR_27);
  } else {
   VAR_26 = FUNC_7(VAR_24, VAR_18, VAR_28, VAR_27);
  }

  if (!VAR_7->async || VAR_26 < 0) {
   FUNC_6(&VAR_24->ap, VAR_7->should_dirty);
   FUNC_4(VAR_24);
  }
  VAR_24 = ((void*)0);
  if (VAR_26 < 0) {
   VAR_23 = VAR_26;
   break;
  }
  FUNC_0(VAR_26 > VAR_28);

  VAR_19 -= VAR_26;
  VAR_22 += VAR_26;
  VAR_18 += VAR_26;
  if (VAR_26 != VAR_28)
   break;
  if (VAR_19) {
   VAR_25 = FUNC_13(VAR_8, VAR_16->max_pages);
   VAR_24 = FUNC_3(VAR_7, VAR_25);
   if (!VAR_24)
    break;
  }
 }
 if (VAR_24)
  FUNC_4(VAR_24);
 if (VAR_22 > 0)
  *VAR_9 = VAR_18;

 return VAR_22 > 0 ? VAR_22 : VAR_23;
}
