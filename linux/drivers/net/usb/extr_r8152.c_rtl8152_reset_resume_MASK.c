
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int (* init ) (struct r8152*) ;} ;
struct r8152 {int hw_phy_work; TYPE_1__ rtl_ops; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct r8152*) ;
 int FUNC_4 (struct r8152*) ;
 int VAR_1 ;
 struct r8152* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_2)
{
 struct r8152 *VAR_3 = FUNC_5(VAR_2);

 FUNC_0(VAR_0, &VAR_3->flags);
 VAR_3->rtl_ops.init(VAR_3);
 FUNC_1(VAR_1, &VAR_3->hw_phy_work, 0);
 FUNC_3(VAR_3);
 return FUNC_2(VAR_2);
}
