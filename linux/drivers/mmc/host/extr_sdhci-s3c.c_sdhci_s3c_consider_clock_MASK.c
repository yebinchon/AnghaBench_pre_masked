
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_s3c {unsigned long* clk_rates; TYPE_1__* pdev; scalar_t__ no_divider; struct clk** clk_bus; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 unsigned int VAR_0 ;
 unsigned long FUNC_1 (struct clk*,unsigned int) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned long,unsigned int,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct sdhci_s3c *VAR_1,
          unsigned int VAR_2,
          unsigned int VAR_3)
{
 unsigned long VAR_4;
 struct clk *VAR_5 = VAR_1->clk_bus[VAR_2];
 int VAR_6;

 if (FUNC_0(VAR_5))
  return VAR_0;





 if (VAR_1->no_divider) {
  VAR_4 = FUNC_1(VAR_5, VAR_3);
  return VAR_3 - VAR_4;
 }

 VAR_4 = VAR_1->clk_rates[VAR_2];

 for (VAR_6 = 0; VAR_6 <= 8; ++VAR_6) {
  if ((VAR_4 >> VAR_6) <= VAR_3)
   break;
 }

 if (VAR_6 > 8) {
  FUNC_2(&VAR_1->pdev->dev,
   "clk %d: rate %ld, min rate %lu > wanted %u\n",
   VAR_2, VAR_4, VAR_4 / 256, VAR_3);
  return VAR_0;
 }

 FUNC_2(&VAR_1->pdev->dev, "clk %d: rate %ld, want %d, got %ld\n",
  VAR_2, VAR_4, VAR_3, VAR_4 >> VAR_6);

 return VAR_3 - (VAR_4 >> VAR_6);
}
