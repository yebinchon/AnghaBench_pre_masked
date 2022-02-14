
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsd_net {TYPE_1__* client_tracking_ops; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int (* exit ) (struct net*) ;} ;


 struct nfsd_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct net*) ;

void
FUNC_2(struct net *VAR_1)
{
 struct nfsd_net *VAR_2 = FUNC_0(VAR_1, VAR_0);

 if (VAR_2->client_tracking_ops) {
  if (VAR_2->client_tracking_ops->exit)
   VAR_2->client_tracking_ops->exit(VAR_1);
  VAR_2->client_tracking_ops = ((void*)0);
 }
}
