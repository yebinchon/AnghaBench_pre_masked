
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct usb_interface {int dummy; } ;
struct lan78xx_priv {int wol; } ;
struct TYPE_6__ {int lock; } ;
struct lan78xx_net {int stat_monitor; int flags; int net; int urb_intr; TYPE_2__ txq; TYPE_2__ txq_pend; int suspend_count; scalar_t__* data; } ;
struct TYPE_5__ {int event; } ;
typedef TYPE_1__ pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct lan78xx_net*,int ,int*) ;
 int FUNC_3 (struct lan78xx_net*,int ) ;
 int FUNC_4 (struct lan78xx_net*) ;
 int FUNC_5 (struct lan78xx_net*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 struct lan78xx_net* FUNC_13 (struct usb_interface*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_19, pm_message_t VAR_20)
{
 struct lan78xx_net *VAR_21 = FUNC_13(VAR_19);
 struct lan78xx_priv *VAR_22 = (struct lan78xx_priv *)(VAR_21->data[0]);
 u32 VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_25 = VAR_20.event;

 if (!VAR_21->suspend_count++) {
  FUNC_10(&VAR_21->txq.lock);

  if ((FUNC_9(&VAR_21->txq) ||
       FUNC_9(&VAR_21->txq_pend)) &&
   FUNC_0(VAR_20)) {
   FUNC_11(&VAR_21->txq.lock);
   VAR_24 = -VAR_0;
   goto out;
  } else {
   FUNC_8(VAR_1, &VAR_21->flags);
   FUNC_11(&VAR_21->txq.lock);
  }


  VAR_24 = FUNC_2(VAR_21, VAR_4, &VAR_23);
  VAR_23 &= ~VAR_5;
  VAR_24 = FUNC_5(VAR_21, VAR_4, VAR_23);
  VAR_24 = FUNC_2(VAR_21, VAR_2, &VAR_23);
  VAR_23 &= ~VAR_3;
  VAR_24 = FUNC_5(VAR_21, VAR_2, VAR_23);


  FUNC_7(VAR_21->net);
  FUNC_4(VAR_21);
  FUNC_14(VAR_21->urb_intr);


  FUNC_6(VAR_21->net);
 }

 if (FUNC_12(VAR_1, &VAR_21->flags)) {
  FUNC_1(&VAR_21->stat_monitor);

  if (FUNC_0(VAR_20)) {

   VAR_24 = FUNC_2(VAR_21, VAR_4, &VAR_23);
   VAR_23 &= ~VAR_5;
   VAR_24 = FUNC_5(VAR_21, VAR_4, VAR_23);
   VAR_24 = FUNC_2(VAR_21, VAR_2, &VAR_23);
   VAR_23 &= ~VAR_3;
   VAR_24 = FUNC_5(VAR_21, VAR_2, VAR_23);

   VAR_24 = FUNC_5(VAR_21, VAR_15, 0);
   VAR_24 = FUNC_5(VAR_21, VAR_16, 0);
   VAR_24 = FUNC_5(VAR_21, VAR_14, 0xFFF1FF1FUL);


   VAR_24 = FUNC_2(VAR_21, VAR_15, &VAR_23);

   VAR_23 |= VAR_17;
   VAR_23 |= VAR_18;

   VAR_24 = FUNC_5(VAR_21, VAR_15, VAR_23);

   VAR_24 = FUNC_2(VAR_21, VAR_6, &VAR_23);

   VAR_23 &= ~VAR_8;
   VAR_23 |= VAR_9;

   VAR_23 |= VAR_7;
   VAR_23 |= VAR_12;
   VAR_23 &= ~VAR_11;
   VAR_23 |= VAR_10;

   VAR_24 = FUNC_5(VAR_21, VAR_6, VAR_23);

   VAR_24 = FUNC_2(VAR_21, VAR_6, &VAR_23);

   VAR_23 |= VAR_13;

   VAR_24 = FUNC_5(VAR_21, VAR_6, VAR_23);

   VAR_24 = FUNC_2(VAR_21, VAR_2, &VAR_23);
   VAR_23 |= VAR_3;
   VAR_24 = FUNC_5(VAR_21, VAR_2, VAR_23);
  } else {
   FUNC_3(VAR_21, VAR_22->wol);
  }
 }

 VAR_24 = 0;
out:
 return VAR_24;
}
