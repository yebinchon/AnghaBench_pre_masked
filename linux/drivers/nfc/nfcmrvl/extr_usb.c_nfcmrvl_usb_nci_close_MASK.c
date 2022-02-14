
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfcmrvl_usb_drv_data {int deferred; TYPE_1__* intf; int tx_anchor; int flags; int waker; } ;
struct nfcmrvl_private {struct nfcmrvl_usb_drv_data* drv_data; } ;
struct TYPE_3__ {scalar_t__ needs_remote_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct nfcmrvl_usb_drv_data*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct nfcmrvl_private *VAR_1)
{
 struct nfcmrvl_usb_drv_data *VAR_2 = VAR_1->drv_data;
 int VAR_3;

 FUNC_0(&VAR_2->waker);

 FUNC_1(VAR_0, &VAR_2->flags);

 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->tx_anchor);
 VAR_3 = FUNC_3(VAR_2->intf);
 if (VAR_3)
  goto failed;

 VAR_2->intf->needs_remote_wakeup = 0;
 FUNC_4(VAR_2->intf);

failed:
 FUNC_6(&VAR_2->deferred);
 return 0;
}
