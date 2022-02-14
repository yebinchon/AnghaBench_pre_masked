
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_delegation {int dl_stid; int dl_clnt_odstate; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfs4_delegation*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nfs4_delegation *VAR_0)
{
 FUNC_2(VAR_0->dl_clnt_odstate);
 FUNC_1(VAR_0);
 FUNC_0(&VAR_0->dl_stid);
}
