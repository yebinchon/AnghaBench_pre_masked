
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ break_control; } ;
struct nfcmrvl_private {TYPE_3__ config; TYPE_2__* ndev; } ;
struct nci_uart {TYPE_5__* tty; scalar_t__ drv_data; } ;
struct TYPE_10__ {TYPE_4__* ops; } ;
struct TYPE_9__ {int (* break_ctl ) (TYPE_5__*,int) ;} ;
struct TYPE_7__ {TYPE_1__* nfc_dev; } ;
struct TYPE_6__ {scalar_t__ fw_download_in_progress; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct nci_uart *VAR_0)
{
 struct nfcmrvl_private *VAR_1 = (struct nfcmrvl_private *)VAR_0->drv_data;

 if (VAR_1->ndev->nfc_dev->fw_download_in_progress)
  return;






 if (VAR_1->config.break_control && VAR_0->tty->ops->break_ctl) {
  VAR_0->tty->ops->break_ctl(VAR_0->tty, -1);
  FUNC_1(1000, 3000);
 }
}
