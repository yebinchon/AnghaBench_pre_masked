
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfp_upstream_ops {int (* disconnect_phy ) (int ) ;int (* detach ) (int ,struct sfp_bus*) ;} ;
struct sfp_bus {int registered; int upstream; scalar_t__ phydev; int sfp; TYPE_1__* socket_ops; scalar_t__ started; struct sfp_upstream_ops* upstream_ops; } ;
struct TYPE_2__ {int (* detach ) (int ) ;int (* stop ) (int ) ;} ;


 int FUNC_0 (int ,struct sfp_bus*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sfp_bus *VAR_0)
{
 const struct sfp_upstream_ops *VAR_1 = VAR_0->upstream_ops;

 if (VAR_0->registered) {
  VAR_0->upstream_ops->detach(VAR_0->upstream, VAR_0);
  if (VAR_0->started)
   VAR_0->socket_ops->stop(VAR_0->sfp);
  VAR_0->socket_ops->detach(VAR_0->sfp);
  if (VAR_0->phydev && VAR_1 && VAR_1->disconnect_phy)
   VAR_1->disconnect_phy(VAR_0->upstream);
 }
 VAR_0->registered = 0;
}
