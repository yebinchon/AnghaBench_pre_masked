
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_master {int dummy; } ;
struct omap2_mcspi_regs {int modulctrl; } ;
struct omap2_mcspi {struct omap2_mcspi_regs ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct spi_master*,int ) ;
 int FUNC_1 (struct spi_master*,int ,int ) ;
 scalar_t__ FUNC_2 (struct spi_master*) ;
 struct omap2_mcspi* FUNC_3 (struct spi_master*) ;

__attribute__((used)) static void FUNC_4(struct spi_master *VAR_4)
{
 struct omap2_mcspi *VAR_5 = FUNC_3(VAR_4);
 struct omap2_mcspi_regs *VAR_6 = &VAR_5->ctx;
 u32 VAR_7;




 VAR_7 = FUNC_0(VAR_4, VAR_0);
 VAR_7 &= ~(VAR_3);
 if (FUNC_2(VAR_4)) {
  VAR_7 |= (VAR_1);
 } else {
  VAR_7 &= ~(VAR_1);
  VAR_7 |= VAR_2;
 }
 FUNC_1(VAR_4, VAR_0, VAR_7);

 VAR_6->modulctrl = VAR_7;
}
