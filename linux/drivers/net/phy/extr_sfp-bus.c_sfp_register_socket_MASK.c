
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp_socket_ops {int dummy; } ;
struct sfp_bus {scalar_t__ upstream_ops; struct sfp_socket_ops const* socket_ops; struct sfp* sfp; struct device* sfp_dev; } ;
struct sfp {int dummy; } ;
struct device {int fwnode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct sfp_bus* FUNC_2 (int ) ;
 int FUNC_3 (struct sfp_bus*) ;
 int FUNC_4 (struct sfp_bus*) ;
 int FUNC_5 (struct sfp_bus*) ;

struct sfp_bus *FUNC_6(struct device *VAR_0, struct sfp *VAR_1,
        const struct sfp_socket_ops *VAR_2)
{
 struct sfp_bus *VAR_3 = FUNC_2(VAR_0->fwnode);
 int VAR_4 = 0;

 if (VAR_3) {
  FUNC_0();
  VAR_3->sfp_dev = VAR_0;
  VAR_3->sfp = VAR_1;
  VAR_3->socket_ops = VAR_2;

  if (VAR_3->upstream_ops) {
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
