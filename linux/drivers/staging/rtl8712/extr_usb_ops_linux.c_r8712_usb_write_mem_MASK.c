
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct usb_device {int dummy; } ;
struct urb {int dummy; } ;
struct io_queue {int dummy; } ;
struct intf_priv {int io_retevt_comp; struct urb* piorw_urb; scalar_t__ intf_dev; } ;
struct intf_hdl {struct intf_priv* pintfpriv; scalar_t__ adapter; } ;
struct dvobj_priv {struct usb_device* pusbdev; } ;
struct TYPE_2__ {scalar_t__ pnp_bstop_trx; } ;
struct _adapter {TYPE_1__ pwrctrlpriv; scalar_t__ surprise_removed; scalar_t__ driver_stopped; struct io_queue* pio_queue; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct dvobj_priv*,int ) ;
 int FUNC_1 (struct urb*,struct usb_device*,unsigned int,int *,int ,int ,struct io_queue*) ;
 int FUNC_2 (struct urb*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

void FUNC_4(struct intf_hdl *VAR_2, u32 VAR_3, u32 VAR_4, u8 *VAR_5)
{
 unsigned int VAR_6;
 struct _adapter *VAR_7 = (struct _adapter *)VAR_2->adapter;
 struct intf_priv *VAR_8 = VAR_2->pintfpriv;
 struct io_queue *VAR_9 = VAR_7->pio_queue;
 struct dvobj_priv *VAR_10 = (struct dvobj_priv *)VAR_8->intf_dev;
 struct usb_device *VAR_11 = VAR_10->pusbdev;
 struct urb *VAR_12 = VAR_8->piorw_urb;

 if ((VAR_7->driver_stopped) || (VAR_7->surprise_removed) ||
     (VAR_7->pwrctrlpriv.pnp_bstop_trx))
  return;

 VAR_6 = FUNC_0(VAR_10, VAR_3);
 if (VAR_6 == 0)
  return;
 FUNC_1(VAR_12, VAR_11, VAR_6,
     VAR_5, VAR_4, VAR_1,
     VAR_9);
 FUNC_2(VAR_12, VAR_0);
 FUNC_3(&VAR_8->io_retevt_comp);
}
