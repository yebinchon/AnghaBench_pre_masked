
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_port {int quirks; } ;
struct usb_device {scalar_t__ speed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_1(struct usb_device *VAR_4, int VAR_5,
      struct usb_port *VAR_6)
{
 int VAR_7 =
  VAR_6->quirks & VAR_0;
 int VAR_8 = (VAR_4->speed == VAR_1);

 if (VAR_4->speed >= VAR_2)
  return 0;

 return FUNC_0(VAR_5, VAR_7 || VAR_3
         || VAR_8);
}
