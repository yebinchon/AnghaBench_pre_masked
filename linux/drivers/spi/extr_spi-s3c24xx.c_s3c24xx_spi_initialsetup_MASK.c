
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_spi {scalar_t__ set_cs; TYPE_1__* pdata; scalar_t__ regs; int clk; } ;
struct TYPE_2__ {int (* gpio_setup ) (TYPE_1__*,int) ;int pin_cs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct s3c24xx_spi *VAR_6)
{


 FUNC_0(VAR_6->clk);



 FUNC_3(0xff, VAR_6->regs + VAR_2);
 FUNC_3(VAR_4, VAR_6->regs + VAR_1);
 FUNC_3(VAR_3, VAR_6->regs + VAR_0);

 if (VAR_6->pdata) {
  if (VAR_6->set_cs == VAR_5)
   FUNC_1(VAR_6->pdata->pin_cs, 1);

  if (VAR_6->pdata->gpio_setup)
   VAR_6->pdata->gpio_setup(VAR_6->pdata, 1);
 }
}
