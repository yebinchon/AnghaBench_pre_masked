
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int (* disable ) (struct r8152*) ;} ;
struct r8152 {int control; TYPE_1__ rtl_ops; int schedule; int intr_urb; int flags; int napi; int tx_tl; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct r8152*) ;
 int FUNC_9 (int *) ;
 struct r8152* FUNC_10 (struct usb_interface*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct usb_interface *VAR_1)
{
 struct r8152 *VAR_2 = FUNC_10(VAR_1);
 struct net_device *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = VAR_2->netdev;
 if (!FUNC_6(VAR_3))
  return 0;

 FUNC_7(VAR_3);
 FUNC_9(&VAR_2->tx_tl);
 FUNC_4(&VAR_2->napi);
 FUNC_1(VAR_0, &VAR_2->flags);
 FUNC_11(VAR_2->intr_urb);
 FUNC_0(&VAR_2->schedule);
 if (FUNC_5(VAR_3)) {
  FUNC_2(&VAR_2->control);
  VAR_2->rtl_ops.disable(VAR_2);
  FUNC_3(&VAR_2->control);
 }

 return 0;
}
