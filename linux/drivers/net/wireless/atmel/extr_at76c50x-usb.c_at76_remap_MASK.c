
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int ) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_4, FUNC_1(VAR_4, 0), 0x0a,
         VAR_3 | VAR_1 |
         VAR_2, 0, 0, ((void*)0), 0,
         VAR_0);
 if (VAR_5 < 0)
  return VAR_5;
 return 0;
}
