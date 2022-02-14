
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int hw; int flags; scalar_t__ mac_hw; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int ,int *) ;
 struct vnt_private* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct vnt_private *VAR_2 = FUNC_4(VAR_1);

 if (!VAR_2)
  return;

 if (VAR_2->mac_hw)
  FUNC_1(VAR_2->hw);

 FUNC_6(VAR_1, ((void*)0));
 FUNC_5(FUNC_2(VAR_1));

 FUNC_3(VAR_0, &VAR_2->flags);

 FUNC_0(VAR_2->hw);
}
