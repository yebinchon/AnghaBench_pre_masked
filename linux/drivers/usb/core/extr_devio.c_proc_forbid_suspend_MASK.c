
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dev_state {int suspend_allowed; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_dev_state *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2->suspend_allowed) {
  VAR_3 = FUNC_0(VAR_2->dev);
  if (VAR_3 == 0)
   VAR_2->suspend_allowed = 0;
  else if (VAR_3 != -VAR_1)
   VAR_3 = -VAR_0;
 }
 return VAR_3;
}
