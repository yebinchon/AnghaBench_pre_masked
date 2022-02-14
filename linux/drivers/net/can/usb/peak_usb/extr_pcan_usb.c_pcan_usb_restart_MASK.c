
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct peak_usb_device {int dummy; } ;
struct pcan_usb {struct peak_usb_device dev; } ;


 struct pcan_usb* FUNC_0 (int ,struct timer_list*,int ) ;
 struct pcan_usb* VAR_0 ;
 int FUNC_1 (struct peak_usb_device*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct pcan_usb *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_1);
 struct peak_usb_device *VAR_4 = &VAR_3->dev;


 FUNC_1(VAR_4);
}
