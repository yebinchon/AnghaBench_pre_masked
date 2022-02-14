
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u64 ;
struct kstat {int dummy; } ;
struct inode {int i_mode; } ;
struct TYPE_11__ {int mode; } ;
struct fuse_getattr_in {TYPE_4__ attr; int fh; int getattr_flags; } ;
struct fuse_file {int fh; } ;
struct fuse_conn {int dummy; } ;
struct fuse_attr_out {TYPE_4__ attr; int fh; int getattr_flags; } ;
struct file {struct fuse_file* private_data; } ;
typedef int outarg ;
typedef int inarg ;
struct TYPE_10__ {int in_numargs; int out_numargs; TYPE_2__* out_args; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_9__ {int size; struct fuse_getattr_in* value; } ;
struct TYPE_8__ {int size; struct fuse_getattr_in* value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (struct fuse_getattr_in*) ;
 int FUNC_3 (struct inode*,TYPE_4__*,int ,int ) ;
 int FUNC_4 (struct inode*,TYPE_4__*,struct kstat*) ;
 int FUNC_5 (struct fuse_conn*) ;
 int FUNC_6 (struct fuse_conn*,TYPE_3__*) ;
 struct fuse_conn* FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct fuse_getattr_in*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_5, struct kstat *VAR_6,
      struct file *VAR_7)
{
 int VAR_8;
 struct fuse_getattr_in VAR_9;
 struct fuse_attr_out VAR_10;
 struct fuse_conn *VAR_11 = FUNC_7(VAR_5);
 FUNC_0(VAR_4);
 u64 VAR_12;

 VAR_12 = FUNC_5(VAR_11);

 FUNC_10(&VAR_9, 0, sizeof(VAR_9));
 FUNC_10(&VAR_10, 0, sizeof(VAR_10));

 if (VAR_7 && FUNC_1(VAR_5->i_mode)) {
  struct fuse_file *VAR_13 = VAR_7->private_data;

  VAR_9.getattr_flags |= VAR_2;
  VAR_9.fh = VAR_13->fh;
 }
 VAR_4.opcode = VAR_1;
 VAR_4.nodeid = FUNC_8(VAR_5);
 VAR_4.in_numargs = 1;
 VAR_4.in_args[0].size = sizeof(VAR_9);
 VAR_4.in_args[0].value = &VAR_9;
 VAR_4.out_numargs = 1;
 VAR_4.out_args[0].size = sizeof(VAR_10);
 VAR_4.out_args[0].value = &VAR_10;
 VAR_8 = FUNC_6(VAR_11, &VAR_4);
 if (!VAR_8) {
  if ((VAR_5->i_mode ^ VAR_10.attr.mode) & VAR_3) {
   FUNC_9(VAR_5);
   VAR_8 = -VAR_0;
  } else {
   FUNC_3(VAR_5, &VAR_10.attr,
            FUNC_2(&VAR_10),
            VAR_12);
   if (VAR_6)
    FUNC_4(VAR_5, &VAR_10.attr, VAR_6);
  }
 }
 return VAR_8;
}
