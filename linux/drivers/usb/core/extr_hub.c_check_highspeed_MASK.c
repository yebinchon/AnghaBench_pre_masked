
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_qualifier_descriptor {int dummy; } ;
struct usb_hub {int leds; int * indicator; scalar_t__ has_indicators; } ;
struct usb_device {int quirks; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_qualifier_descriptor*) ;
 struct usb_qualifier_descriptor* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct usb_device*,int ,int ,struct usb_qualifier_descriptor*,int) ;

__attribute__((used)) static void
FUNC_5(struct usb_hub *VAR_5, struct usb_device *VAR_6, int VAR_7)
{
 struct usb_qualifier_descriptor *VAR_8;
 int VAR_9;

 if (VAR_6->quirks & VAR_3)
  return;

 VAR_8 = FUNC_2(sizeof *VAR_8, VAR_0);
 if (VAR_8 == ((void*)0))
  return;

 VAR_9 = FUNC_4(VAR_6, VAR_2, 0,
   VAR_8, sizeof *VAR_8);
 if (VAR_9 == sizeof *VAR_8) {
  FUNC_0(&VAR_6->dev, "not running at top speed; "
   "connect to a high speed hub\n");

  if (VAR_5->has_indicators) {
   VAR_5->indicator[VAR_7-1] = VAR_1;
   FUNC_3(VAR_4,
     &VAR_5->leds, 0);
  }
 }
 FUNC_1(VAR_8);
}
