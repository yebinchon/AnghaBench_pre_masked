
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct usb_device*,int ,int ,int ,int ,int,int *,int ,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct usb_device*,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

int FUNC_5(struct usb_device *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_1(VAR_6);

 if (FUNC_2(VAR_6))
  VAR_8 |= VAR_1;





 VAR_7 = FUNC_0(VAR_5, FUNC_4(VAR_5, 0),
  VAR_4, VAR_3,
  VAR_2, VAR_8, ((void*)0), 0,
  VAR_0);


 if (VAR_7 < 0)
  return VAR_7;
 FUNC_3(VAR_5, VAR_8);

 return 0;
}
