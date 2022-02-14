
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mvpp2_txq_pcpu {int dummy; } ;
struct mvpp2_tx_queue {struct mvpp2_tx_desc* descs; int id; int pcpu; } ;
struct mvpp2_tx_desc {int dummy; } ;
struct mvpp2_port {TYPE_2__* dev; int priv; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 unsigned int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_4 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_5 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_6 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_7 (struct mvpp2_tx_queue*) ;
 int FUNC_8 (struct mvpp2_port*,struct mvpp2_txq_pcpu*,struct sk_buff*,struct mvpp2_tx_desc*) ;
 struct mvpp2_tx_desc* FUNC_9 (struct mvpp2_tx_queue*) ;
 struct mvpp2_txq_pcpu* FUNC_10 (int ,unsigned int) ;
 void* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 () ;
 int FUNC_15 (struct mvpp2_port*,struct mvpp2_tx_queue*,struct mvpp2_tx_desc*) ;

__attribute__((used)) static int FUNC_16(struct mvpp2_port *VAR_3, struct sk_buff *VAR_4,
     struct mvpp2_tx_queue *VAR_5,
     struct mvpp2_tx_queue *VAR_6)
{
 unsigned int VAR_7 = FUNC_2(VAR_3->priv, FUNC_14());
 struct mvpp2_txq_pcpu *VAR_8 = FUNC_10(VAR_6->pcpu, VAR_7);
 struct mvpp2_tx_desc *VAR_9;
 int VAR_10;
 dma_addr_t VAR_11;

 for (VAR_10 = 0; VAR_10 < FUNC_13(VAR_4)->nr_frags; VAR_10++) {
  skb_frag_t *VAR_12 = &FUNC_13(VAR_4)->frags[VAR_10];
  void *VAR_13 = FUNC_11(VAR_12);

  VAR_9 = FUNC_9(VAR_5);
  FUNC_6(VAR_3, VAR_9, VAR_6->id);
  FUNC_5(VAR_3, VAR_9, FUNC_12(VAR_12));

  VAR_11 = FUNC_0(VAR_3->dev->dev.parent, VAR_13,
           FUNC_12(VAR_12),
           VAR_0);
  if (FUNC_1(VAR_3->dev->dev.parent, VAR_11)) {
   FUNC_7(VAR_6);
   goto cleanup;
  }

  FUNC_4(VAR_3, VAR_9, VAR_11);

  if (VAR_10 == (FUNC_13(VAR_4)->nr_frags - 1)) {

   FUNC_3(VAR_3, VAR_9,
          VAR_2);
   FUNC_8(VAR_3, VAR_8, VAR_4, VAR_9);
  } else {

   FUNC_3(VAR_3, VAR_9, 0);
   FUNC_8(VAR_3, VAR_8, ((void*)0), VAR_9);
  }
 }

 return 0;
cleanup:



 for (VAR_10 = VAR_10 - 1; VAR_10 >= 0; VAR_10--) {
  VAR_9 = VAR_6->descs + VAR_10;
  FUNC_15(VAR_3, VAR_6, VAR_9);
 }

 return -VAR_1;
}
