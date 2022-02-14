
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_s3c {unsigned long* clk_rates; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 struct sdhci_s3c* FUNC_0 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sdhci_host *VAR_1)
{
 struct sdhci_s3c *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3, VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_3 = VAR_2->clk_rates[VAR_5];
  if (VAR_3 > VAR_4)
   VAR_4 = VAR_3;
 }

 return VAR_4;
}
