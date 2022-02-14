
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_params {scalar_t__ key; } ;
struct ipc_ops {int dummy; } ;
struct ipc_namespace {int dummy; } ;
struct ipc_ids {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ipc_namespace*,struct ipc_ids*,struct ipc_ops const*,struct ipc_params*) ;
 int FUNC_1 (struct ipc_namespace*,struct ipc_ids*,struct ipc_ops const*,struct ipc_params*) ;

int FUNC_2(struct ipc_namespace *VAR_1, struct ipc_ids *VAR_2,
   const struct ipc_ops *VAR_3, struct ipc_params *VAR_4)
{
 if (VAR_4->key == VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
