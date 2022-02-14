
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct usb_function {int dummy; } ;
struct usb_ctrlrequest {int wValue; int wLength; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct usb_function *VAR_2, const struct usb_ctrlrequest *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3->wLength);
 u16 VAR_5 = FUNC_0(VAR_3->wValue);
 u8 VAR_6 = VAR_5 >> 8;

 if (VAR_6 == VAR_1)
  return VAR_4;

 return -VAR_0;
}
