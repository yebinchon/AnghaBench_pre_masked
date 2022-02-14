
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_page_desc {int length; } ;
struct TYPE_2__ {int out_pages; } ;
struct fuse_args_pages {int num_pages; TYPE_1__ args; struct fuse_page_desc* descs; struct page** pages; } ;
struct fuse_io_args {struct fuse_args_pages ap; } ;
struct fuse_file {int open_flags; } ;
struct fuse_conn {int dummy; } ;
struct file {struct fuse_file* private_data; } ;
struct dir_context {int pos; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct file*) ;
 int FUNC_3 (struct fuse_conn*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct fuse_io_args*,struct file*,int ,int ,int ) ;
 int FUNC_7 (struct file*,int ) ;
 scalar_t__ FUNC_8 (struct fuse_conn*,TYPE_1__*) ;
 int FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*,struct dir_context*) ;
 struct fuse_conn* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,struct file*,struct dir_context*) ;
 scalar_t__ FUNC_14 (int ,scalar_t__,struct file*,struct dir_context*,int ) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_6, struct dir_context *VAR_7)
{
 int VAR_8;
 ssize_t VAR_9;
 struct page *VAR_10;
 struct inode *VAR_11 = FUNC_2(VAR_6);
 struct fuse_conn *VAR_12 = FUNC_11(VAR_11);
 struct fuse_io_args VAR_13 = {};
 struct fuse_args_pages *VAR_14 = &VAR_13.ap;
 struct fuse_page_desc VAR_15 = { .length = VAR_5 };
 u64 VAR_16 = 0;
 bool VAR_17;

 VAR_10 = FUNC_1(VAR_4);
 if (!VAR_10)
  return -VAR_0;

 VAR_8 = FUNC_10(VAR_11, VAR_7);
 VAR_14->args.out_pages = 1;
 VAR_14->num_pages = 1;
 VAR_14->pages = &VAR_10;
 VAR_14->descs = &VAR_15;
 if (VAR_8) {
  VAR_16 = FUNC_3(VAR_12);
  FUNC_6(&VAR_13, VAR_6, VAR_7->pos, VAR_5,
        VAR_3);
 } else {
  FUNC_6(&VAR_13, VAR_6, VAR_7->pos, VAR_5,
        VAR_2);
 }
 VAR_17 = FUNC_5(VAR_11);
 VAR_9 = FUNC_8(VAR_12, &VAR_14->args);
 FUNC_9(VAR_11, VAR_17);
 if (VAR_9 >= 0) {
  if (!VAR_9) {
   struct fuse_file *VAR_18 = VAR_6->private_data;

   if (VAR_18->open_flags & VAR_1)
    FUNC_7(VAR_6, VAR_7->pos);
  } else if (VAR_8) {
   VAR_9 = FUNC_14(FUNC_12(VAR_10), VAR_9,
      VAR_6, VAR_7, VAR_16);
  } else {
   VAR_9 = FUNC_13(FUNC_12(VAR_10), VAR_9, VAR_6,
         VAR_7);
  }
 }

 FUNC_0(VAR_10);
 FUNC_4(VAR_11);
 return VAR_9;
}
