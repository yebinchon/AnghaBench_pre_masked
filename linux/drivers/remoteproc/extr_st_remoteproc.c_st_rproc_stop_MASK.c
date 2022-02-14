
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_rproc {int clk; int pwr_reset; TYPE_1__* config; int sw_reset; } ;
struct rproc {int dev; struct st_rproc* priv; } ;
struct TYPE_2__ {scalar_t__ pwr_reset; scalar_t__ sw_reset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct rproc *VAR_0)
{
 struct st_rproc *VAR_1 = VAR_0->priv;
 int VAR_2 = 0, VAR_3 = 0;

 if (VAR_1->config->sw_reset) {
  VAR_2 = FUNC_2(VAR_1->sw_reset);
  if (VAR_2)
   FUNC_1(&VAR_0->dev, "Failed to assert S/W Reset\n");
 }

 if (VAR_1->config->pwr_reset) {
  VAR_3 = FUNC_2(VAR_1->pwr_reset);
  if (VAR_3)
   FUNC_1(&VAR_0->dev, "Failed to assert Power Reset\n");
 }

 FUNC_0(VAR_1->clk);

 return VAR_2 ?: VAR_3;
}
