
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int usb_dev; } ;
struct tx_cxt {int lock; } ;
struct rx_cxt {int avail_count; int rx_lock; } ;
struct phy_dev {struct lte_udev* priv_dev; } ;
struct TYPE_2__ {int work; } ;
struct lte_udev {scalar_t__ usb_state; TYPE_1__ work_tx; struct tx_cxt tx; int rx_cb; struct rx_cxt rx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lte_udev*,int ,struct phy_dev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct phy_dev* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_4)
{
 struct phy_dev *VAR_5;
 struct lte_udev *VAR_6;
 struct tx_cxt *VAR_7;
 struct rx_cxt *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_5 = FUNC_5(VAR_4);
 VAR_6 = VAR_5->priv_dev;
 VAR_8 = &VAR_6->rx;

 if (VAR_6->usb_state != VAR_2) {
  FUNC_0(VAR_4->usb_dev, "usb resume - invalid state\n");
  return -1;
 }
 VAR_6->usb_state = VAR_1;

 FUNC_3(&VAR_8->rx_lock, VAR_9);
 VAR_10 = VAR_8->avail_count - VAR_0;
 FUNC_4(&VAR_8->rx_lock, VAR_9);

 if (VAR_10 >= 0) {
  for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
   FUNC_1(VAR_5->priv_dev,
         VAR_6->rx_cb,
         VAR_5,
         VAR_3);
 }

 VAR_7 = &VAR_6->tx;
 FUNC_3(&VAR_7->lock, VAR_9);
 FUNC_2(&VAR_6->work_tx.work);
 FUNC_4(&VAR_7->lock, VAR_9);

 return 0;
}
