
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_net {int client_lock; } ;
struct nfs4_client {int net; } ;


 struct nfsd_net* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs4_client*) ;

__attribute__((used)) static void
FUNC_4(struct nfs4_client *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_0(VAR_1->net, VAR_0);

 FUNC_1(&VAR_2->client_lock);
 FUNC_3(VAR_1);
 FUNC_2(&VAR_2->client_lock);
}
