
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_card_rec {int * adapter; } ;
struct mwifiex_adapter {scalar_t__ card; } ;


 int FUNC_0 (struct mwifiex_adapter*) ;
 int FUNC_1 (struct usb_card_rec*) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0)
{
 struct usb_card_rec *VAR_1 = (struct usb_card_rec *)VAR_0->card;

 FUNC_1(VAR_1);

 FUNC_0(VAR_0);

 VAR_1->adapter = ((void*)0);
}
