
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {scalar_t__ protocol; int len; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct TYPE_5__ {struct qeth_qdio_out_q** out_qs; } ;
struct TYPE_4__ {scalar_t__ cq; scalar_t__ sniffer; } ;
struct qeth_card {TYPE_2__ qdio; TYPE_1__ options; } ;
struct net_device {int flags; struct qeth_card* ml_priv; } ;
typedef int netdev_tx_t ;
struct TYPE_6__ {int pkt_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct qeth_qdio_out_q*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_3__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 size_t FUNC_6 (struct net_device*,size_t) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct qeth_card*,struct sk_buff*,struct qeth_qdio_out_q*,int) ;
 int FUNC_9 (struct qeth_card*,struct sk_buff*,struct qeth_qdio_out_q*,int,int ) ;
 size_t FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int VAR_6 ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_7,
        struct net_device *VAR_8)
{
 struct qeth_card *VAR_9 = VAR_8->ml_priv;
 u16 VAR_10 = FUNC_10(VAR_7);
 int VAR_11 = FUNC_5(VAR_7);
 struct qeth_qdio_out_q *VAR_12;
 int VAR_13;

 if (!FUNC_11(VAR_7))
  FUNC_4(VAR_7)->pkt_len = VAR_7->len;
 if (FUNC_0(VAR_9)) {
  VAR_12 = VAR_9->qdio.out_qs[FUNC_6(VAR_8, VAR_10)];

  if (VAR_9->options.sniffer)
   goto tx_drop;
  if ((VAR_9->options.cq != VAR_3 && !VAR_11) ||
      (VAR_9->options.cq == VAR_3 &&
       VAR_7->protocol != FUNC_2(VAR_0)))
   goto tx_drop;
 } else {
  VAR_12 = VAR_9->qdio.out_qs[VAR_10];
 }

 if (!(VAR_8->flags & VAR_1) &&
     FUNC_7(VAR_7) == VAR_4)
  goto tx_drop;

 if (VAR_11 == 4 || FUNC_0(VAR_9))
  VAR_13 = FUNC_8(VAR_9, VAR_7, VAR_12, VAR_11);
 else
  VAR_13 = FUNC_9(VAR_9, VAR_7, VAR_12, VAR_11, VAR_5);

 if (!VAR_13)
  return VAR_2;

tx_drop:
 FUNC_1(VAR_12, VAR_6);
 FUNC_3(VAR_7);
 return VAR_2;
}
