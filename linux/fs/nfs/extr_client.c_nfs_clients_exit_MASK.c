
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {int nfs_volume_list; int nfs_client_list; } ;
struct net {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct nfs_net* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*) ;
 int VAR_0 ;
 int FUNC_4 (struct nfs_net*) ;

void FUNC_5(struct net *VAR_1)
{
 struct nfs_net *VAR_2 = FUNC_2(VAR_1, VAR_0);

 FUNC_4(VAR_2);
 FUNC_3(VAR_1);
 FUNC_0(!FUNC_1(&VAR_2->nfs_client_list));
 FUNC_0(!FUNC_1(&VAR_2->nfs_volume_list));
}
