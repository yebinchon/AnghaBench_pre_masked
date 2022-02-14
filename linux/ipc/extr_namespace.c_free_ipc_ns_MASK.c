
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipc_namespace {int ns; int user_ns; int ucounts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ipc_namespace*) ;
 int FUNC_2 (struct ipc_namespace*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ipc_namespace*) ;
 int FUNC_6 (struct ipc_namespace*) ;

__attribute__((used)) static void FUNC_7(struct ipc_namespace *VAR_0)
{
 FUNC_5(VAR_0);
 FUNC_2(VAR_0);
 FUNC_6(VAR_0);

 FUNC_0(VAR_0->ucounts);
 FUNC_4(VAR_0->user_ns);
 FUNC_3(&VAR_0->ns);
 FUNC_1(VAR_0);
}
