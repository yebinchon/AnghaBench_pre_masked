
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rpc_task {int dummy; } ;
struct rpc_message {int dummy; } ;
struct rpc_call_ops {int dummy; } ;
struct nlm_rqst {int dummy; } ;


 scalar_t__ FUNC_0 (struct rpc_task*) ;
 int FUNC_1 (struct rpc_task*) ;
 struct rpc_task* FUNC_2 (struct nlm_rqst*,int ,struct rpc_message*,struct rpc_call_ops const*) ;
 int FUNC_3 (struct rpc_task*) ;

__attribute__((used)) static int FUNC_4(struct nlm_rqst *VAR_0, u32 VAR_1, struct rpc_message *VAR_2, const struct rpc_call_ops *VAR_3)
{
 struct rpc_task *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 FUNC_3(VAR_4);
 return 0;
}
