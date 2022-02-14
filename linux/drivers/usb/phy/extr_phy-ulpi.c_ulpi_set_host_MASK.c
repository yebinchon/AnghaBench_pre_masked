
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy {int flags; } ;
struct usb_otg {struct usb_bus* host; struct usb_phy* usb_phy; } ;
struct usb_bus {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_0 (struct usb_phy*,int ) ;
 int FUNC_1 (struct usb_phy*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_otg *VAR_7, struct usb_bus *VAR_8)
{
 struct usb_phy *VAR_9 = VAR_7->usb_phy;
 unsigned int VAR_10 = FUNC_0(VAR_9, VAR_3);

 if (!VAR_8) {
  VAR_7->host = ((void*)0);
  return 0;
 }

 VAR_7->host = VAR_8;

 VAR_10 &= ~(VAR_5 |
     VAR_4 |
     VAR_6);

 if (VAR_9->flags & VAR_1)
  VAR_10 |= VAR_5;
 else if (VAR_9->flags & VAR_0)
  VAR_10 |= VAR_4;
 else if (VAR_9->flags & VAR_2)
  VAR_10 |= VAR_6;

 return FUNC_1(VAR_9, VAR_10, VAR_3);
}
