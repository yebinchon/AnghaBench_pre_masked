
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfcmrvl_usb_drv_data {TYPE_1__* intf; int flags; } ;
struct nfcmrvl_private {struct nfcmrvl_usb_drv_data* drv_data; } ;
struct TYPE_3__ {int needs_remote_wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfcmrvl_usb_drv_data*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct nfcmrvl_private *VAR_2)
{
 struct nfcmrvl_usb_drv_data *VAR_3 = VAR_2->drv_data;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->intf);
 if (VAR_4)
  return VAR_4;

 VAR_3->intf->needs_remote_wakeup = 1;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4)
  goto failed;

 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_0(VAR_3, VAR_0);

 FUNC_3(VAR_3->intf);
 return 0;

failed:
 FUNC_3(VAR_3->intf);
 return VAR_4;
}
