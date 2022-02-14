
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct m920x_inits {scalar_t__ address; int data; } ;


 int FUNC_0 (struct usb_device*,int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct usb_device *VAR_0, u8 VAR_1,
      struct m920x_inits *VAR_2)
{
 int VAR_3;
 do {
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2->data, VAR_2->address);
  if (VAR_3 != 0)
   return VAR_3;

  VAR_2++;
 } while (VAR_2->address);

 return 0;
}
