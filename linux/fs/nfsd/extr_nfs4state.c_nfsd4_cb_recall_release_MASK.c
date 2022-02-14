
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_callback {int dummy; } ;
struct nfs4_delegation {int dl_stid; } ;


 struct nfs4_delegation* FUNC_0 (struct nfsd4_callback*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfsd4_callback *VAR_0)
{
 struct nfs4_delegation *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->dl_stid);
}
