
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int pbias_enabled; int dev; int pbias; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct omap_hsmmc_host *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_0->pbias))
  return 0;

 if (VAR_1) {
  if (VAR_0->pbias_enabled == 0) {
   VAR_2 = FUNC_3(VAR_0->pbias);
   if (VAR_2) {
    FUNC_1(VAR_0->dev, "pbias reg enable fail\n");
    return VAR_2;
   }
   VAR_0->pbias_enabled = 1;
  }
 } else {
  if (VAR_0->pbias_enabled == 1) {
   VAR_2 = FUNC_2(VAR_0->pbias);
   if (VAR_2) {
    FUNC_1(VAR_0->dev, "pbias reg disable fail\n");
    return VAR_2;
   }
   VAR_0->pbias_enabled = 0;
  }
 }

 return 0;
}
