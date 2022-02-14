
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_client {int async_copies; int cl_sessions; int cl_delegations; int cl_lo_states; } ;


 scalar_t__ FUNC_0 (struct nfs4_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct nfs4_client *VAR_0)
{
 return FUNC_0(VAR_0)



  || !FUNC_1(&VAR_0->cl_delegations)
  || !FUNC_1(&VAR_0->cl_sessions)
  || !FUNC_1(&VAR_0->async_copies);
}
