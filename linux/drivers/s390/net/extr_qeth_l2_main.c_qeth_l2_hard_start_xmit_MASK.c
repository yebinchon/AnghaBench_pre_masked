
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int len; } ;
struct qeth_qdio_out_q {int dummy; } ;
struct TYPE_3__ {struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {TYPE_1__ qdio; } ;
struct net_device {struct qeth_card* ml_priv; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int pkt_len; } ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_2 (struct qeth_qdio_out_q*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_2__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 size_t FUNC_6 (struct net_device*,size_t) ;
 int VAR_1 ;
 int FUNC_7 (struct qeth_card*,struct sk_buff*,struct qeth_qdio_out_q*) ;
 int FUNC_8 (struct qeth_card*,struct sk_buff*,struct qeth_qdio_out_q*,int ,int ) ;
 size_t FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int VAR_2 ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_3,
        struct net_device *VAR_4)
{
 struct qeth_card *VAR_5 = VAR_4->ml_priv;
 u16 VAR_6 = FUNC_9(VAR_3);
 struct qeth_qdio_out_q *VAR_7;
 int VAR_8;

 if (!FUNC_10(VAR_3))
  FUNC_4(VAR_3)->pkt_len = VAR_3->len;
 if (FUNC_0(VAR_5))
  VAR_6 = FUNC_6(VAR_4, VAR_6);
 VAR_7 = VAR_5->qdio.out_qs[VAR_6];

 if (FUNC_1(VAR_5))
  VAR_8 = FUNC_7(VAR_5, VAR_3, VAR_7);
 else
  VAR_8 = FUNC_8(VAR_5, VAR_3, VAR_7, FUNC_5(VAR_3),
          VAR_1);

 if (!VAR_8)
  return VAR_0;

 FUNC_2(VAR_7, VAR_2);
 FUNC_3(VAR_3);
 return VAR_0;
}
