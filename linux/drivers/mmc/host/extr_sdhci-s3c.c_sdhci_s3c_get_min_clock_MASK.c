
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_s3c {int* clk_rates; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct sdhci_s3c* FUNC_0 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sdhci_host *VAR_2)
{
 struct sdhci_s3c *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4, VAR_5 = VAR_1;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = VAR_3->clk_rates[VAR_6] / 256;
  if (!VAR_4)
   continue;
  if (VAR_4 < VAR_5)
   VAR_5 = VAR_4;
 }

 return VAR_5;
}
