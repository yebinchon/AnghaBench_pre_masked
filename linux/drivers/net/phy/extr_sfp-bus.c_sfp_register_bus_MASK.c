
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sfp_upstream_ops {int (* connect_phy ) (int ,scalar_t__) ;int (* attach ) (int ,struct sfp_bus*) ;int (* link_down ) (int ) ;} ;
struct sfp_bus {int registered; int upstream; struct sfp_upstream_ops* upstream_ops; int sfp; TYPE_1__* socket_ops; scalar_t__ started; scalar_t__ phydev; } ;
struct TYPE_2__ {int (* start ) (int ) ;int (* attach ) (int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sfp_bus*) ;

__attribute__((used)) static int FUNC_5(struct sfp_bus *VAR_0)
{
 const struct sfp_upstream_ops *VAR_1 = VAR_0->upstream_ops;
 int VAR_2;

 if (VAR_1) {
  if (VAR_1->link_down)
   VAR_1->link_down(VAR_0->upstream);
  if (VAR_1->connect_phy && VAR_0->phydev) {
   VAR_2 = VAR_1->connect_phy(VAR_0->upstream, VAR_0->phydev);
   if (VAR_2)
    return VAR_2;
  }
 }
 VAR_0->socket_ops->attach(VAR_0->sfp);
 if (VAR_0->started)
  VAR_0->socket_ops->start(VAR_0->sfp);
 VAR_0->upstream_ops->attach(VAR_0->upstream, VAR_0);
 VAR_0->registered = 1;
 return 0;
}
