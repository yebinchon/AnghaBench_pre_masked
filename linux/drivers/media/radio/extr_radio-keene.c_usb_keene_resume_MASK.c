
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct keene_device {int curfreq; } ;


 int FUNC_0 (struct keene_device*,int ,int) ;
 int FUNC_1 (struct keene_device*) ;
 int FUNC_2 (int) ;
 struct keene_device* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0)
{
 struct keene_device *VAR_1 = FUNC_3(FUNC_4(VAR_0));

 FUNC_2(50);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_1->curfreq, 1);
 return 0;
}
