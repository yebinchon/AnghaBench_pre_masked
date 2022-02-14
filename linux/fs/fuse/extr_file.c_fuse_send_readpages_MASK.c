
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int attr_ver; } ;
struct TYPE_6__ {int out_pages; int page_zeroing; int page_replace; int (* end ) (struct fuse_conn*,TYPE_2__*,int) ;} ;
struct fuse_args_pages {size_t num_pages; TYPE_2__ args; int * pages; } ;
struct fuse_io_args {int ff; TYPE_1__ read; struct fuse_args_pages ap; } ;
struct fuse_file {struct fuse_conn* fc; } ;
struct fuse_conn {scalar_t__ async_read; } ;
struct file {struct fuse_file* private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct fuse_file*) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_io_args*,struct file*,int ,size_t,int ) ;
 int FUNC_3 (struct fuse_conn*,TYPE_2__*,int) ;
 int FUNC_4 (struct fuse_conn*,TYPE_2__*,int ) ;
 int FUNC_5 (struct fuse_conn*,TYPE_2__*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct fuse_io_args *VAR_3, struct file *VAR_4)
{
 struct fuse_file *VAR_5 = VAR_4->private_data;
 struct fuse_conn *VAR_6 = VAR_5->fc;
 struct fuse_args_pages *VAR_7 = &VAR_3->ap;
 loff_t VAR_8 = FUNC_6(VAR_7->pages[0]);
 size_t VAR_9 = VAR_7->num_pages << VAR_2;
 int VAR_10;

 VAR_7->args.out_pages = 1;
 VAR_7->args.page_zeroing = 1;
 VAR_7->args.page_replace = 1;
 FUNC_2(VAR_3, VAR_4, VAR_8, VAR_9, VAR_0);
 VAR_3->read.attr_ver = FUNC_1(VAR_6);
 if (VAR_6->async_read) {
  VAR_3->ff = FUNC_0(VAR_5);
  VAR_7->args.end = FUNC_3;
  VAR_10 = FUNC_4(VAR_6, &VAR_7->args, VAR_1);
  if (!VAR_10)
   return;
 } else {
  VAR_10 = FUNC_5(VAR_6, &VAR_7->args);
 }
 FUNC_3(VAR_6, &VAR_7->args, VAR_10);
}
