
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct cred {int dummy; } ;
typedef int nfs4_stateid ;


 int FUNC_0 (struct nfs_server*,int *,struct cred const*) ;
 int FUNC_1 (int *,int const*) ;

__attribute__((used)) static void FUNC_2(struct nfs_server *VAR_0,
  const nfs4_stateid *VAR_1,
  const struct cred *VAR_2)
{
 nfs4_stateid VAR_3;

 FUNC_1(&VAR_3, VAR_1);
 FUNC_0(VAR_0, &VAR_3, VAR_2);
}
