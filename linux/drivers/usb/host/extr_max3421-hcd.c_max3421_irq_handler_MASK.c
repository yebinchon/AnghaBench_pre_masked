
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct spi_device {int irq; } ;
struct max3421_hcd {int todo; TYPE_2__* spi_thread; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ,int *) ;
 struct spi_device* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static irqreturn_t
FUNC_5(int VAR_3, void *VAR_4)
{
 struct usb_hcd *VAR_5 = VAR_4;
 struct spi_device *VAR_6 = FUNC_3(VAR_5->self.controller);
 struct max3421_hcd *VAR_7 = FUNC_1(VAR_5);

 if (VAR_7->spi_thread &&
     VAR_7->spi_thread->state != VAR_2)
  FUNC_4(VAR_7->spi_thread);
 if (!FUNC_2(VAR_0, &VAR_7->todo))
  FUNC_0(VAR_6->irq);
 return VAR_1;
}
