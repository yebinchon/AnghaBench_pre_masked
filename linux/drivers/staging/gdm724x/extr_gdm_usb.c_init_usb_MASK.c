
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tx_sdu {int list; } ;
struct usb_rx {int free_list; } ;
struct tx_cxt {scalar_t__ avail_count; int free_list; int lock; int hci_list; int sdu_list; } ;
struct rx_cxt {scalar_t__ avail_count; int free_list; int to_host_lock; int submit_lock; int rx_lock; int to_host_list; int rx_submit_list; } ;
struct lte_udev {int send_complete; int work_rx; int work_tx; int * rx_cb; int usb_state; scalar_t__ request_mac_addr; scalar_t__ tx_stop; struct rx_cxt rx; struct tx_cxt tx; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_rx* FUNC_2 () ;
 struct usb_tx_sdu* FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct lte_udev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct lte_udev *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8;
 struct tx_cxt *VAR_9 = &VAR_6->tx;
 struct rx_cxt *VAR_10 = &VAR_6->rx;
 struct usb_tx_sdu *VAR_11 = ((void*)0);
 struct usb_rx *VAR_12 = ((void*)0);

 VAR_6->send_complete = 1;
 VAR_6->tx_stop = 0;
 VAR_6->request_mac_addr = 0;
 VAR_6->usb_state = VAR_3;

 FUNC_1(&VAR_9->sdu_list);
 FUNC_1(&VAR_9->hci_list);
 FUNC_1(&VAR_9->free_list);
 FUNC_1(&VAR_10->rx_submit_list);
 FUNC_1(&VAR_10->free_list);
 FUNC_1(&VAR_10->to_host_list);
 FUNC_6(&VAR_9->lock);
 FUNC_6(&VAR_10->rx_lock);
 FUNC_6(&VAR_10->submit_lock);
 FUNC_6(&VAR_10->to_host_lock);

 VAR_9->avail_count = 0;
 VAR_10->avail_count = 0;

 VAR_6->rx_cb = ((void*)0);

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_11 = FUNC_3();
  if (!VAR_11) {
   VAR_7 = -VAR_0;
   goto fail;
  }

  FUNC_4(&VAR_11->list, &VAR_9->free_list);
  VAR_9->avail_count++;
 }

 for (VAR_8 = 0; VAR_8 < VAR_2 * 2; VAR_8++) {
  VAR_12 = FUNC_2();
  if (!VAR_12) {
   VAR_7 = -VAR_0;
   goto fail;
  }

  FUNC_4(&VAR_12->free_list, &VAR_10->free_list);
  VAR_10->avail_count++;
 }
 FUNC_0(&VAR_6->work_tx, VAR_5);
 FUNC_0(&VAR_6->work_rx, VAR_4);
 return 0;
fail:
 FUNC_5(VAR_6);
 return VAR_7;
}
