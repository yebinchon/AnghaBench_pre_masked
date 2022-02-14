
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_rpcwaitq; int cl_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct nfs_client *VAR_1)
{
 FUNC_3();
 FUNC_0(VAR_0, &VAR_1->cl_state);
 FUNC_2();
 FUNC_4(&VAR_1->cl_state, VAR_0);
 FUNC_1(&VAR_1->cl_rpcwaitq);
}
