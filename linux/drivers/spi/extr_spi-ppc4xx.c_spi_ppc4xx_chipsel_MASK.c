
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {unsigned int chip_select; int mode; int master; } ;
struct ppc4xx_spi {int * gpios; TYPE_1__* master; } ;
struct TYPE_2__ {int num_chipselect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned int) ;
 struct ppc4xx_spi* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_3, int VAR_4)
{
 struct ppc4xx_spi *VAR_5 = FUNC_1(VAR_3->master);
 unsigned int VAR_6 = VAR_3->chip_select;
 unsigned int VAR_7;






 if (!VAR_5->master->num_chipselect || VAR_5->gpios[VAR_6] == -VAR_1)
  return;

 VAR_7 = VAR_3->mode & VAR_2 ? 1 : 0;
 if (VAR_4 == VAR_0)
  VAR_7 = !VAR_7;

 FUNC_0(VAR_5->gpios[VAR_6], VAR_7);
}
