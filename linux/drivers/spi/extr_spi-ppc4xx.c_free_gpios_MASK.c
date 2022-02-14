
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ppc4xx_spi {int * gpios; TYPE_1__* master; } ;
struct TYPE_2__ {int num_chipselect; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ppc4xx_spi *VAR_0)
{
 if (VAR_0->master->num_chipselect) {
  int VAR_1;
  for (VAR_1 = 0; VAR_1 < VAR_0->master->num_chipselect; VAR_1++)
   if (FUNC_1(VAR_0->gpios[VAR_1]))
    FUNC_0(VAR_0->gpios[VAR_1]);

  FUNC_2(VAR_0->gpios);
  VAR_0->gpios = ((void*)0);
 }
}
