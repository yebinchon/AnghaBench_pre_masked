
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_tx {void (* callback ) (void*) ;int len; int list; scalar_t__ is_sdu; struct tx_cxt* tx; void* cb_data; int buf; } ;
struct tx_cxt {int lock; int hci_list; } ;
struct TYPE_2__ {int work; } ;
struct lte_udev {TYPE_1__ work_tx; int usbdev; struct tx_cxt tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_tx* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(void *VAR_2, void *VAR_3, int VAR_4,
       void (*VAR_5)(void *VAR_6), void *VAR_7)
{
 struct lte_udev *VAR_8 = VAR_2;
 struct tx_cxt *VAR_9 = &VAR_8->tx;
 struct usb_tx *VAR_10;
 unsigned long VAR_11;

 if (!VAR_8->usbdev) {
  FUNC_3("hci send - invalid device\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_0(VAR_4);
 if (!VAR_10) {
  FUNC_3("hci_send - out of memory\n");
  return -VAR_1;
 }

 FUNC_2(VAR_10->buf, VAR_3, VAR_4);
 VAR_10->callback = VAR_5;
 VAR_10->cb_data = VAR_7;
 VAR_10->len = VAR_4;
 VAR_10->tx = VAR_9;
 VAR_10->is_sdu = 0;

 FUNC_5(&VAR_9->lock, VAR_11);
 FUNC_1(&VAR_10->list, &VAR_9->hci_list);
 FUNC_4(&VAR_8->work_tx.work);
 FUNC_6(&VAR_9->lock, VAR_11);

 return 0;
}
