
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_netns_client {int kobject; } ;
struct nfs_net {struct nfs_netns_client* nfs_client; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct nfs_netns_client* FUNC_1 (int ,struct net*) ;

void FUNC_2(struct nfs_net *VAR_2, struct net *VAR_3)
{
 struct nfs_netns_client *VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4) {
  VAR_2->nfs_client = VAR_4;
  FUNC_0(&VAR_4->kobject, VAR_0);
 }
}
