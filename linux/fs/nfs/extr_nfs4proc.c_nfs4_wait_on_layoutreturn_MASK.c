
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct rpc_task*) ;

__attribute__((used)) static bool
FUNC_2(struct inode *VAR_0, struct rpc_task *VAR_1)
{
 if (VAR_0 == ((void*)0) || !FUNC_0(VAR_0))
  return 0;

 return FUNC_1(VAR_0, VAR_1);
}
