
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_tt {struct ehci_tt** hcpriv; TYPE_1__* hub; scalar_t__ multi; } ;
struct usb_device {int ttport; int bus; struct usb_tt* tt; } ;
struct ehci_tt {unsigned int tt_port; struct usb_tt* usb_tt; int ps_list; int tt_list; } ;
struct ehci_hcd {int tt_list; } ;
struct TYPE_2__ {int maxchild; } ;


 int VAR_0 ;
 struct ehci_tt* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct ehci_hcd* FUNC_3 (int ) ;
 struct ehci_tt** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct ehci_tt**) ;
 struct ehci_tt* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static struct ehci_tt *FUNC_8(struct usb_device *VAR_2)
{
 struct usb_tt *VAR_3 = VAR_2->tt;
 struct ehci_tt *VAR_4, **VAR_5, **VAR_6;
 unsigned VAR_7;
 bool VAR_8 = 0;

 if (!VAR_3)
  return ((void*)0);






 VAR_5 = ((void*)0);
 if (VAR_3->multi) {
  VAR_5 = VAR_3->hcpriv;
  if (!VAR_5) {
   VAR_5 = FUNC_4(VAR_3->hub->maxchild,
        sizeof(*VAR_5),
        VAR_1);
   if (!VAR_5)
    return FUNC_0(-VAR_0);
   VAR_3->hcpriv = VAR_5;
   VAR_8 = 1;
  }
  VAR_7 = VAR_2->ttport - 1;
  VAR_6 = &VAR_5[VAR_7];
 } else {
  VAR_7 = 0;
  VAR_6 = (struct ehci_tt **) &VAR_3->hcpriv;
 }

 VAR_4 = *VAR_6;
 if (!VAR_4) {
  struct ehci_hcd *VAR_9 =
    FUNC_3(FUNC_2(VAR_2->bus));

  VAR_4 = FUNC_6(sizeof(*VAR_4), VAR_1);
  if (!VAR_4) {
   if (VAR_8) {
    VAR_3->hcpriv = ((void*)0);
    FUNC_5(VAR_5);
   }
   return FUNC_0(-VAR_0);
  }
  FUNC_7(&VAR_4->tt_list, &VAR_9->tt_list);
  FUNC_1(&VAR_4->ps_list);
  VAR_4->usb_tt = VAR_3;
  VAR_4->tt_port = VAR_7;
  *VAR_6 = VAR_4;
 }

 return VAR_4;
}
