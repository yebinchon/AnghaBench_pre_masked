
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mvneta_tx_queue {size_t txq_put_index; struct mvneta_tx_desc* descs; struct sk_buff** tx_skb; } ;
struct mvneta_tx_desc {int command; int data_size; int buf_phys_addr; } ;
struct mvneta_port {TYPE_2__* dev; } ;
typedef int skb_frag_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct mvneta_tx_queue*) ;
 int FUNC_4 (struct mvneta_tx_queue*) ;
 struct mvneta_tx_desc* FUNC_5 (struct mvneta_tx_queue*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct mvneta_port *VAR_4, struct sk_buff *VAR_5,
      struct mvneta_tx_queue *VAR_6)
{
 struct mvneta_tx_desc *VAR_7;
 int VAR_8, VAR_9 = FUNC_8(VAR_5)->nr_frags;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  skb_frag_t *VAR_10 = &FUNC_8(VAR_5)->frags[VAR_8];
  void *VAR_11 = FUNC_6(VAR_10);

  VAR_7 = FUNC_5(VAR_6);
  VAR_7->data_size = FUNC_7(VAR_10);

  VAR_7->buf_phys_addr =
   FUNC_0(VAR_4->dev->dev.parent, VAR_11,
           VAR_7->data_size, VAR_0);

  if (FUNC_1(VAR_4->dev->dev.parent,
          VAR_7->buf_phys_addr)) {
   FUNC_3(VAR_6);
   goto error;
  }

  if (VAR_8 == VAR_9 - 1) {

   VAR_7->command = VAR_2 | VAR_3;
   VAR_6->tx_skb[VAR_6->txq_put_index] = VAR_5;
  } else {

   VAR_7->command = 0;
   VAR_6->tx_skb[VAR_6->txq_put_index] = ((void*)0);
  }
  FUNC_4(VAR_6);
 }

 return 0;

error:



 for (VAR_8 = VAR_8 - 1; VAR_8 >= 0; VAR_8--) {
  VAR_7 = VAR_6->descs + VAR_8;
  FUNC_2(VAR_4->dev->dev.parent,
     VAR_7->buf_phys_addr,
     VAR_7->data_size,
     VAR_0);
  FUNC_3(VAR_6);
 }

 return -VAR_1;
}
