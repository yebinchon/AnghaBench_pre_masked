
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct xmit_priv {int free_xmitbuf_cnt; int lock; int beq_cnt; int voq_cnt; int viq_cnt; int bkq_cnt; int txirp_cnt; } ;
struct pkt_attrib {int priority; } ;
struct xmit_frame {int* bpending; int mem_addr; struct urb** pxmit_urb; scalar_t__* sz; struct pkt_attrib attrib; } ;
struct usb_device {int dummy; } ;
struct urb {int transfer_flags; } ;
struct intf_hdl {scalar_t__ adapter; } ;
struct dvobj_priv {scalar_t__ ishighspeed; struct usb_device* pusbdev; } ;
struct TYPE_2__ {scalar_t__ pnp_bstop_trx; } ;
struct _adapter {TYPE_1__ pwrctrlpriv; scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct xmit_priv xmitpriv; struct dvobj_priv dvobjpriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (struct dvobj_priv*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct urb*,struct usb_device*,unsigned int,int ,int,int ,struct xmit_frame*) ;
 int FUNC_4 (struct urb*,int ) ;
 int VAR_5 ;

u32 FUNC_5(struct intf_hdl *VAR_6, u32 VAR_7, u32 VAR_8, u8 *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 unsigned int VAR_13;
 u32 VAR_14, VAR_15;
 struct urb *VAR_16 = ((void*)0);
 struct _adapter *VAR_17 = (struct _adapter *)VAR_6->adapter;
 struct dvobj_priv *VAR_18 = &VAR_17->dvobjpriv;
 struct xmit_priv *VAR_19 = &VAR_17->xmitpriv;
 struct xmit_frame *VAR_20 = (struct xmit_frame *)VAR_9;
 struct usb_device *VAR_21 = VAR_18->pusbdev;
 struct pkt_attrib *VAR_22 = &VAR_20->attrib;

 if ((VAR_17->driver_stopped) || (VAR_17->surprise_removed) ||
     (VAR_17->pwrctrlpriv.pnp_bstop_trx))
  return VAR_3;
 for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
  if (!VAR_20->bpending[VAR_11]) {
   FUNC_1(&VAR_19->lock, VAR_10);
   VAR_19->txirp_cnt++;
   VAR_20->bpending[VAR_11] = 1;
   switch (VAR_22->priority) {
   case 1:
   case 2:
    VAR_19->bkq_cnt++;
    break;
   case 4:
   case 5:
    VAR_19->viq_cnt++;
    break;
   case 6:
   case 7:
    VAR_19->voq_cnt++;
    break;
   case 0:
   case 3:
   default:
    VAR_19->beq_cnt++;
    break;
   }
   FUNC_2(&VAR_19->lock, VAR_10);
   VAR_20->sz[VAR_11] = (u16)VAR_8;
   VAR_16 = VAR_20->pxmit_urb[VAR_11];
   break;
  }
 }
 VAR_15 = 0;
 if (VAR_18->ishighspeed) {
  if (VAR_8 > 0 && VAR_8 % 512 == 0)
   VAR_15 = 1;
 } else {
  if (VAR_8 > 0 && VAR_8 % 64 == 0)
   VAR_15 = 1;
 }

 VAR_13 = FUNC_0(VAR_18, VAR_7);
 if (VAR_19->free_xmitbuf_cnt % VAR_1 == 0)
  VAR_16->transfer_flags &= (~VAR_2);
 else
  VAR_16->transfer_flags |= VAR_2;
 if (VAR_15)
  VAR_8 += 8;
 FUNC_3(VAR_16, VAR_21, VAR_13,
     VAR_20->mem_addr,
     VAR_8, VAR_5,
     VAR_20);
 VAR_12 = FUNC_4(VAR_16, VAR_0);
 if (!VAR_12)
  VAR_14 = VAR_4;
 else
  VAR_14 = VAR_3;
 return VAR_14;
}
