
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {int dummy; } ;


 int FUNC_0 (struct nfs_client*,unsigned long) ;
 int FUNC_1 (struct nfs_client*) ;

__attribute__((used)) static void FUNC_2(const struct nfs_server *VAR_0, unsigned long VAR_1)
{
 struct nfs_client *VAR_2 = VAR_0->nfs_client;

 if (!FUNC_1(VAR_2))
  FUNC_0(VAR_2, VAR_1);
}
