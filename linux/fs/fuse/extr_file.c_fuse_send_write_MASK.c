
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct fuse_write_in {int lock_owner; int write_flags; int flags; } ;
struct TYPE_7__ {size_t size; } ;
struct TYPE_8__ {TYPE_3__ out; struct fuse_write_in in; } ;
struct TYPE_6__ {int args; } ;
struct fuse_io_args {TYPE_4__ write; TYPE_2__ ap; TYPE_1__* io; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;
struct file {struct fuse_file* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int * fl_owner_t ;
struct TYPE_5__ {scalar_t__ async; struct kiocb* iocb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_conn*,struct fuse_io_args*,size_t) ;
 int FUNC_1 (struct fuse_conn*,int *) ;
 int FUNC_2 (struct fuse_conn*,int *) ;
 int FUNC_3 (struct fuse_io_args*,struct fuse_file*,int ,size_t) ;
 int FUNC_4 (struct kiocb*) ;

__attribute__((used)) static ssize_t FUNC_5(struct fuse_io_args *VAR_2, loff_t VAR_3,
          size_t VAR_4, fl_owner_t VAR_5)
{
 struct kiocb *VAR_6 = VAR_2->io->iocb;
 struct file *VAR_7 = VAR_6->ki_filp;
 struct fuse_file *VAR_8 = VAR_7->private_data;
 struct fuse_conn *VAR_9 = VAR_8->fc;
 struct fuse_write_in *VAR_10 = &VAR_2->write.in;
 ssize_t VAR_11;

 FUNC_3(VAR_2, VAR_8, VAR_3, VAR_4);
 VAR_10->flags = FUNC_4(VAR_6);
 if (VAR_5 != ((void*)0)) {
  VAR_10->write_flags |= VAR_1;
  VAR_10->lock_owner = FUNC_1(VAR_9, VAR_5);
 }

 if (VAR_2->io->async)
  return FUNC_0(VAR_9, VAR_2, VAR_4);

 VAR_11 = FUNC_2(VAR_9, &VAR_2->ap.args);
 if (!VAR_11 && VAR_2->write.out.size > VAR_4)
  VAR_11 = -VAR_0;

 return VAR_11 ?: VAR_2->write.out.size;
}
