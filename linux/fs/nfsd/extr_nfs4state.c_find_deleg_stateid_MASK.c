
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stid {int dummy; } ;
struct nfs4_delegation {int dummy; } ;
struct nfs4_client {int dummy; } ;
typedef int stateid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfs4_delegation* FUNC_0 (struct nfs4_stid*) ;
 struct nfs4_stid* FUNC_1 (struct nfs4_client*,int *,int) ;

__attribute__((used)) static struct nfs4_delegation *FUNC_2(struct nfs4_client *VAR_2, stateid_t *VAR_3)
{
 struct nfs4_stid *VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3,
    VAR_0|VAR_1);
 if (!VAR_4)
  return ((void*)0);
 return FUNC_0(VAR_4);
}
