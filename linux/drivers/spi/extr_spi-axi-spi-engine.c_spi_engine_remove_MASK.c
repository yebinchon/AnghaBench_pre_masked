
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct spi_engine {int clk; int ref_clk; scalar_t__ base; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct spi_master*) ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int ) ;
 struct spi_master* FUNC_4 (int ) ;
 struct spi_engine* FUNC_5 (struct spi_master*) ;
 int FUNC_6 (struct spi_master*) ;
 int FUNC_7 (struct spi_master*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_3)
{
 struct spi_master *VAR_4 = FUNC_4(FUNC_2(VAR_3));
 struct spi_engine *VAR_5 = FUNC_5(VAR_4);
 int VAR_6 = FUNC_3(VAR_3, 0);

 FUNC_7(VAR_4);

 FUNC_1(VAR_6, VAR_4);

 FUNC_6(VAR_4);

 FUNC_8(0xff, VAR_5->base + VAR_1);
 FUNC_8(0x00, VAR_5->base + VAR_0);
 FUNC_8(0x01, VAR_5->base + VAR_2);

 FUNC_0(VAR_5->ref_clk);
 FUNC_0(VAR_5->clk);

 return 0;
}
