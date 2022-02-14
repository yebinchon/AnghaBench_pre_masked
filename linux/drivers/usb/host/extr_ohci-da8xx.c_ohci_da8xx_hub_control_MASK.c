
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct device {int dummy; } ;
typedef int __le32 ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct usb_hcd*) ;
 int VAR_4 ;
 int FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*,int) ;
 int FUNC_6 (struct usb_hcd*,int,int,int,char*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct usb_hcd *VAR_5, u16 VAR_6, u16 VAR_7,
      u16 VAR_8, char *VAR_9, u16 VAR_10)
{
 struct device *VAR_11 = VAR_5->self.controller;
 int VAR_12;

 switch (VAR_6) {
 case 131:

  if (VAR_8 != 1)
   break;

  FUNC_1(VAR_11, "GetPortStatus(%u)\n", VAR_8);

  VAR_12 = FUNC_8(FUNC_2(VAR_5), VAR_8 - 1);


  if (!FUNC_4(VAR_5))
   VAR_12 &= ~VAR_3;


  if (FUNC_3(VAR_5) > 0)
   VAR_12 |= VAR_2;


  if (VAR_4 & (1 << VAR_8))
   VAR_12 |= VAR_1;

  FUNC_7(FUNC_0(VAR_12), (__le32 *)VAR_9);
  return 0;
 case 130:
  VAR_12 = 1;
  goto check_port;
 case 132:
  VAR_12 = 0;

check_port:

  if (VAR_8 != 1)
   break;

  switch (VAR_7) {
  case 128:
   FUNC_1(VAR_11, "%sPortFeature(%u): %s\n",
    VAR_12 ? "Set" : "Clear", VAR_8, "POWER");

   return FUNC_5(VAR_5, VAR_12) ? -VAR_0 : 0;
  case 129:
   FUNC_1(VAR_11, "%sPortFeature(%u): %s\n",
    VAR_12 ? "Set" : "Clear", VAR_8,
    "C_OVER_CURRENT");

   if (VAR_12)
    VAR_4 |= 1 << VAR_8;
   else
    VAR_4 &= ~(1 << VAR_8);
   return 0;
  }
 }

 return FUNC_6(VAR_5, VAR_6, VAR_7,
   VAR_8, VAR_9, VAR_10);
}
