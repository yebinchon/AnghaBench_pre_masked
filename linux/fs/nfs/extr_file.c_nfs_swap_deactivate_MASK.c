
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_clnt {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
struct TYPE_2__ {int host; } ;


 struct rpc_clnt* FUNC_0 (int ) ;
 int FUNC_1 (struct rpc_clnt*) ;

__attribute__((used)) static void FUNC_2(struct file *VAR_0)
{
 struct rpc_clnt *VAR_1 = FUNC_0(VAR_0->f_mapping->host);

 FUNC_1(VAR_1);
}
