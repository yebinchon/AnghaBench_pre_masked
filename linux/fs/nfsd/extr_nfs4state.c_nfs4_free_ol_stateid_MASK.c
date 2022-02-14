
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stid {int dummy; } ;
struct nfs4_ol_stateid {scalar_t__ st_stateowner; int st_clnt_odstate; } ;


 int FUNC_0 (int ,struct nfs4_stid*) ;
 int FUNC_1 (scalar_t__) ;
 struct nfs4_ol_stateid* FUNC_2 (struct nfs4_stid*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfs4_ol_stateid*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct nfs4_stid *VAR_1)
{
 struct nfs4_ol_stateid *VAR_2 = FUNC_2(VAR_1);

 FUNC_3(VAR_2->st_clnt_odstate);
 FUNC_4(VAR_2);
 if (VAR_2->st_stateowner)
  FUNC_1(VAR_2->st_stateowner);
 FUNC_0(VAR_0, VAR_1);
}
