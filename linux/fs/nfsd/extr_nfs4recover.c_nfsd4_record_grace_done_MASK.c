
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* client_tracking_ops; } ;
struct TYPE_2__ {int (* grace_done ) (struct nfsd_net*) ;} ;


 int FUNC_0 (struct nfsd_net*) ;

void
FUNC_1(struct nfsd_net *VAR_0)
{
 if (VAR_0->client_tracking_ops)
  VAR_0->client_tracking_ops->grace_done(VAR_0);
}
