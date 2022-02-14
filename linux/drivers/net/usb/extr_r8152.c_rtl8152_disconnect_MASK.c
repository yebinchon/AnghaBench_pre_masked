
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int (* unload ) (struct r8152*) ;} ;
struct r8152 {int netdev; TYPE_1__ rtl_ops; int hw_phy_work; int tx_tl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct r8152*) ;
 int FUNC_3 (struct r8152*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct r8152* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_8(struct usb_interface *VAR_0)
{
 struct r8152 *VAR_1 = FUNC_6(VAR_0);

 FUNC_7(VAR_0, ((void*)0));
 if (VAR_1) {
  FUNC_2(VAR_1);

  FUNC_5(VAR_1->netdev);
  FUNC_4(&VAR_1->tx_tl);
  FUNC_0(&VAR_1->hw_phy_work);
  VAR_1->rtl_ops.unload(VAR_1);
  FUNC_1(VAR_1->netdev);
 }
}
