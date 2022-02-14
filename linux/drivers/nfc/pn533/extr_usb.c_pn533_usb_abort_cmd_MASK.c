
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pn533_usb_phy {int in_urb; } ;
struct pn533 {scalar_t__ device_type; struct pn533_usb_phy* phy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pn533*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct pn533 *VAR_1, gfp_t VAR_2)
{
 struct pn533_usb_phy *VAR_3 = VAR_1->phy;






 if (VAR_1->device_type == VAR_0)
  return;


 FUNC_0(VAR_1, VAR_2);


 FUNC_1(VAR_3->in_urb);
}
