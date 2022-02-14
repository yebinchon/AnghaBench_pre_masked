
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int (* enable ) (struct r8152*) ;} ;
struct r8152 {int napi; int rx_done; int intr_urb; int tx_tl; int control; TYPE_1__ rtl_ops; int flags; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct r8152*,struct sockaddr*) ;
 int FUNC_2 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct r8152*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (struct r8152*) ;
 int FUNC_16 (int *) ;
 struct r8152* FUNC_17 (struct usb_interface*) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static int FUNC_19(struct usb_interface *VAR_2)
{
 struct r8152 *VAR_3 = FUNC_17(VAR_2);
 struct net_device *VAR_4;
 struct sockaddr VAR_5;

 if (!VAR_3)
  return 0;


 if (FUNC_1(VAR_3, &VAR_5) >= 0) {
  FUNC_12();
  FUNC_2 (VAR_3->netdev, &VAR_5, ((void*)0));
  FUNC_13();
 }

 VAR_4 = VAR_3->netdev;
 if (!FUNC_9(VAR_4))
  return 0;

 FUNC_14(VAR_1, &VAR_3->flags);
 if (FUNC_8(VAR_4)) {
  FUNC_4(&VAR_3->control);
  VAR_3->rtl_ops.enable(VAR_3);
  FUNC_11(VAR_3);
  FUNC_0(VAR_4);
  FUNC_5(&VAR_3->control);
 }

 FUNC_6(&VAR_3->napi);
 FUNC_16(&VAR_3->tx_tl);
 FUNC_10(VAR_4);
 FUNC_18(VAR_3->intr_urb, VAR_0);

 if (!FUNC_3(&VAR_3->rx_done))
  FUNC_7(&VAR_3->napi);

 return 0;
}
