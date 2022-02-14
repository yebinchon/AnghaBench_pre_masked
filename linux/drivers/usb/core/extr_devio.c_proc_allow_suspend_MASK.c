
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dev_state {int suspend_allowed; int dev; int not_yet_resumed; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct usb_dev_state*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_dev_state *VAR_1)
{
 if (!FUNC_1(VAR_1))
  return -VAR_0;

 FUNC_0(VAR_1->not_yet_resumed, 1);
 if (!VAR_1->suspend_allowed) {
  FUNC_2(VAR_1->dev);
  VAR_1->suspend_allowed = 1;
 }
 return 0;
}
