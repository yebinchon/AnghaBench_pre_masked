
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_client {int cl_rpc_users; } ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_client*) ;

__attribute__((used)) static __be32 FUNC_2(struct nfs4_client *VAR_2)
{
 if (FUNC_0(&VAR_2->cl_rpc_users))
  return VAR_1;
 FUNC_1(VAR_2);
 return VAR_0;
}
