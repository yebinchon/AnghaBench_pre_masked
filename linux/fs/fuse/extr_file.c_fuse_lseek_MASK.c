
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct inode {TYPE_4__* i_sb; } ;
struct fuse_lseek_out {int offset; } ;
struct fuse_lseek_in {int offset; int whence; int fh; } ;
struct fuse_file {int nodeid; int fh; } ;
struct fuse_conn {int no_lseek; } ;
struct file {struct fuse_file* private_data; TYPE_1__* f_mapping; } ;
typedef int outarg ;
typedef int loff_t ;
typedef int inarg ;
struct TYPE_12__ {int in_numargs; int out_numargs; TYPE_3__* out_args; TYPE_2__* in_args; int nodeid; int opcode; } ;
struct TYPE_11__ {int s_maxbytes; } ;
struct TYPE_10__ {int size; struct fuse_lseek_out* value; } ;
struct TYPE_9__ {int size; struct fuse_lseek_in* value; } ;
struct TYPE_8__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__) ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_1 (struct fuse_conn*,TYPE_5__*) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 (struct file*,int,int) ;
 struct fuse_conn* FUNC_4 (struct inode*) ;
 int FUNC_5 (struct file*,int ,int ) ;

__attribute__((used)) static loff_t FUNC_6(struct file *VAR_3, loff_t VAR_4, int VAR_5)
{
 struct inode *VAR_6 = VAR_3->f_mapping->host;
 struct fuse_conn *VAR_7 = FUNC_4(VAR_6);
 struct fuse_file *VAR_8 = VAR_3->private_data;
 FUNC_0(VAR_2);
 struct fuse_lseek_in VAR_9 = {
  .fh = VAR_8->fh,
  .offset = VAR_4,
  .whence = VAR_5
 };
 struct fuse_lseek_out VAR_10;
 int VAR_11;

 if (VAR_7->no_lseek)
  goto fallback;

 VAR_2.opcode = VAR_1;
 VAR_2.nodeid = VAR_8->nodeid;
 VAR_2.in_numargs = 1;
 VAR_2.in_args[0].size = sizeof(VAR_9);
 VAR_2.in_args[0].value = &VAR_9;
 VAR_2.out_numargs = 1;
 VAR_2.out_args[0].size = sizeof(VAR_10);
 VAR_2.out_args[0].value = &VAR_10;
 VAR_11 = FUNC_1(VAR_7, &VAR_2);
 if (VAR_11) {
  if (VAR_11 == -VAR_0) {
   VAR_7->no_lseek = 1;
   goto fallback;
  }
  return VAR_11;
 }

 return FUNC_5(VAR_3, VAR_10.offset, VAR_6->i_sb->s_maxbytes);

fallback:
 VAR_11 = FUNC_2(VAR_6, VAR_3);
 if (!VAR_11)
  return FUNC_3(VAR_3, VAR_4, VAR_5);
 else
  return VAR_11;
}
