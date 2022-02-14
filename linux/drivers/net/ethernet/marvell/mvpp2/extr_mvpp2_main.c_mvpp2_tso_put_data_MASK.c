
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tso_t {int data; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;
struct mvpp2_txq_pcpu {int dummy; } ;
struct mvpp2_tx_queue {int id; } ;
struct mvpp2_tx_desc {int dummy; } ;
struct mvpp2_port {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_3 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_4 (struct mvpp2_port*,struct mvpp2_tx_desc*,int) ;
 int FUNC_5 (struct mvpp2_port*,struct mvpp2_tx_desc*,int ) ;
 int FUNC_6 (struct mvpp2_tx_queue*) ;
 int FUNC_7 (struct mvpp2_port*,struct mvpp2_txq_pcpu*,struct sk_buff*,struct mvpp2_tx_desc*) ;
 struct mvpp2_tx_desc* FUNC_8 (struct mvpp2_tx_queue*) ;
 struct mvpp2_port* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static inline int FUNC_11(struct sk_buff *VAR_3,
         struct net_device *VAR_4, struct tso_t *VAR_5,
         struct mvpp2_tx_queue *VAR_6,
         struct mvpp2_tx_queue *VAR_7,
         struct mvpp2_txq_pcpu *VAR_8,
         int VAR_9, bool VAR_10, bool VAR_11)
{
 struct mvpp2_port *VAR_12 = FUNC_9(VAR_4);
 struct mvpp2_tx_desc *VAR_13 = FUNC_8(VAR_7);
 dma_addr_t VAR_14;

 FUNC_5(VAR_12, VAR_13, VAR_6->id);
 FUNC_4(VAR_12, VAR_13, VAR_9);

 VAR_14 = FUNC_0(VAR_4->dev.parent, VAR_5->data, VAR_9,
          VAR_0);
 if (FUNC_10(FUNC_1(VAR_4->dev.parent, VAR_14))) {
  FUNC_6(VAR_6);
  return -VAR_1;
 }

 FUNC_3(VAR_12, VAR_13, VAR_14);

 if (!VAR_10) {
  FUNC_2(VAR_12, VAR_13, VAR_2);
  if (VAR_11) {
   FUNC_7(VAR_12, VAR_8, VAR_3, VAR_13);
   return 0;
  }
 } else {
  FUNC_2(VAR_12, VAR_13, 0);
 }

 FUNC_7(VAR_12, VAR_8, ((void*)0), VAR_13);
 return 0;
}
