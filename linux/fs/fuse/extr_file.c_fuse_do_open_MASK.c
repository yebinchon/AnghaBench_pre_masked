
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fuse_open_out {int open_flags; scalar_t__ fh; } ;
struct fuse_file {int open_flags; int nodeid; scalar_t__ fh; } ;
struct fuse_conn {int no_opendir; int no_open; } ;
struct file {struct fuse_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct fuse_file* FUNC_0 (struct fuse_conn*) ;
 int FUNC_1 (struct fuse_file*) ;
 int FUNC_2 (struct fuse_conn*,int ,struct file*,int,struct fuse_open_out*) ;

int FUNC_3(struct fuse_conn *VAR_7, u64 VAR_8, struct file *VAR_9,
   bool VAR_10)
{
 struct fuse_file *VAR_11;
 int VAR_12 = VAR_10 ? VAR_6 : VAR_5;

 VAR_11 = FUNC_0(VAR_7);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->fh = 0;

 VAR_11->open_flags = VAR_4 | (VAR_10 ? VAR_2 : 0);
 if (VAR_10 ? !VAR_7->no_opendir : !VAR_7->no_open) {
  struct fuse_open_out VAR_13;
  int VAR_14;

  VAR_14 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_12, &VAR_13);
  if (!VAR_14) {
   VAR_11->fh = VAR_13.fh;
   VAR_11->open_flags = VAR_13.open_flags;

  } else if (VAR_14 != -VAR_1) {
   FUNC_1(VAR_11);
   return VAR_14;
  } else {
   if (VAR_10)
    VAR_7->no_opendir = 1;
   else
    VAR_7->no_open = 1;
  }
 }

 if (VAR_10)
  VAR_11->open_flags &= ~VAR_3;

 VAR_11->nodeid = VAR_8;
 VAR_9->private_data = VAR_11;

 return 0;
}
