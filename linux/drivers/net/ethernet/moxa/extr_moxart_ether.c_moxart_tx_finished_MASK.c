
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; int dev; } ;
struct moxart_mac_priv_t {unsigned int tx_head; unsigned int tx_tail; TYPE_2__** tx_skb; int * tx_len; int * tx_mapping; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct moxart_mac_priv_t* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_2)
{
 struct moxart_mac_priv_t *VAR_3 = FUNC_4(VAR_2);
 unsigned int VAR_4 = VAR_3->tx_head;
 unsigned int VAR_5 = VAR_3->tx_tail;

 while (VAR_5 != VAR_4) {
  FUNC_2(&VAR_2->dev, VAR_3->tx_mapping[VAR_5],
     VAR_3->tx_len[VAR_5], VAR_0);

  VAR_2->stats.tx_packets++;
  VAR_2->stats.tx_bytes += VAR_3->tx_skb[VAR_5]->len;

  FUNC_1(VAR_3->tx_skb[VAR_5]);
  VAR_3->tx_skb[VAR_5] = ((void*)0);

  VAR_5 = FUNC_0(VAR_5);
 }
 VAR_3->tx_tail = VAR_5;
 if (FUNC_5(VAR_2) &&
     FUNC_3(VAR_2) >= VAR_1)
  FUNC_6(VAR_2);
}
