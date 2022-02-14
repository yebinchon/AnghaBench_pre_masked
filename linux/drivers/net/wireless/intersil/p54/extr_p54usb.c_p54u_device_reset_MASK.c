
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct p54u_priv {TYPE_1__* udev; TYPE_4__* intf; } ;
struct ieee80211_hw {struct p54u_priv* priv; } ;
struct TYPE_6__ {scalar_t__ condition; } ;
struct TYPE_5__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct p54u_priv *VAR_2 = VAR_1->priv;
 int VAR_3, VAR_4 = (VAR_2->intf->condition != VAR_0);

 if (VAR_4) {
  VAR_3 = FUNC_1(VAR_2->udev, VAR_2->intf);
  if (VAR_3 < 0) {
   FUNC_0(&VAR_2->udev->dev, "(p54usb) unable to lock "
    "device for reset (%d)!\n", VAR_3);
   return VAR_3;
  }
 }

 VAR_3 = FUNC_2(VAR_2->udev);
 if (VAR_4)
  FUNC_3(VAR_2->udev);

 if (VAR_3)
  FUNC_0(&VAR_2->udev->dev, "(p54usb) unable to reset "
   "device (%d)!\n", VAR_3);

 return VAR_3;
}
