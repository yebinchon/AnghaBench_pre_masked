
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int flags; } ;
struct usb_otg {struct usb_phy* usb_phy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct usb_phy*,int ) ;
 int FUNC_1 (struct usb_phy*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_otg *VAR_5, bool VAR_6)
{
 struct usb_phy *VAR_7 = VAR_5->usb_phy;
 unsigned int VAR_8 = FUNC_0(VAR_7, VAR_0);

 VAR_8 &= ~(VAR_1 | VAR_2);

 if (VAR_6) {
  if (VAR_7->flags & VAR_3)
   VAR_8 |= VAR_1;

  if (VAR_7->flags & VAR_4)
   VAR_8 |= VAR_2;
 }

 return FUNC_1(VAR_7, VAR_8, VAR_0);
}
