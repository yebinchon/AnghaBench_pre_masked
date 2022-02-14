
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub_descriptor {int bDescLength; int bNbrPorts; int wHubCharacteristics; int bDescriptorType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct usb_hub_descriptor*,int ,int) ;

__attribute__((used)) static inline void
FUNC_2(struct usb_hub_descriptor *VAR_3)
{
 FUNC_1(VAR_3, 0, sizeof(*VAR_3));



 VAR_3->bDescriptorType = VAR_2;
 VAR_3->bDescLength = 9;
 VAR_3->wHubCharacteristics = FUNC_0(VAR_1 |
      VAR_0);
 VAR_3->bNbrPorts = 1;
}
