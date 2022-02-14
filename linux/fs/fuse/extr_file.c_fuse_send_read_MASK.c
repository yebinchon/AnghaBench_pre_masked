
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int args; } ;
struct TYPE_6__ {int lock_owner; int read_flags; } ;
struct TYPE_7__ {TYPE_1__ in; } ;
struct fuse_io_args {TYPE_3__ ap; TYPE_5__* io; TYPE_2__ read; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {int dummy; } ;
struct file {struct fuse_file* private_data; } ;
typedef int ssize_t ;
typedef int loff_t ;
typedef int * fl_owner_t ;
struct TYPE_10__ {scalar_t__ async; TYPE_4__* iocb; } ;
struct TYPE_9__ {struct file* ki_filp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fuse_conn*,struct fuse_io_args*,size_t) ;
 int FUNC_1 (struct fuse_conn*,int *) ;
 int FUNC_2 (struct fuse_io_args*,struct file*,int ,size_t,int ) ;
 int FUNC_3 (struct fuse_conn*,int *) ;

__attribute__((used)) static ssize_t FUNC_4(struct fuse_io_args *VAR_2, loff_t VAR_3, size_t VAR_4,
         fl_owner_t VAR_5)
{
 struct file *VAR_6 = VAR_2->io->iocb->ki_filp;
 struct fuse_file *VAR_7 = VAR_6->private_data;
 struct fuse_conn *VAR_8 = VAR_7->fc;

 FUNC_2(VAR_2, VAR_6, VAR_3, VAR_4, VAR_0);
 if (VAR_5 != ((void*)0)) {
  VAR_2->read.in.read_flags |= VAR_1;
  VAR_2->read.in.lock_owner = FUNC_1(VAR_8, VAR_5);
 }

 if (VAR_2->io->async)
  return FUNC_0(VAR_8, VAR_2, VAR_4);

 return FUNC_3(VAR_8, &VAR_2->ap.args);
}
