
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sdhci_pltfm_host {int clk; } ;


 scalar_t__ FUNC_0 (int ,unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct sdhci_pltfm_host *VAR_1,
       unsigned int VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_0(FUNC_1(VAR_1->clk), VAR_2);
 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 return VAR_3;
}
