
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct intel_spi_boardinfo {int dummy; } ;
struct intel_spi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct intel_spi*) ;
 int FUNC_1 (struct intel_spi*) ;
 struct intel_spi_boardinfo* FUNC_2 (int *) ;
 struct intel_spi* FUNC_3 (int *,struct resource*,struct intel_spi_boardinfo*) ;
 struct resource* FUNC_4 (struct platform_device*,int ,int ) ;
 int FUNC_5 (struct platform_device*,struct intel_spi*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_2)
{
 struct intel_spi_boardinfo *VAR_3;
 struct intel_spi *VAR_4;
 struct resource *VAR_5;

 VAR_3 = FUNC_2(&VAR_2->dev);
 if (!VAR_3)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_2, VAR_1, 0);
 VAR_4 = FUNC_3(&VAR_2->dev, VAR_5, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_5(VAR_2, VAR_4);
 return 0;
}
