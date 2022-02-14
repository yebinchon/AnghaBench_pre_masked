
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gve_priv {int adminq_bus_addr; int adminq; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (struct gve_priv*) ;
 int FUNC_2 (struct gve_priv*) ;
 int FUNC_3 (struct gve_priv*) ;

void FUNC_4(struct device *VAR_1, struct gve_priv *VAR_2)
{
 if (!FUNC_3(VAR_2))
  return;
 FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_0, VAR_2->adminq, VAR_2->adminq_bus_addr);
 FUNC_2(VAR_2);
}
