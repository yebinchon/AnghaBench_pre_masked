
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mpc52xx_spi {scalar_t__ gpio_cs_count; scalar_t__ regs; int * gpio_cs; TYPE_2__* message; } ;
struct TYPE_4__ {TYPE_1__* spi; } ;
struct TYPE_3__ {int chip_select; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct mpc52xx_spi *VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1->gpio_cs_count > 0) {
  VAR_3 = VAR_1->message->spi->chip_select;
  FUNC_0(VAR_1->gpio_cs[VAR_3], VAR_2 ? 0 : 1);
 } else
  FUNC_1(VAR_1->regs + VAR_0, VAR_2 ? 0 : 0x08);
}
