
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_rename2_in {unsigned int flags; void* newdir; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_7__ {int len; struct fuse_rename2_in* name; } ;
struct dentry {TYPE_2__ d_name; } ;
struct TYPE_8__ {int opcode; int in_numargs; TYPE_1__* in_args; void* nodeid; } ;
struct TYPE_6__ {size_t size; struct fuse_rename2_in* value; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__) ;
 unsigned int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (struct dentry*) ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct fuse_conn*,TYPE_3__*) ;
 int FUNC_8 (int ) ;
 struct fuse_conn* FUNC_9 (struct inode*) ;
 void* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct fuse_rename2_in*,int ,size_t) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_3, struct dentry *VAR_4,
         struct inode *VAR_5, struct dentry *VAR_6,
         unsigned int VAR_7, int VAR_8, size_t VAR_9)
{
 int VAR_10;
 struct fuse_rename2_in VAR_11;
 struct fuse_conn *VAR_12 = FUNC_9(VAR_3);
 FUNC_0(VAR_2);

 FUNC_11(&VAR_11, 0, VAR_9);
 VAR_11.newdir = FUNC_10(VAR_5);
 VAR_11.flags = VAR_7;
 VAR_2.opcode = VAR_8;
 VAR_2.nodeid = FUNC_10(VAR_3);
 VAR_2.in_numargs = 3;
 VAR_2.in_args[0].size = VAR_9;
 VAR_2.in_args[0].value = &VAR_11;
 VAR_2.in_args[1].size = VAR_4->d_name.len + 1;
 VAR_2.in_args[1].value = VAR_4->d_name.name;
 VAR_2.in_args[2].size = VAR_6->d_name.len + 1;
 VAR_2.in_args[2].value = VAR_6->d_name.name;
 VAR_10 = FUNC_7(VAR_12, &VAR_2);
 if (!VAR_10) {

  FUNC_4(FUNC_1(VAR_4));
  FUNC_8(FUNC_1(VAR_4));

  if (VAR_7 & VAR_1) {
   FUNC_4(FUNC_1(VAR_6));
   FUNC_8(FUNC_1(VAR_6));
  }

  FUNC_3(VAR_3);
  if (VAR_3 != VAR_5)
   FUNC_3(VAR_5);


  if (!(VAR_7 & VAR_1) && FUNC_2(VAR_6)) {
   FUNC_4(FUNC_1(VAR_6));
   FUNC_6(VAR_6);
   FUNC_8(FUNC_1(VAR_6));
  }
 } else if (VAR_10 == -VAR_0) {





  FUNC_5(VAR_4);
  if (FUNC_2(VAR_6))
   FUNC_5(VAR_6);
 }

 return VAR_10;
}
