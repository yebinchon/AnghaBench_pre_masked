
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct mvneta_tx_queue {size_t txq_put_index; struct sk_buff** tx_skb; } ;
struct mvneta_tx_desc {int data_size; scalar_t__ command; int buf_phys_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mvneta_tx_queue*) ;
 int FUNC_3 (struct mvneta_tx_queue*) ;
 struct mvneta_tx_desc* FUNC_4 (struct mvneta_tx_queue*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline int
FUNC_6(struct net_device *VAR_3, struct mvneta_tx_queue *VAR_4,
      struct sk_buff *VAR_5, char *VAR_6, int VAR_7,
      bool VAR_8, bool VAR_9)
{
 struct mvneta_tx_desc *VAR_10;

 VAR_10 = FUNC_4(VAR_4);
 VAR_10->data_size = VAR_7;
 VAR_10->buf_phys_addr = FUNC_0(VAR_3->dev.parent, VAR_6,
      VAR_7, VAR_0);
 if (FUNC_5(FUNC_1(VAR_3->dev.parent,
       VAR_10->buf_phys_addr))) {
  FUNC_2(VAR_4);
  return -VAR_1;
 }

 VAR_10->command = 0;
 VAR_4->tx_skb[VAR_4->txq_put_index] = ((void*)0);

 if (VAR_8) {

  VAR_10->command = VAR_2;


  if (VAR_9)
   VAR_4->tx_skb[VAR_4->txq_put_index] = VAR_5;
 }
 FUNC_3(VAR_4);
 return 0;
}
