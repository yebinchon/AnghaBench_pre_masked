
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_page_desc {int length; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_4__ {int out_pages; int out_argvar; int page_zeroing; int out_numargs; TYPE_1__* out_args; int nodeid; int opcode; } ;
struct fuse_args_pages {int num_pages; TYPE_2__ args; struct fuse_page_desc* descs; struct page** pages; } ;
typedef int ssize_t ;
struct TYPE_3__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct fuse_conn*,TYPE_2__*) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 char* FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_3, struct page *VAR_4)
{
 struct fuse_conn *VAR_5 = FUNC_3(VAR_3);
 struct fuse_page_desc VAR_6 = { .length = VAR_2 - 1 };
 struct fuse_args_pages VAR_7 = {
  .num_pages = 1,
  .pages = &VAR_4,
  .descs = &VAR_6,
 };
 char *VAR_8;
 ssize_t VAR_9;

 VAR_7.args.opcode = VAR_1;
 VAR_7.args.nodeid = FUNC_4(VAR_3);
 VAR_7.args.out_pages = 1;
 VAR_7.args.out_argvar = 1;
 VAR_7.args.page_zeroing = 1;
 VAR_7.args.out_numargs = 1;
 VAR_7.args.out_args[0].size = VAR_6.length;
 VAR_9 = FUNC_2(VAR_5, &VAR_7.args);

 FUNC_1(VAR_3);

 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_0(VAR_9 >= VAR_2))
  return -VAR_0;

 VAR_8 = FUNC_5(VAR_4);
 VAR_8[VAR_9] = '\0';

 return 0;
}
