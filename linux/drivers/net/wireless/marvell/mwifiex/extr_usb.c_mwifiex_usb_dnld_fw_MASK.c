
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_card_rec {scalar_t__ usb_boot_state; } ;
struct mwifiex_fw_image {int dummy; } ;
struct mwifiex_adapter {scalar_t__ card; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,struct mwifiex_fw_image*) ;
 int FUNC_1 (struct mwifiex_adapter*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_1,
   struct mwifiex_fw_image *VAR_2)
{
 int VAR_3;
 struct usb_card_rec *VAR_4 = (struct usb_card_rec *)VAR_1->card;

 if (VAR_4->usb_boot_state == VAR_0) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3)
   return -1;


  if (VAR_4->usb_boot_state == VAR_0)
   return -1;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  VAR_3 = FUNC_2(VAR_1);

 return VAR_3;
}
