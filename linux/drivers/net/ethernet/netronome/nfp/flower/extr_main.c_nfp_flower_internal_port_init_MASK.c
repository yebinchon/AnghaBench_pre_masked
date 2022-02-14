
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port_ids; int lock; } ;
struct nfp_flower_priv {TYPE_1__ internal_ports; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct nfp_flower_priv *VAR_0)
{
 FUNC_1(&VAR_0->internal_ports.lock);
 FUNC_0(&VAR_0->internal_ports.port_ids);
}
