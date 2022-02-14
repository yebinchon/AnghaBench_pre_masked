
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {struct sisusb_usb_data* context; } ;
struct sisusb_usb_data {int completein; int wait_q; int present; int sisusb_dev; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 struct sisusb_usb_data *VAR_1 = VAR_0->context;

 if (!VAR_1 || !VAR_1->sisusb_dev || !VAR_1->present)
  return;

 VAR_1->completein = 1;
 FUNC_0(&VAR_1->wait_q);
}
