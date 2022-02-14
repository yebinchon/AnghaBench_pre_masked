
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int sisusb_dev; int ready; int present; } ;



__attribute__((used)) static inline int
FUNC_0(struct sisusb_usb_data *VAR_0)
{
 if (!VAR_0->present || !VAR_0->ready || !VAR_0->sisusb_dev)
  return 0;

 return 1;
}
