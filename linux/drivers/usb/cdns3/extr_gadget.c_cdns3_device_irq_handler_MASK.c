
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns3_device {TYPE_1__* regs; } ;
struct cdns3 {struct cdns3_device* gadget_dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ep_ien; int ep_ists; int usb_ien; int usb_ists; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct cdns3_device *VAR_4;
 struct cdns3 *VAR_5 = VAR_3;
 irqreturn_t VAR_6 = VAR_0;
 u32 VAR_7;

 VAR_4 = VAR_5->gadget_dev;


 VAR_7 = FUNC_0(&VAR_4->regs->usb_ists);
 if (VAR_7) {







  VAR_7 = ~VAR_7 & FUNC_0(&VAR_4->regs->usb_ien);

  FUNC_1(VAR_7, &VAR_4->regs->usb_ien);
  VAR_6 = VAR_1;
 }


 VAR_7 = FUNC_0(&VAR_4->regs->ep_ists);
 if (VAR_7) {
  FUNC_1(0, &VAR_4->regs->ep_ien);
  VAR_6 = VAR_1;
 }

 return VAR_6;
}
