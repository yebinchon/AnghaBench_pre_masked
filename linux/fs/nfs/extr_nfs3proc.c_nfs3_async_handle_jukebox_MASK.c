
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_task {int tk_status; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct rpc_task*,int ) ;
 int FUNC_2 (struct rpc_task*) ;

__attribute__((used)) static int
FUNC_3(struct rpc_task *VAR_3, struct inode *VAR_4)
{
 if (VAR_3->tk_status != -VAR_0)
  return 0;
 if (VAR_3->tk_status == -VAR_0)
  FUNC_0(VAR_4, VAR_1);
 VAR_3->tk_status = 0;
 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_2);
 return 1;
}
