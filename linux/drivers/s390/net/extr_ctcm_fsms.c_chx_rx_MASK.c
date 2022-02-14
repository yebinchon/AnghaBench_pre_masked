
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct net_device {int name; struct ctcm_priv* ml_priv; } ;
struct TYPE_9__ {int rx_length_errors; int rx_dropped; } ;
struct ctcm_priv {TYPE_4__ stats; } ;
struct channel {int max_bufsize; int protocol; TYPE_5__* ccw; int cdev; scalar_t__ trans_skb_data; int timer; struct sk_buff* trans_skb; TYPE_3__* irb; struct net_device* netdev; } ;
typedef int fsm_instance ;
typedef int __u16 ;
struct TYPE_10__ {int count; } ;
struct TYPE_6__ {int count; } ;
struct TYPE_7__ {TYPE_1__ cmd; } ;
struct TYPE_8__ {TYPE_2__ scsw; } ;


 int FUNC_0 (int ,int ,char*,int ,int ,int,...) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_5__*,int ,int,int ) ;
 int FUNC_2 (struct channel*,int,char*) ;
 scalar_t__ FUNC_3 (struct channel*) ;
 int FUNC_4 (struct channel*,struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(fsm_instance *VAR_4, int VAR_5, void *VAR_6)
{
 struct channel *VAR_7 = VAR_6;
 struct net_device *VAR_8 = VAR_7->netdev;
 struct ctcm_priv *VAR_9 = VAR_8->ml_priv;
 int VAR_10 = VAR_7->max_bufsize - VAR_7->irb->scsw.cmd.count;
 struct sk_buff *VAR_11 = VAR_7->trans_skb;
 __u16 VAR_12 = *((__u16 *)VAR_11->data);
 int VAR_13;
 int VAR_14;

 FUNC_6(&VAR_7->timer);
 if (VAR_10 < 8) {
  FUNC_0(VAR_2, VAR_1,
   "%s(%s): got packet with length %d < 8\n",
     VAR_0, VAR_8->name, VAR_10);
  VAR_9->stats.rx_dropped++;
  VAR_9->stats.rx_length_errors++;
      goto again;
 }
 if (VAR_10 > VAR_7->max_bufsize) {
  FUNC_0(VAR_2, VAR_1,
   "%s(%s): got packet with length %d > %d\n",
    VAR_0, VAR_8->name, VAR_10, VAR_7->max_bufsize);
  VAR_9->stats.rx_dropped++;
  VAR_9->stats.rx_length_errors++;
      goto again;
 }




 switch (VAR_7->protocol) {
 case 128:
 case 129:
  VAR_13 = VAR_12 + 2;
  break;
 default:
  VAR_13 = VAR_12;
  break;
 }
 if ((VAR_10 < VAR_12) || (VAR_10 > VAR_13)) {
  FUNC_0(VAR_2, VAR_1,
   "%s(%s): got block length %d != rx length %d\n",
    VAR_0, VAR_8->name, VAR_12, VAR_10);
  if (VAR_3)
   FUNC_5(VAR_11, 0);

  *((__u16 *)VAR_11->data) = VAR_10;
  VAR_9->stats.rx_dropped++;
  VAR_9->stats.rx_length_errors++;
      goto again;
 }
 if (VAR_12 > 2) {
  *((__u16 *)VAR_11->data) = VAR_12 - 2;
  FUNC_4(VAR_7, VAR_11);
 }
 again:
 VAR_11->data = VAR_7->trans_skb_data;
 FUNC_7(VAR_11);
 VAR_11->len = 0;
 if (FUNC_3(VAR_7))
  return;
 VAR_7->ccw[1].count = VAR_7->max_bufsize;
 VAR_14 = FUNC_1(VAR_7->cdev, &VAR_7->ccw[0], 0, 0xff, 0);
 if (VAR_14 != 0)
  FUNC_2(VAR_7, VAR_14, "normal RX");
}
