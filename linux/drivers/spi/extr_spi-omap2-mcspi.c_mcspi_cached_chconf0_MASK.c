
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spi_device {struct omap2_mcspi_cs* controller_state; } ;
struct omap2_mcspi_cs {int chconf0; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct spi_device *VAR_0)
{
 struct omap2_mcspi_cs *VAR_1 = VAR_0->controller_state;

 return VAR_1->chconf0;
}
