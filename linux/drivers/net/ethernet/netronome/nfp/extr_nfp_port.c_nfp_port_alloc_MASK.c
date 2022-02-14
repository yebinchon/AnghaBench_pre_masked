
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_port {int type; int port_list; struct nfp_app* app; struct net_device* netdev; } ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
typedef enum nfp_port_type { ____Placeholder_nfp_port_type } nfp_port_type ;
struct TYPE_2__ {int ports; } ;


 int VAR_0 ;
 struct nfp_port* FUNC_0 (int ) ;
 int VAR_1 ;
 struct nfp_port* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

struct nfp_port *
FUNC_3(struct nfp_app *VAR_2, enum nfp_port_type VAR_3,
        struct net_device *VAR_4)
{
 struct nfp_port *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->netdev = VAR_4;
 VAR_5->type = VAR_3;
 VAR_5->app = VAR_2;

 FUNC_2(&VAR_5->port_list, &VAR_2->pf->ports);

 return VAR_5;
}
