
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* client_tracking_ops; } ;
struct nfs4_client {int net; } ;
struct TYPE_2__ {int (* remove ) (struct nfs4_client*) ;} ;


 struct nfsd_net* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct nfs4_client*) ;

void
FUNC_2(struct nfs4_client *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_0(VAR_1->net, VAR_0);

 if (VAR_2->client_tracking_ops)
  VAR_2->client_tracking_ops->remove(VAR_1);
}
