
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* client_tracking_ops; } ;
struct nfs4_client {int net; } ;
struct TYPE_2__ {int (* check ) (struct nfs4_client*) ;} ;


 int VAR_0 ;
 struct nfsd_net* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct nfs4_client*) ;

int
FUNC_2(struct nfs4_client *VAR_2)
{
 struct nfsd_net *VAR_3 = FUNC_0(VAR_2->net, VAR_1);

 if (VAR_3->client_tracking_ops)
  return VAR_3->client_tracking_ops->check(VAR_2);

 return -VAR_0;
}
