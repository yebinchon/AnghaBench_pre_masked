
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct urb* FUNC_0 (struct usb_device*,int,unsigned long,int ,int ,int ,int ) ;

__attribute__((used)) static struct urb *FUNC_1(
 struct usb_device *VAR_2,
 int VAR_3,
 unsigned long VAR_4,
 u8 VAR_5)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0, 0,
   VAR_5, VAR_1);
}
