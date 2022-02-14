
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* root_hub; scalar_t__ sg_tablesize; } ;
struct usb_hcd {TYPE_2__ self; int speed; } ;
struct max3421_hcd {int spi_thread; int todo; } ;
struct TYPE_3__ {int speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct usb_hcd *VAR_3)
{
 struct max3421_hcd *VAR_4 = FUNC_0(VAR_3);

 VAR_3->self.sg_tablesize = 0;
 VAR_3->speed = VAR_0;
 VAR_3->self.root_hub->speed = VAR_2;
 FUNC_1(VAR_1, &VAR_4->todo);
 FUNC_2(VAR_4->spi_thread);
 return 0;
}
