
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_phy_io_ops {int dummy; } ;
struct usb_phy {char* label; unsigned int flags; int init; struct usb_otg* otg; struct usb_phy_io_ops* io_ops; } ;
struct usb_otg {int set_vbus; int set_host; struct usb_phy* usb_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_phy*) ;
 void* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct usb_phy *
FUNC_2(struct usb_phy_io_ops *VAR_4,
  unsigned int VAR_5)
{
 struct usb_phy *VAR_6;
 struct usb_otg *VAR_7;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_6);
  return ((void*)0);
 }

 VAR_6->label = "ULPI";
 VAR_6->flags = VAR_5;
 VAR_6->io_ops = VAR_4;
 VAR_6->otg = VAR_7;
 VAR_6->init = VAR_1;

 VAR_7->usb_phy = VAR_6;
 VAR_7->set_host = VAR_2;
 VAR_7->set_vbus = VAR_3;

 return VAR_6;
}
