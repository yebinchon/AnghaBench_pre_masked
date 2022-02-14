
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct xhci_hcd {int hcc_params; } ;
struct usb_hub_descriptor {int bPwrOn2PwrGood; int bNbrPorts; int wHubCharacteristics; scalar_t__ bHubContrCurrent; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct xhci_hcd *VAR_3,
  struct usb_hub_descriptor *VAR_4, int VAR_5)
{
 u16 VAR_6;

 VAR_4->bPwrOn2PwrGood = 10;
 VAR_4->bHubContrCurrent = 0;

 VAR_4->bNbrPorts = VAR_5;
 VAR_6 = 0;

 if (FUNC_0(VAR_3->hcc_params))
  VAR_6 |= VAR_0;
 else
  VAR_6 |= VAR_2;


 VAR_6 |= VAR_1;


 VAR_4->wHubCharacteristics = FUNC_1(VAR_6);
}
