
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct urb {int dummy; } ;
struct tx_desc_cmd_819x_usb {int FirstSeg; int LastSeg; int OWN; int LINIP; int TxBufferSize; int CmdInit; } ;
struct sk_buff {int len; scalar_t__ data; scalar_t__ cb; } ;
struct r8192_priv {int udev; int * tx_pending; } ;
struct net_device {int dummy; } ;
struct cb_desc {size_t queue_index; int bLastIniPkt; int txbuf_size; int bCmdOrInit; } ;


 int FUNC_0 (char*,int) ;
 short VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct tx_desc_cmd_819x_usb*,int ,int ) ;
 int VAR_4 ;
 struct urb* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct urb*,int ,int ,scalar_t__,int ,int ,struct sk_buff*) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (struct urb*,int ) ;

short FUNC_9(struct net_device *VAR_5, struct sk_buff *VAR_6)
{
 struct r8192_priv *VAR_7 = FUNC_3(VAR_5);
 int VAR_8;
 struct urb *VAR_9;
 unsigned int VAR_10;
 struct tx_desc_cmd_819x_usb *VAR_11 = (struct tx_desc_cmd_819x_usb *)VAR_6->data;
 struct cb_desc *VAR_12 = (struct cb_desc *)(VAR_6->cb + VAR_2);
 u8 VAR_13 = VAR_12->queue_index;

 FUNC_1(&VAR_7->tx_pending[VAR_13]);
 VAR_9 = FUNC_5(0, VAR_1);
 if (!VAR_9) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 FUNC_4(VAR_11, 0, VAR_3);

 VAR_11->FirstSeg = 1;
 VAR_11->LastSeg = 1;
 VAR_11->CmdInit = VAR_12->bCmdOrInit;
 VAR_11->TxBufferSize = VAR_12->txbuf_size;
 VAR_11->OWN = 1;
 VAR_11->LINIP = VAR_12->bLastIniPkt;





 VAR_10 = 0x04;
 FUNC_6(VAR_9, VAR_7->udev,
     FUNC_7(VAR_7->udev, VAR_10),
     VAR_6->data, VAR_6->len, VAR_4, VAR_6);

 VAR_8 = FUNC_8(VAR_9, VAR_1);

 if (!VAR_8)
  return 0;

 FUNC_0("Error TX CMD URB, error %d", VAR_8);
 return -1;
}
