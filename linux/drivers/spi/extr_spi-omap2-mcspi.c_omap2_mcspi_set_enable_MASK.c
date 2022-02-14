
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_cs {int chctrl0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spi_device const*,int ) ;
 int FUNC_1 (struct spi_device const*,int ,int ) ;

__attribute__((used)) static void FUNC_2(const struct spi_device *VAR_2, int VAR_3)
{
 struct omap2_mcspi_cs *VAR_4 = VAR_2->controller_state;
 u32 VAR_5;

 VAR_5 = VAR_4->chctrl0;
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 VAR_4->chctrl0 = VAR_5;
 FUNC_1(VAR_2, VAR_0, VAR_4->chctrl0);

 FUNC_0(VAR_2, VAR_0);
}
