
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int protocol; int data_len; } ;
struct qede_fastpath {TYPE_2__* rxq; } ;
struct qede_dev {int dummy; } ;
struct TYPE_4__ {int rxq_id; } ;
struct TYPE_3__ {scalar_t__ gso_size; scalar_t__ gso_type; } ;


 int FUNC_0 (struct qede_dev*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct qede_dev*,struct qede_fastpath*,TYPE_2__*,struct sk_buff*,int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct qede_dev *VAR_2,
        struct qede_fastpath *VAR_3,
        struct sk_buff *VAR_4,
        u16 VAR_5)
{





 if (FUNC_9(!VAR_4->data_len)) {
  FUNC_8(VAR_4)->gso_type = 0;
  FUNC_8(VAR_4)->gso_size = 0;
  goto send_skb;
 }
send_skb:
 FUNC_6(VAR_4, VAR_3->rxq->rxq_id);
 FUNC_5(VAR_2, VAR_3, VAR_3->rxq, VAR_4, VAR_5);
}
