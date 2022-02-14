
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_ids; } ;
struct nfp_flower_priv {TYPE_1__ internal_ports; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 struct net_device* FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static struct net_device *
FUNC_3(struct nfp_app *VAR_0, int VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_0->priv;
 struct net_device *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(&VAR_2->internal_ports.port_ids, VAR_1);
 FUNC_2();

 return VAR_3;
}
