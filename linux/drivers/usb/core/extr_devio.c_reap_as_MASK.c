
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct usb_dev_state {int wait; struct usb_device* dev; } ;
struct async {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 struct async* FUNC_3 (struct usb_dev_state*) ;
 int FUNC_4 (struct usb_dev_state*) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct usb_device*) ;
 int FUNC_10 (struct usb_device*) ;
 int VAR_3 ;

__attribute__((used)) static struct async *FUNC_11(struct usb_dev_state *VAR_4)
{
 FUNC_0(VAR_3, VAR_2);
 struct async *VAR_5 = ((void*)0);
 struct usb_device *VAR_6 = VAR_4->dev;

 FUNC_2(&VAR_4->wait, &VAR_3);
 for (;;) {
  FUNC_1(VAR_0);
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5 || !FUNC_4(VAR_4))
   break;
  if (FUNC_8(VAR_2))
   break;
  FUNC_10(VAR_6);
  FUNC_6();
  FUNC_9(VAR_6);
 }
 FUNC_5(&VAR_4->wait, &VAR_3);
 FUNC_7(VAR_1);
 return VAR_5;
}
