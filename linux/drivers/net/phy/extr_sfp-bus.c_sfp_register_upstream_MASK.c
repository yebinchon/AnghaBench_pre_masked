
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp_upstream_ops {int dummy; } ;
struct sfp_bus {scalar_t__ sfp; void* upstream; struct sfp_upstream_ops const* upstream_ops; } ;
struct fwnode_handle {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sfp_bus* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct sfp_bus*) ;
 int FUNC_4 (struct sfp_bus*) ;
 int FUNC_5 (struct sfp_bus*) ;

struct sfp_bus *FUNC_6(struct fwnode_handle *VAR_0,
          void *VAR_1,
          const struct sfp_upstream_ops *VAR_2)
{
 struct sfp_bus *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;

 if (VAR_3) {
  FUNC_0();
  VAR_3->upstream_ops = VAR_2;
  VAR_3->upstream = VAR_1;

  if (VAR_3->sfp) {
   VAR_4 = FUNC_4(VAR_3);
   if (VAR_4)
    FUNC_5(VAR_3);
  }
  FUNC_1();
 }

 if (VAR_4) {
  FUNC_3(VAR_3);
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
