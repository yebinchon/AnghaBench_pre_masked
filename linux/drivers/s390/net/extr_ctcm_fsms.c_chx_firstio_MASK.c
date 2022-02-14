
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {struct ctcm_priv* ml_priv; } ;
struct ctcm_priv {int fsm; } ;
struct channel {scalar_t__ protocol; struct net_device* netdev; int flags; int timer; TYPE_2__* ccw; int cdev; TYPE_1__* trans_skb; int id; scalar_t__ sense_rc; } ;
typedef int fsm_instance ;
typedef int __u16 ;
struct TYPE_4__ {int count; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 int FUNC_2 (int ,TYPE_2__*,int ,int,int ) ;
 int FUNC_3 (int *,int,void*) ;
 int FUNC_4 (struct channel*,int,char*) ;
 scalar_t__ FUNC_5 (struct channel*) ;
 int FUNC_6 (int *,int ,int ,struct channel*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static void FUNC_11(fsm_instance *VAR_17, int VAR_18, void *VAR_19)
{
 int VAR_20;
 struct channel *VAR_21 = VAR_19;
 int VAR_22 = FUNC_9(VAR_17);

 FUNC_1(VAR_16, VAR_8,
  "%s(%s) : %02x",
  VAR_0, VAR_21->id, VAR_22);

 VAR_21->sense_rc = 0;
 if (VAR_22 == VAR_12)
  FUNC_1(VAR_16, VAR_7,
   "%s(%s): remote side issued READ?, init.\n",
    VAR_0, VAR_21->id);
 FUNC_7(&VAR_21->timer);
 if (FUNC_5(VAR_21))
  return;
 if ((VAR_22 == VAR_11) &&
     (VAR_21->protocol == VAR_2)) {

  if (FUNC_0(VAR_21->flags) == VAR_4) {
   *((__u16 *)VAR_21->trans_skb->data) = VAR_1;
   FUNC_6(&VAR_21->timer, VAR_5,
         VAR_9, VAR_21);
   FUNC_3(VAR_17, VAR_18, VAR_19);
  } else {
   struct net_device *VAR_23 = VAR_21->netdev;
   struct ctcm_priv *VAR_24 = VAR_23->ml_priv;
   FUNC_10(VAR_17, VAR_12);
   FUNC_8(VAR_24->fsm, VAR_15, VAR_23);
  }
  return;
 }





 if ((FUNC_0(VAR_21->flags) == VAR_6) ||
     (VAR_21->protocol != VAR_3))
  FUNC_6(&VAR_21->timer, VAR_5, VAR_9, VAR_21);

 *((__u16 *)VAR_21->trans_skb->data) = VAR_1;
 VAR_21->ccw[1].count = 2;

 FUNC_10(VAR_17, (FUNC_0(VAR_21->flags) == VAR_4)
       ? VAR_10 : VAR_13);
 VAR_20 = FUNC_2(VAR_21->cdev, &VAR_21->ccw[0], 0, 0xff, 0);
 if (VAR_20 != 0) {
  FUNC_7(&VAR_21->timer);
  FUNC_10(VAR_17, VAR_11);
  FUNC_4(VAR_21, VAR_20, "init IO");
 }







 if ((FUNC_0(VAR_21->flags) == VAR_4) &&
     (VAR_21->protocol == VAR_3)) {
  struct net_device *VAR_25 = VAR_21->netdev;
  struct ctcm_priv *VAR_26 = VAR_25->ml_priv;
  FUNC_8(VAR_26->fsm, VAR_14, VAR_25);
 }
}
