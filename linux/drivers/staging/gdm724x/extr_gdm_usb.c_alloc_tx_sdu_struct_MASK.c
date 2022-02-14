
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tx_sdu {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_tx_sdu*) ;
 int FUNC_1 (int ,int ) ;
 struct usb_tx_sdu* FUNC_2 (int,int ) ;

__attribute__((used)) static struct usb_tx_sdu *FUNC_3(void)
{
 struct usb_tx_sdu *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->buf = FUNC_1(VAR_1, VAR_0);
 if (!VAR_2->buf) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 return VAR_2;
}
