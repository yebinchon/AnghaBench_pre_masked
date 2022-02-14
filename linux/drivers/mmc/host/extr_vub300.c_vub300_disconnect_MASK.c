
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int kref; int * interface; struct mmc_host* mmc; } ;
struct usb_interface {int dummy; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (char*,int) ;
 struct vub300_mmc_host* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_1)
{
 struct vub300_mmc_host *VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2 || !VAR_2->mmc) {
  return;
 } else {
  struct mmc_host *VAR_3 = VAR_2->mmc;
  if (!VAR_2->mmc) {
   return;
  } else {
   int VAR_4 = FUNC_0(VAR_1);
   FUNC_5(VAR_1, ((void*)0));

   VAR_2->interface = ((void*)0);
   FUNC_1(&VAR_2->kref, VAR_0);
   FUNC_2(VAR_3);
   FUNC_3("USB vub300 remote SDIO host controller[%d]"
    " now disconnected", VAR_4);
   return;
  }
 }
}
