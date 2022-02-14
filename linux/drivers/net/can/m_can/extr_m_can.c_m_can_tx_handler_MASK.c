
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_4__ {int tx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int ctrlmode; } ;
struct m_can_classdev {int version; scalar_t__ is_peripheral; TYPE_1__ can; struct sk_buff* tx_skb; struct net_device* net; } ;
struct canfd_frame {int can_id; int len; int flags; scalar_t__ data; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct m_can_classdev*,int,int ,int) ;
 scalar_t__ FUNC_6 (struct net_device*,int) ;
 int FUNC_7 (struct m_can_classdev*,int ) ;
 scalar_t__ FUNC_8 (struct m_can_classdev*) ;
 int FUNC_9 (struct m_can_classdev*,int ,int) ;
 int FUNC_10 (struct net_device*,char*) ;
 int FUNC_11 (struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct m_can_classdev *VAR_28)
{
 struct canfd_frame *VAR_29 = (struct canfd_frame *)VAR_28->tx_skb->data;
 struct net_device *VAR_30 = VAR_28->net;
 struct sk_buff *VAR_31 = VAR_28->tx_skb;
 u32 VAR_32, VAR_33, VAR_34;
 int VAR_35;
 int VAR_36;



 if (VAR_29->can_id & VAR_2) {
  VAR_32 = VAR_29->can_id & VAR_3;
  VAR_32 |= VAR_27;
 } else {
  VAR_32 = ((VAR_29->can_id & VAR_5) << 18);
 }

 if (VAR_29->can_id & VAR_4)
  VAR_32 |= VAR_26;

 if (VAR_28->version == 30) {
  FUNC_11(VAR_30);


  FUNC_5(VAR_28, 0, VAR_13, VAR_32);
  FUNC_5(VAR_28, 0, VAR_12,
     FUNC_2(VAR_29->len) << 16);

  for (VAR_35 = 0; VAR_35 < VAR_29->len; VAR_35 += 4)
   FUNC_5(VAR_28, 0,
      FUNC_0(VAR_35 / 4),
      *(u32 *)(VAR_29->data + VAR_35));

  FUNC_3(VAR_31, VAR_30, 0);

  if (VAR_28->can.ctrlmode & VAR_1) {
   VAR_33 = FUNC_7(VAR_28, VAR_11);
   VAR_33 &= ~(VAR_9 << VAR_10);
   if (FUNC_1(VAR_31)) {
    if (VAR_29->flags & VAR_0)
     VAR_33 |= VAR_8 <<
      VAR_10;
    else
     VAR_33 |= VAR_7 <<
      VAR_10;
   } else {
    VAR_33 |= VAR_6 << VAR_10;
   }
   FUNC_9(VAR_28, VAR_11, VAR_33);
  }
  FUNC_9(VAR_28, VAR_15, 0x1);
  FUNC_9(VAR_28, VAR_14, 0x1);

 } else {



  if (FUNC_8(VAR_28)) {

   FUNC_11(VAR_30);
   FUNC_10(VAR_30,
        "TX queue active although FIFO is full.");

   if (VAR_28->is_peripheral) {
    FUNC_4(VAR_31);
    VAR_30->stats.tx_dropped++;
    return VAR_18;
   } else {
    return VAR_17;
   }
  }


  VAR_36 = ((FUNC_7(VAR_28, VAR_16) & VAR_19)
      >> VAR_20);

  FUNC_5(VAR_28, VAR_36, VAR_13, VAR_32);


  VAR_34 = 0;
  if (FUNC_1(VAR_31)) {
   VAR_34 |= VAR_23;
   if (VAR_29->flags & VAR_0)
    VAR_34 |= VAR_21;
  }






  FUNC_5(VAR_28, VAR_36, VAR_12,
     ((VAR_36 << VAR_25) &
      VAR_24) |
     (FUNC_2(VAR_29->len) << 16) |
     VAR_34 | VAR_22);

  for (VAR_35 = 0; VAR_35 < VAR_29->len; VAR_35 += 4)
   FUNC_5(VAR_28, VAR_36, FUNC_0(VAR_35 / 4),
      *(u32 *)(VAR_29->data + VAR_35));




  FUNC_3(VAR_31, VAR_30, VAR_36);


  FUNC_9(VAR_28, VAR_14, (1 << VAR_36));


  if (FUNC_8(VAR_28) ||
      FUNC_6(VAR_30, VAR_36))
   FUNC_11(VAR_30);
 }

 return VAR_18;
}
