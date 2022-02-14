
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_message {int * rpc_proc; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 size_t VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct rpc_message *VAR_2,
  struct dentry *VAR_3,
  struct inode *VAR_4)
{
 VAR_2->rpc_proc = &VAR_1[VAR_0];
}
