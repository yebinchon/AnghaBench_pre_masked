
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int portnum; struct usb_device* parent; } ;



__attribute__((used)) static inline int FUNC_0(struct usb_device *VAR_0)
{
 while (VAR_0->parent->parent)
  VAR_0 = VAR_0->parent;
 return VAR_0->portnum;
}
