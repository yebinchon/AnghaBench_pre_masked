
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_stid {int dummy; } ;
struct nfs4_ol_stateid {int dummy; } ;
struct nfs4_client {int dummy; } ;


 struct nfs4_stid* FUNC_0 (struct nfs4_client*,int ,int ) ;
 int VAR_0 ;
 struct nfs4_ol_stateid* FUNC_1 (struct nfs4_stid*) ;
 int VAR_1 ;

__attribute__((used)) static struct nfs4_ol_stateid * FUNC_2(struct nfs4_client *VAR_2)
{
 struct nfs4_stid *VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 return FUNC_1(VAR_3);
}
