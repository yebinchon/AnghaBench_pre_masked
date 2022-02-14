
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_master {int dummy; } ;
struct omap2_mcspi_regs {int wakeupenable; } ;
struct omap2_mcspi {int dev; struct omap2_mcspi_regs ctx; struct spi_master* master; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_master*,int ,int ) ;
 int FUNC_1 (struct spi_master*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct omap2_mcspi *VAR_2)
{
 struct spi_master *VAR_3 = VAR_2->master;
 struct omap2_mcspi_regs *VAR_4 = &VAR_2->ctx;
 int VAR_5 = 0;

 VAR_5 = FUNC_2(VAR_2->dev);
 if (VAR_5 < 0) {
  FUNC_5(VAR_2->dev);

  return VAR_5;
 }

 FUNC_0(VAR_3, VAR_0,
   VAR_1);
 VAR_4->wakeupenable = VAR_1;

 FUNC_1(VAR_3);
 FUNC_3(VAR_2->dev);
 FUNC_4(VAR_2->dev);
 return 0;
}
