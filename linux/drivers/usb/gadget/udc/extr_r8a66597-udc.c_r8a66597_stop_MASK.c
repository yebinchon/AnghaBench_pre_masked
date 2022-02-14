
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct r8a66597 {int * driver; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r8a66597*) ;
 struct r8a66597* FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (struct r8a66597*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct usb_gadget *VAR_2)
{
 struct r8a66597 *VAR_3 = FUNC_1(VAR_2);
 unsigned long VAR_4;

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_2(VAR_3, VAR_1, VAR_0);
 FUNC_0(VAR_3);
 FUNC_4(&VAR_3->lock, VAR_4);

 VAR_3->driver = ((void*)0);
 return 0;
}
