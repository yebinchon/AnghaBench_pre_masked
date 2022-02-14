
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int devnum; int dev; struct usb_device* parent; } ;
struct r8a66597_device {int address; } ;
struct r8a66597 {int dummy; } ;


 struct r8a66597_device* FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct r8a66597 *VAR_0,
           struct usb_device *VAR_1)
{
 struct r8a66597_device *VAR_2;

 if (VAR_1->parent && VAR_1->parent->devnum != 1)
  VAR_1 = VAR_1->parent;

 VAR_2 = FUNC_0(&VAR_1->dev);
 if (VAR_2)
  return VAR_2->address;
 else
  return 0;
}
