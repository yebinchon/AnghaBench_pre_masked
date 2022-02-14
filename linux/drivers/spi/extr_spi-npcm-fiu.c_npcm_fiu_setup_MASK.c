
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {size_t chip_select; int max_speed_hz; struct spi_controller* master; } ;
struct spi_controller {int dummy; } ;
struct npcm_fiu_spi {int clk; int clkrate; struct npcm_fiu_chip* chip; } ;
struct npcm_fiu_chip {size_t chipselect; int clkrate; struct npcm_fiu_spi* fiu; } ;


 int FUNC_0 (int ) ;
 struct npcm_fiu_spi* FUNC_1 (struct spi_controller*) ;

__attribute__((used)) static int FUNC_2(struct spi_device *VAR_0)
{
 struct spi_controller *VAR_1 = VAR_0->master;
 struct npcm_fiu_spi *VAR_2 = FUNC_1(VAR_1);
 struct npcm_fiu_chip *VAR_3;

 VAR_3 = &VAR_2->chip[VAR_0->chip_select];
 VAR_3->fiu = VAR_2;
 VAR_3->chipselect = VAR_0->chip_select;
 VAR_3->clkrate = VAR_0->max_speed_hz;

 VAR_2->clkrate = FUNC_0(VAR_2->clk);

 return 0;
}
