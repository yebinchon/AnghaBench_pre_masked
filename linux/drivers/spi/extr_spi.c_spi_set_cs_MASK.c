
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int mode; TYPE_1__* controller; int cs_gpio; scalar_t__ cs_gpiod; } ;
struct TYPE_2__ {int flags; int (* set_cs ) (struct spi_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct spi_device*,int) ;
 int FUNC_4 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_5(struct spi_device *VAR_3, bool VAR_4)
{
 if (VAR_3->mode & VAR_0)
  VAR_4 = !VAR_4;

 if (VAR_3->cs_gpiod || FUNC_0(VAR_3->cs_gpio)) {







  if (!(VAR_3->mode & VAR_2)) {
   if (VAR_3->cs_gpiod)
    FUNC_2(VAR_3->cs_gpiod,
        !VAR_4);
   else
    FUNC_1(VAR_3->cs_gpio, !VAR_4);
  }

  if ((VAR_3->controller->flags & VAR_1) &&
      VAR_3->controller->set_cs)
   VAR_3->controller->set_cs(VAR_3, !VAR_4);
 } else if (VAR_3->controller->set_cs) {
  VAR_3->controller->set_cs(VAR_3, !VAR_4);
 }
}
