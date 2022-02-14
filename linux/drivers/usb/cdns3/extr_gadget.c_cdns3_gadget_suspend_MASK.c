
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int speed; } ;
struct cdns3_device {TYPE_1__* regs; TYPE_2__ gadget; } ;
struct cdns3 {struct cdns3_device* gadget_dev; } ;
struct TYPE_3__ {int usb_ien; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cdns3_device*) ;
 int FUNC_1 (struct cdns3_device*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct cdns3 *VAR_2, bool VAR_3)
{
 struct cdns3_device *VAR_4 = VAR_2->gadget_dev;

 FUNC_0(VAR_4);

 VAR_4->gadget.speed = VAR_0;
 FUNC_2(&VAR_4->gadget, VAR_1);
 FUNC_1(VAR_4);


 FUNC_3(0, &VAR_4->regs->usb_ien);

 return 0;
}
