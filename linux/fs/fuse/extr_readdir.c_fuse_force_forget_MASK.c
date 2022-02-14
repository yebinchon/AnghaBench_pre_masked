
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct fuse_forget_in {int nlookup; } ;
struct fuse_conn {int dummy; } ;
struct file {int dummy; } ;
typedef int inarg ;
struct TYPE_6__ {int in_numargs; int force; int noreply; TYPE_1__* in_args; int nodeid; int opcode; } ;
struct TYPE_5__ {int size; struct fuse_forget_in* value; } ;


 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (struct fuse_conn*,TYPE_2__*) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 int FUNC_4 (struct fuse_forget_in*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct file *VAR_2, u64 VAR_3)
{
 struct inode *VAR_4 = FUNC_1(VAR_2);
 struct fuse_conn *VAR_5 = FUNC_3(VAR_4);
 struct fuse_forget_in VAR_6;
 FUNC_0(VAR_1);

 FUNC_4(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.nlookup = 1;
 VAR_1.opcode = VAR_0;
 VAR_1.nodeid = VAR_3;
 VAR_1.in_numargs = 1;
 VAR_1.in_args[0].size = sizeof(VAR_6);
 VAR_1.in_args[0].value = &VAR_6;
 VAR_1.force = 1;
 VAR_1.noreply = 1;

 FUNC_2(VAR_5, &VAR_1);

}
