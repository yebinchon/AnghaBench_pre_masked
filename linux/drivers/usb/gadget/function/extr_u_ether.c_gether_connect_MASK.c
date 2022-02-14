
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct gether {TYPE_1__* in_ep; TYPE_1__* out_ep; int (* close ) (struct gether*) ;int (* open ) (struct gether*) ;int wrap; int unwrap; int header_len; int is_zlp_ok; struct eth_dev* ioport; } ;
struct eth_dev {struct net_device* net; int lock; struct gether* port_usb; int wrap; int unwrap; int header_len; int qmult; int gadget; int no_skb_reserve; int zlp; } ;
struct TYPE_3__ {int name; struct eth_dev* driver_data; } ;


 int FUNC_0 (struct eth_dev*,char*,int ,...) ;
 int VAR_0 ;
 struct net_device* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct eth_dev*,struct gether*,int ) ;
 int FUNC_3 (struct eth_dev*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct gether*) ;
 int FUNC_11 (struct gether*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

struct net_device *FUNC_14(struct gether *VAR_2)
{
 struct eth_dev *VAR_3 = VAR_2->ioport;
 int VAR_4 = 0;

 if (!VAR_3)
  return FUNC_1(-VAR_0);

 VAR_2->in_ep->driver_data = VAR_3;
 VAR_4 = FUNC_13(VAR_2->in_ep);
 if (VAR_4 != 0) {
  FUNC_0(VAR_3, "enable %s --> %d\n",
   VAR_2->in_ep->name, VAR_4);
  goto fail0;
 }

 VAR_2->out_ep->driver_data = VAR_3;
 VAR_4 = FUNC_13(VAR_2->out_ep);
 if (VAR_4 != 0) {
  FUNC_0(VAR_3, "enable %s --> %d\n",
   VAR_2->out_ep->name, VAR_4);
  goto fail1;
 }

 if (VAR_4 == 0)
  VAR_4 = FUNC_2(VAR_3, VAR_2, FUNC_7(VAR_3->gadget,
     VAR_3->qmult));

 if (VAR_4 == 0) {
  VAR_3->zlp = VAR_2->is_zlp_ok;
  VAR_3->no_skb_reserve = FUNC_4(VAR_3->gadget);
  FUNC_0(VAR_3, "qlen %d\n", FUNC_7(VAR_3->gadget, VAR_3->qmult));

  VAR_3->header_len = VAR_2->header_len;
  VAR_3->unwrap = VAR_2->unwrap;
  VAR_3->wrap = VAR_2->wrap;

  FUNC_8(&VAR_3->lock);
  VAR_3->port_usb = VAR_2;
  if (FUNC_6(VAR_3->net)) {
   if (VAR_2->open)
    VAR_2->open(VAR_2);
  } else {
   if (VAR_2->close)
    VAR_2->close(VAR_2);
  }
  FUNC_9(&VAR_3->lock);

  FUNC_5(VAR_3->net);
  if (FUNC_6(VAR_3->net))
   FUNC_3(VAR_3, VAR_1);


 } else {
  (void) FUNC_12(VAR_2->out_ep);
fail1:
  (void) FUNC_12(VAR_2->in_ep);
 }
fail0:

 if (VAR_4 < 0)
  return FUNC_1(VAR_4);
 return VAR_3->net;
}
