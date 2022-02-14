
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct skge_tx_desc {int control; } ;
struct skge_ring {int start; struct skge_element* to_clean; struct skge_element* to_use; } ;
struct skge_port {size_t port; struct skge_ring tx_ring; int netdev; TYPE_1__* hw; } ;
struct skge_element {TYPE_2__* skb; scalar_t__ desc; struct skge_element* next; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_3__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct net_device*,unsigned int,unsigned int) ;
 struct skge_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct skge_port*,int ,int ,int ,char*,struct skge_element*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct skge_ring*) ;
 int FUNC_10 (int ,struct skge_element*,int) ;
 int FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 () ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_8)
{
 struct skge_port *VAR_9 = FUNC_3(VAR_8);
 struct skge_ring *VAR_10 = &VAR_9->tx_ring;
 struct skge_element *VAR_11;
 unsigned int VAR_12 = 0, VAR_13 = 0;

 FUNC_11(VAR_9->hw, FUNC_0(VAR_7[VAR_9->port], VAR_4), VAR_2);

 for (VAR_11 = VAR_10->to_clean; VAR_11 != VAR_10->to_use; VAR_11 = VAR_11->next) {
  u32 VAR_14 = ((const struct skge_tx_desc *) VAR_11->desc)->control;

  if (VAR_14 & VAR_1)
   break;

  FUNC_10(VAR_9->hw->pdev, VAR_11, VAR_14);

  if (VAR_14 & VAR_0) {
   FUNC_4(VAR_9, VAR_6, VAR_3, VAR_9->netdev,
         "tx done slot %td\n",
         VAR_11 - VAR_9->tx_ring.start);

   VAR_13++;
   VAR_12 += VAR_11->skb->len;

   FUNC_1(VAR_11->skb);
  }
 }
 FUNC_2(VAR_8, VAR_13, VAR_12);
 VAR_9->tx_ring.to_clean = VAR_11;


 FUNC_12();

 if (FUNC_13(FUNC_5(VAR_8) &&
       FUNC_9(&VAR_9->tx_ring) > VAR_5)) {
  FUNC_6(VAR_8);
  if (FUNC_13(FUNC_5(VAR_8) &&
        FUNC_9(&VAR_9->tx_ring) > VAR_5)) {
   FUNC_8(VAR_8);

  }
  FUNC_7(VAR_8);
 }
}
