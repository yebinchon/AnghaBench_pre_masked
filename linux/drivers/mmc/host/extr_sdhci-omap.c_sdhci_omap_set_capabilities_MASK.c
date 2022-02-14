
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_omap_host {struct device* dev; } ;
struct regulator {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 int FUNC_1 (struct regulator*) ;
 int VAR_5 ;
 struct regulator* FUNC_2 (struct device*,char*) ;
 scalar_t__ FUNC_3 (struct regulator*,int ,int ) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (struct sdhci_omap_host*,int ) ;
 int FUNC_6 (struct sdhci_omap_host*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct sdhci_omap_host *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;
 struct device *VAR_9 = VAR_6->dev;
 struct regulator *VAR_10;

 VAR_10 = FUNC_2(VAR_9, "vqmmc");
 if (FUNC_0(VAR_10)) {
  VAR_8 = FUNC_1(VAR_10);
  goto reg_put;
 }


 VAR_7 = FUNC_5(VAR_6, VAR_5);
 VAR_7 &= ~(VAR_0 | VAR_1 | VAR_2);

 if (FUNC_3(VAR_10, VAR_4, VAR_4))
  VAR_7 |= VAR_2;
 if (FUNC_3(VAR_10, VAR_3, VAR_3))
  VAR_7 |= VAR_0;

 FUNC_6(VAR_6, VAR_5, VAR_7);

reg_put:
 FUNC_4(VAR_10);

 return VAR_8;
}
