
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct spi_device {int irq; int dev; } ;
struct max3421_hcd {int lock; struct max3421_hcd* next; int spi_thread; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct spi_device*) ;
 int FUNC_1 (int ,struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 struct max3421_hcd* VAR_1 ;
 struct usb_hcd* FUNC_3 (struct max3421_hcd*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int
FUNC_8(struct spi_device *VAR_2)
{
 struct max3421_hcd *VAR_3 = ((void*)0), **VAR_4;
 struct usb_hcd *VAR_5 = ((void*)0);
 unsigned long VAR_6;

 for (VAR_4 = &VAR_1; *VAR_4; VAR_4 = &(*VAR_4)->next) {
  VAR_3 = *VAR_4;
  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5->self.controller == &VAR_2->dev)
   break;
 }
 if (!VAR_3) {
  FUNC_0(&VAR_2->dev, "no MAX3421 HCD found for SPI device %p\n",
   VAR_2);
  return -VAR_0;
 }

 FUNC_7(VAR_5);

 FUNC_4(&VAR_3->lock, VAR_6);

 FUNC_2(VAR_3->spi_thread);
 *VAR_4 = VAR_3->next;

 FUNC_5(&VAR_3->lock, VAR_6);

 FUNC_1(VAR_2->irq, VAR_5);

 FUNC_6(VAR_5);
 return 0;
}
