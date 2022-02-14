
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_omap_host {int pbias_enabled; int pbias; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sdhci_omap_host *VAR_0,
    bool VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_0->dev;

 if (FUNC_0(VAR_0->pbias))
  return 0;

 if (VAR_1) {
  VAR_3 = FUNC_4(VAR_0->pbias, VAR_2, VAR_2);
  if (VAR_3) {
   FUNC_1(VAR_4, "pbias set voltage failed\n");
   return VAR_3;
  }

  if (VAR_0->pbias_enabled)
   return 0;

  VAR_3 = FUNC_3(VAR_0->pbias);
  if (VAR_3) {
   FUNC_1(VAR_4, "pbias reg enable fail\n");
   return VAR_3;
  }

  VAR_0->pbias_enabled = 1;
 } else {
  if (!VAR_0->pbias_enabled)
   return 0;

  VAR_3 = FUNC_2(VAR_0->pbias);
  if (VAR_3) {
   FUNC_1(VAR_4, "pbias reg disable fail\n");
   return VAR_3;
  }
  VAR_0->pbias_enabled = 0;
 }

 return 0;
}
