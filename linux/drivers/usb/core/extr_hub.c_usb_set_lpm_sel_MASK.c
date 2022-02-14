
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {struct usb_device* parent; } ;
struct usb3_lpm_parameters {unsigned int pel; unsigned int sel; } ;



__attribute__((used)) static void FUNC_0(struct usb_device *VAR_0,
  struct usb3_lpm_parameters *VAR_1)
{
 struct usb_device *VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;


 VAR_4 = VAR_1->pel;

 for (VAR_2 = VAR_0->parent, VAR_3 = 0; VAR_2->parent;
   VAR_2 = VAR_2->parent)
  VAR_3++;

 if (VAR_3 > 0)
  VAR_4 += 2100 + 250 * (VAR_3 - 1);


 VAR_4 += 250 * VAR_3;

 VAR_1->sel = VAR_4;
}
