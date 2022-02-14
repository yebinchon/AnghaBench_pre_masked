
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp_upstream_ops {int (* module_remove ) (int ) ;} ;
struct sfp_bus {int upstream; } ;


 struct sfp_upstream_ops* FUNC_0 (struct sfp_bus*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct sfp_bus *VAR_0)
{
 const struct sfp_upstream_ops *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 && VAR_1->module_remove)
  VAR_1->module_remove(VAR_0->upstream);
}
