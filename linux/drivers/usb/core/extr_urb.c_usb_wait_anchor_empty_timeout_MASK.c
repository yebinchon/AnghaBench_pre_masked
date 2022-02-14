
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int wait; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct usb_anchor*) ;
 int FUNC_2 (int ,int ,int ) ;

int FUNC_3(struct usb_anchor *VAR_0,
      unsigned int VAR_1)
{
 return FUNC_2(VAR_0->wait,
      FUNC_1(VAR_0),
      FUNC_0(VAR_1));
}
