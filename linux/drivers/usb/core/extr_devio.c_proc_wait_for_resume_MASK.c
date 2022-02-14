
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_dev_state {int dev; int not_yet_resumed; int wait_for_resume; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct usb_dev_state*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int FUNC_5(struct usb_dev_state *VAR_1)
{
 int VAR_2;

 FUNC_3(VAR_1->dev);
 VAR_2 = FUNC_4(VAR_1->wait_for_resume,
   FUNC_0(VAR_1->not_yet_resumed) == 0);
 FUNC_2(VAR_1->dev);

 if (VAR_2 != 0)
  return -VAR_0;
 return FUNC_1(VAR_1);
}
