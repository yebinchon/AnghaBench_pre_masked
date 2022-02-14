
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {int dummy; } ;
struct TYPE_6__ {int len; char const* name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_8__ {int in_numargs; TYPE_2__* in_args; int opcode; } ;
struct TYPE_7__ {int size; char const* value; } ;


 int FUNC_0 (TYPE_3__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (struct fuse_conn*,TYPE_3__*,struct inode*,struct dentry*,int ) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct dentry *VAR_4,
   const char *VAR_5)
{
 struct fuse_conn *VAR_6 = FUNC_2(VAR_3);
 unsigned VAR_7 = FUNC_3(VAR_5) + 1;
 FUNC_0(VAR_2);

 VAR_2.opcode = VAR_0;
 VAR_2.in_numargs = 2;
 VAR_2.in_args[0].size = VAR_4->d_name.len + 1;
 VAR_2.in_args[0].value = VAR_4->d_name.name;
 VAR_2.in_args[1].size = VAR_7;
 VAR_2.in_args[1].value = VAR_5;
 return FUNC_1(VAR_6, &VAR_2, VAR_3, VAR_4, VAR_1);
}
