
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct lan78xx_net {TYPE_1__* net; } ;
struct TYPE_2__ {int phydev; } ;


 int FUNC_0 (struct lan78xx_net*) ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int ) ;
 struct lan78xx_net* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_0)
{
 struct lan78xx_net *VAR_1 = FUNC_3(VAR_0);

 FUNC_0(VAR_1);

 FUNC_2(VAR_1->net->phydev);

 return FUNC_1(VAR_0);
}
