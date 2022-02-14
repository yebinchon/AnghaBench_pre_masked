
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsproxy {int ipc_ns; } ;
struct ns_common {int dummy; } ;
struct ipc_namespace {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ipc_namespace*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct ipc_namespace* FUNC_5 (struct ns_common*) ;

__attribute__((used)) static int FUNC_6(struct nsproxy *VAR_3, struct ns_common *VAR_4)
{
 struct ipc_namespace *VAR_5 = FUNC_5(VAR_4);
 if (!FUNC_3(VAR_5->user_ns, VAR_0) ||
     !FUNC_3(FUNC_0(), VAR_0))
  return -VAR_1;


 FUNC_1(VAR_2);
 FUNC_4(VAR_3->ipc_ns);
 VAR_3->ipc_ns = FUNC_2(VAR_5);
 return 0;
}
