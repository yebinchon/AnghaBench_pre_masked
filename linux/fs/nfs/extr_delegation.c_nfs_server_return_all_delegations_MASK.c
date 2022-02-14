
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {struct nfs_client* nfs_client; } ;
struct nfs_client {int dummy; } ;


 int FUNC_0 (struct nfs_client*) ;
 int FUNC_1 (struct nfs_client*) ;
 int FUNC_2 (struct nfs_server*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct nfs_server *VAR_0)
{
 struct nfs_client *VAR_1 = VAR_0->nfs_client;
 bool VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0);
 FUNC_4();

 if (VAR_2) {
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
}
