
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct ipc_namespace {int dummy; } ;


 unsigned long VAR_0 ;
 struct ipc_namespace* FUNC_0 (struct user_namespace*,struct ipc_namespace*) ;
 struct ipc_namespace* FUNC_1 (struct ipc_namespace*) ;

struct ipc_namespace *FUNC_2(unsigned long VAR_1,
 struct user_namespace *VAR_2, struct ipc_namespace *VAR_3)
{
 if (!(VAR_1 & VAR_0))
  return FUNC_1(VAR_3);
 return FUNC_0(VAR_2, VAR_3);
}
