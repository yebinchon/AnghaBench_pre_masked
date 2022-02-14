
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvaser_usb_dev_card_data {int ctrlmode_supported; } ;
struct kvaser_usb {int * cfg; struct kvaser_usb_dev_card_data card_data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct kvaser_usb *VAR_2)
{
 struct kvaser_usb_dev_card_data *VAR_3 = &VAR_2->card_data;

 VAR_2->cfg = &VAR_1;
 VAR_3->ctrlmode_supported |= VAR_0;

 return 0;
}
