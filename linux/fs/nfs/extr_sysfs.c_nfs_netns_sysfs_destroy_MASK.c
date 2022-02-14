
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_netns_client {int kobject; } ;
struct nfs_net {struct nfs_netns_client* nfs_client; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct nfs_net *VAR_1)
{
 struct nfs_netns_client *VAR_2 = VAR_1->nfs_client;

 if (VAR_2) {
  FUNC_2(&VAR_2->kobject, VAR_0);
  FUNC_0(&VAR_2->kobject);
  FUNC_1(&VAR_2->kobject);
  VAR_1->nfs_client = ((void*)0);
 }
}
