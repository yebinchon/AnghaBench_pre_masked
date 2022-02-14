
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct recv_priv {int free_recv_skb_queue; } ;
struct recv_buf {scalar_t__ pbuf; struct urb* purb; TYPE_2__* pskb; void* pend; void* ptail; scalar_t__ pdata; int phead; } ;
struct intf_priv {scalar_t__ intf_dev; } ;
struct intf_hdl {struct intf_priv* pintfpriv; } ;
struct dvobj_priv {struct usb_device* pusbdev; struct _adapter* padapter; } ;
struct TYPE_7__ {scalar_t__ pnp_bstop_trx; } ;
struct _adapter {int pnetdev; TYPE_1__ pwrctrlpriv; scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct recv_priv recvpriv; } ;
typedef int addr_t ;
struct TYPE_8__ {scalar_t__ data; int head; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct dvobj_priv*,int) ;
 TYPE_2__* FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct _adapter*,struct recv_buf*) ;
 int VAR_6 ;
 TYPE_2__* FUNC_3 (int *) ;
 void* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 void* FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct urb*,struct usb_device*,unsigned int,scalar_t__,scalar_t__,int ,struct recv_buf*) ;
 int FUNC_8 (struct urb*,int ) ;

u32 FUNC_9(struct intf_hdl *VAR_7, u32 VAR_8, u32 VAR_9, u8 *VAR_10)
{
 unsigned int VAR_11;
 int VAR_12;
 u32 VAR_13 = 0;
 int VAR_14 = 0;
 u32 VAR_15 = VAR_5;
 struct urb *VAR_16 = ((void*)0);
 struct recv_buf *VAR_17 = (struct recv_buf *)VAR_10;
 struct intf_priv *VAR_18 = VAR_7->pintfpriv;
 struct dvobj_priv *VAR_19 = (struct dvobj_priv *)VAR_18->intf_dev;
 struct _adapter *VAR_20 = VAR_19->padapter;
 struct recv_priv *VAR_21 = &VAR_20->recvpriv;
 struct usb_device *VAR_22 = VAR_19->pusbdev;

 if (VAR_20->driver_stopped || VAR_20->surprise_removed ||
     VAR_20->pwrctrlpriv.pnp_bstop_trx || !VAR_17)
  return VAR_4;
 FUNC_2(VAR_20, VAR_17);

 VAR_17->pskb = FUNC_3(&VAR_21->free_recv_skb_queue);

 if (!VAR_17->pskb) {
  VAR_17->pskb = FUNC_1(VAR_20->pnetdev,
     VAR_2 + VAR_3);
  if (!VAR_17->pskb)
   return VAR_4;
  VAR_13 = (addr_t)VAR_17->pskb->data;
  VAR_14 = VAR_13 & (VAR_3 - 1);
  FUNC_5(VAR_17->pskb,
       (VAR_3 - VAR_14));
  VAR_17->phead = VAR_17->pskb->head;
  VAR_17->pdata = VAR_17->pskb->data;
  VAR_17->ptail = FUNC_6(VAR_17->pskb);
  VAR_17->pend = FUNC_4(VAR_17->pskb);
  VAR_17->pbuf = VAR_17->pskb->data;
 } else {
  VAR_17->phead = VAR_17->pskb->head;
  VAR_17->pdata = VAR_17->pskb->data;
  VAR_17->ptail = FUNC_6(VAR_17->pskb);
  VAR_17->pend = FUNC_4(VAR_17->pskb);
  VAR_17->pbuf = VAR_17->pskb->data;
 }
 VAR_16 = VAR_17->purb;

 VAR_11 = FUNC_0(VAR_19, VAR_8);
 FUNC_7(VAR_16, VAR_22, VAR_11,
     VAR_17->pbuf, VAR_2,
     VAR_6,
     VAR_17);
 VAR_12 = FUNC_8(VAR_16, VAR_1);
 if ((VAR_12) && (VAR_12 != (-VAR_0)))
  VAR_15 = VAR_4;
 return VAR_15;
}
