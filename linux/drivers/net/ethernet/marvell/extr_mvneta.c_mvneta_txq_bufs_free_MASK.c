
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct mvneta_tx_queue {int txq_get_index; struct sk_buff** tx_skb; struct mvneta_tx_desc* descs; } ;
struct mvneta_tx_desc {int data_size; int buf_phys_addr; } ;
struct mvneta_port {TYPE_2__* dev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mvneta_tx_queue*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct mvneta_tx_queue*) ;
 int FUNC_4 (struct netdev_queue*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct mvneta_port *VAR_1,
     struct mvneta_tx_queue *VAR_2, int VAR_3,
     struct netdev_queue *VAR_4)
{
 unsigned int VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct mvneta_tx_desc *VAR_8 = VAR_2->descs +
   VAR_2->txq_get_index;
  struct sk_buff *VAR_9 = VAR_2->tx_skb[VAR_2->txq_get_index];

  if (VAR_9) {
   VAR_5 += VAR_9->len;
   VAR_6++;
  }

  FUNC_3(VAR_2);

  if (!FUNC_0(VAR_2, VAR_8->buf_phys_addr))
   FUNC_2(VAR_1->dev->dev.parent,
      VAR_8->buf_phys_addr,
      VAR_8->data_size, VAR_0);
  if (!VAR_9)
   continue;
  FUNC_1(VAR_9);
 }

 FUNC_4(VAR_4, VAR_6, VAR_5);
}
