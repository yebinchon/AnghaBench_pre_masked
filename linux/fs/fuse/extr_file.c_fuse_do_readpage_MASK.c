
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct fuse_page_desc {scalar_t__ length; } ;
struct TYPE_5__ {int page_zeroing; int out_pages; } ;
struct TYPE_6__ {int num_pages; TYPE_2__ args; struct fuse_page_desc* descs; struct page** pages; } ;
struct fuse_io_args {TYPE_3__ ap; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct fuse_conn*) ;
 int FUNC_2 (struct fuse_io_args*,struct file*,int ,scalar_t__,int ) ;
 int FUNC_3 (struct inode*,int ,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct fuse_conn*,TYPE_2__*) ;
 int FUNC_5 (struct inode*,int ) ;
 struct fuse_conn* FUNC_6 (struct inode*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2, struct page *VAR_3)
{
 struct inode *VAR_4 = VAR_3->mapping->host;
 struct fuse_conn *VAR_5 = FUNC_6(VAR_4);
 loff_t VAR_6 = FUNC_7(VAR_3);
 struct fuse_page_desc VAR_7 = { .length = VAR_1 };
 struct fuse_io_args VAR_8 = {
  .ap.args.page_zeroing = 1,
  .ap.args.out_pages = 1,
  .ap.num_pages = 1,
  .ap.pages = &VAR_3,
  .ap.descs = &VAR_7,
 };
 ssize_t VAR_9;
 u64 VAR_10;






 FUNC_5(VAR_4, VAR_3->index);

 VAR_10 = FUNC_1(VAR_5);

 FUNC_2(&VAR_8, VAR_2, VAR_6, VAR_7.length, VAR_0);
 VAR_9 = FUNC_4(VAR_5, &VAR_8.ap.args);
 if (VAR_9 < 0)
  return VAR_9;



 if (VAR_9 < VAR_7.length)
  FUNC_3(VAR_4, VAR_10, VAR_9, &VAR_8.ap);

 FUNC_0(VAR_3);

 return 0;
}
