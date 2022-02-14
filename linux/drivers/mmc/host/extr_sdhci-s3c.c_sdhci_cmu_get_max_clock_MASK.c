
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_s3c {struct clk** clk_bus; } ;
struct sdhci_host {int dummy; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_1 (struct clk*,int ) ;
 struct sdhci_s3c* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_3(struct sdhci_host *VAR_2)
{
 struct sdhci_s3c *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4, VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct clk *VAR_7;

  VAR_7 = VAR_3->clk_bus[VAR_6];
  if (FUNC_0(VAR_7))
   continue;

  VAR_4 = FUNC_1(VAR_7, VAR_1);
  if (VAR_4 > VAR_5)
   VAR_5 = VAR_4;
 }

 return VAR_5;
}
