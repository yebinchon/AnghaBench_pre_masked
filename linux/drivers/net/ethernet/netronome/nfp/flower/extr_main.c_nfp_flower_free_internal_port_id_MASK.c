
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int port_ids; } ;
struct nfp_flower_priv {TYPE_1__ internal_ports; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct nfp_flower_priv*,struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nfp_app *VAR_0, struct net_device *VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_0->priv;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 if (!VAR_3)
  return;

 FUNC_2(&VAR_2->internal_ports.lock);
 FUNC_0(&VAR_2->internal_ports.port_ids, VAR_3);
 FUNC_3(&VAR_2->internal_ports.lock);
}
