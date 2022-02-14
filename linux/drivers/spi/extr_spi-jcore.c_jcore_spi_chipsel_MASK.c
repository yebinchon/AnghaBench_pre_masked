
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct spi_device {int chip_select; int master; } ;
struct jcore_spi {unsigned int cs_reg; TYPE_2__* master; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct jcore_spi*) ;
 struct jcore_spi* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spi_device *VAR_0, bool VAR_1)
{
 struct jcore_spi *VAR_2 = FUNC_2(VAR_0->master);
 u32 VAR_3 = 1U << (2 * VAR_0->chip_select);

 FUNC_0(VAR_2->master->dev.parent, "chipselect %d\n", VAR_0->chip_select);

 if (VAR_1)
  VAR_2->cs_reg |= VAR_3;
 else
  VAR_2->cs_reg &= ~VAR_3;

 FUNC_1(VAR_2);
}
