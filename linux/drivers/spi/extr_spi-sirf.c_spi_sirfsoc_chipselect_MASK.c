
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct spi_device {int mode; int cs_gpio; int master; } ;
struct sirfsoc_spi {int type; TYPE_1__* regs; scalar_t__ base; scalar_t__ hw_cs; } ;
struct TYPE_2__ {scalar_t__ usp_pin_io_data; scalar_t__ spi_ctrl; } ;




 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 struct sirfsoc_spi* FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct spi_device *VAR_3, int VAR_4)
{
 struct sirfsoc_spi *VAR_5 = FUNC_2(VAR_3->master);

 if (VAR_5->hw_cs) {
  u32 VAR_6;

  switch (VAR_5->type) {
  case 130:
   VAR_6 = FUNC_1(VAR_5->base + VAR_5->regs->spi_ctrl);
   switch (VAR_4) {
   case 132:
    if (VAR_3->mode & VAR_2)
     VAR_6 |= VAR_0;
    else
     VAR_6 &= ~VAR_0;
    break;
   case 131:
    if (VAR_3->mode & VAR_2)
     VAR_6 &= ~VAR_0;
    else
     VAR_6 |= VAR_0;
    break;
   }
   FUNC_3(VAR_6, VAR_5->base + VAR_5->regs->spi_ctrl);
   break;
  case 128:
  case 129:
   VAR_6 = FUNC_1(VAR_5->base +
     VAR_5->regs->usp_pin_io_data);
   switch (VAR_4) {
   case 132:
    if (VAR_3->mode & VAR_2)
     VAR_6 |= VAR_1;
    else
     VAR_6 &= ~(VAR_1);
    break;
   case 131:
    if (VAR_3->mode & VAR_2)
     VAR_6 &= ~(VAR_1);
    else
     VAR_6 |= VAR_1;
    break;
   }
   FUNC_3(VAR_6,
    VAR_5->base + VAR_5->regs->usp_pin_io_data);
   break;
  }
 } else {
  switch (VAR_4) {
  case 132:
   FUNC_0(VAR_3->cs_gpio,
     VAR_3->mode & VAR_2 ? 1 : 0);
   break;
  case 131:
   FUNC_0(VAR_3->cs_gpio,
     VAR_3->mode & VAR_2 ? 0 : 1);
   break;
  }
 }
}
