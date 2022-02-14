
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_tx_data_port {int block_status; scalar_t__ tx_data_ix; int tx_aggr_lock; int tx_data_ep; struct urb_context* tx_data_list; int tx_data_urb_pending; } ;
struct urb_context {int dummy; } ;
struct tx_aggr_tmr_cnxt {struct usb_tx_data_port* port; struct mwifiex_adapter* adapter; } ;
struct timer_list {int dummy; } ;
struct sk_buff {int dummy; } ;
struct mwifiex_adapter {int data_sent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct tx_aggr_tmr_cnxt* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct mwifiex_adapter*,int ,char*,int) ;
 int FUNC_3 (struct mwifiex_adapter*,struct usb_tx_data_port*,int ,struct urb_context*,struct sk_buff*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;
 int FUNC_5 (struct mwifiex_adapter*,struct usb_tx_data_port*,struct sk_buff**) ;
 int FUNC_6 (struct mwifiex_adapter*,struct sk_buff*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct tx_aggr_tmr_cnxt* VAR_3 ;

__attribute__((used)) static void FUNC_9(struct timer_list *VAR_4)
{
 struct urb_context *VAR_5 = ((void*)0);
 struct sk_buff *VAR_6 = ((void*)0);
 struct tx_aggr_tmr_cnxt *VAR_7 =
  FUNC_1(VAR_7, VAR_4, VAR_2);
 struct mwifiex_adapter *VAR_8 = VAR_7->adapter;
 struct usb_tx_data_port *VAR_9 = VAR_7->port;
 int VAR_10 = 0;

 FUNC_7(&VAR_9->tx_aggr_lock);
 VAR_10 = FUNC_5(VAR_8, VAR_9, &VAR_6);
 if (VAR_10) {
  FUNC_2(VAR_8, VAR_0,
       "prepare tx aggr skb failed, err=%d\n", VAR_10);
  goto unlock;
 }

 if (FUNC_0(&VAR_9->tx_data_urb_pending) >=
     VAR_1) {
  VAR_9->block_status = 1;
  VAR_8->data_sent =
   FUNC_4(VAR_8);
  VAR_10 = -1;
  goto done;
 }

 if (VAR_9->tx_data_ix >= VAR_1)
  VAR_9->tx_data_ix = 0;

 VAR_5 = &VAR_9->tx_data_list[VAR_9->tx_data_ix++];
 VAR_10 = FUNC_3(VAR_8, VAR_9, VAR_9->tx_data_ep,
          VAR_5, VAR_6);
done:
 if (VAR_10 == -1)
  FUNC_6(VAR_8, VAR_6, 0, -1);
unlock:
 FUNC_8(&VAR_9->tx_aggr_lock);
}
