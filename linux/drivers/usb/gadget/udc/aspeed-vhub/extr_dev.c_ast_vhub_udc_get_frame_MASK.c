
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct ast_vhub_dev {TYPE_1__* vhub; } ;
struct TYPE_2__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct ast_vhub_dev* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget* VAR_1)
{
 struct ast_vhub_dev *VAR_2 = FUNC_1(VAR_1);

 return (FUNC_0(VAR_2->vhub->regs + VAR_0) >> 16) & 0x7ff;
}
