
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_rproc {int clk; int sw_reset; TYPE_1__* config; int pwr_reset; int boot_offset; int boot_base; } ;
struct rproc {int bootaddr; int dev; struct st_rproc* priv; } ;
struct TYPE_2__ {scalar_t__ pwr_reset; scalar_t__ sw_reset; int bootaddr_mask; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct rproc *VAR_0)
{
 struct st_rproc *VAR_1 = VAR_0->priv;
 int VAR_2;

 FUNC_4(VAR_1->boot_base, VAR_1->boot_offset,
      VAR_1->config->bootaddr_mask, VAR_0->bootaddr);

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2) {
  FUNC_2(&VAR_0->dev, "Failed to enable clock\n");
  return VAR_2;
 }

 if (VAR_1->config->sw_reset) {
  VAR_2 = FUNC_6(VAR_1->sw_reset);
  if (VAR_2) {
   FUNC_2(&VAR_0->dev, "Failed to deassert S/W Reset\n");
   goto sw_reset_fail;
  }
 }

 if (VAR_1->config->pwr_reset) {
  VAR_2 = FUNC_6(VAR_1->pwr_reset);
  if (VAR_2) {
   FUNC_2(&VAR_0->dev, "Failed to deassert Power Reset\n");
   goto pwr_reset_fail;
  }
 }

 FUNC_3(&VAR_0->dev, "Started from 0x%x\n", VAR_0->bootaddr);

 return 0;


pwr_reset_fail:
 if (VAR_1->config->pwr_reset)
  FUNC_5(VAR_1->sw_reset);
sw_reset_fail:
 FUNC_0(VAR_1->clk);

 return VAR_2;
}
