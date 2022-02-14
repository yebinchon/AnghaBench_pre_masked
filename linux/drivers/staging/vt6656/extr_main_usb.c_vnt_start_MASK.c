
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnt_private {int int_interval; int interrupt_urb; TYPE_1__* usb; int flags; int rx_buf_sz; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct vnt_private*) ;
 int FUNC_6 (struct vnt_private*) ;
 int FUNC_7 (struct vnt_private*) ;
 int FUNC_8 (struct vnt_private*) ;
 int FUNC_9 (struct vnt_private*) ;
 int FUNC_10 (struct vnt_private*) ;
 int FUNC_11 (struct vnt_private*) ;

__attribute__((used)) static int FUNC_12(struct ieee80211_hw *VAR_2)
{
 int VAR_3 = 0;
 struct vnt_private *VAR_4 = VAR_2->priv;

 VAR_4->rx_buf_sz = VAR_1;

 VAR_3 = FUNC_5(VAR_4);
 if (VAR_3) {
  FUNC_1(&VAR_4->usb->dev, "vnt_alloc_bufs fail...\n");
  goto err;
 }

 FUNC_0(VAR_0, &VAR_4->flags);

 VAR_3 = FUNC_9(VAR_4);
 if (VAR_3) {
  FUNC_1(&VAR_4->usb->dev, " init register fail\n");
  goto free_all;
 }

 VAR_3 = FUNC_11(VAR_4);
 if (VAR_3)
  goto free_all;

 VAR_4->int_interval = 1;

 VAR_3 = FUNC_10(VAR_4);
 if (VAR_3)
  goto free_all;

 FUNC_2(VAR_2);

 return 0;

free_all:
 FUNC_7(VAR_4);
 FUNC_8(VAR_4);
 FUNC_6(VAR_4);

 FUNC_4(VAR_4->interrupt_urb);
 FUNC_3(VAR_4->interrupt_urb);
err:
 return VAR_3;
}
