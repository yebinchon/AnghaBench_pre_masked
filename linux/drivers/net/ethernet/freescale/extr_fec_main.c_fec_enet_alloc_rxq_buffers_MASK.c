
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ bufdesc_ex; struct fec_enet_priv_rx_q** rx_queue; } ;
struct TYPE_3__ {unsigned int ring_size; struct bufdesc* base; } ;
struct fec_enet_priv_rx_q {TYPE_1__ bd; struct sk_buff** rx_skbuff; } ;
struct bufdesc_ex {int cbd_esc; } ;
struct bufdesc {int cbd_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*) ;
 struct bufdesc* FUNC_4 (struct bufdesc*,TYPE_1__*) ;
 struct bufdesc* FUNC_5 (struct bufdesc*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (struct net_device*,struct bufdesc*,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct net_device*,int ) ;
 struct fec_enet_private* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int
FUNC_9(struct net_device *VAR_5, unsigned int VAR_6)
{
 struct fec_enet_private *VAR_7 = FUNC_8(VAR_5);
 unsigned int VAR_8;
 struct sk_buff *VAR_9;
 struct bufdesc *VAR_10;
 struct fec_enet_priv_rx_q *VAR_11;

 VAR_11 = VAR_7->rx_queue[VAR_6];
 VAR_10 = VAR_11->bd.base;
 for (VAR_8 = 0; VAR_8 < VAR_11->bd.ring_size; VAR_8++) {
  VAR_9 = FUNC_7(VAR_5, VAR_4);
  if (!VAR_9)
   goto err_alloc;

  if (FUNC_6(VAR_5, VAR_10, VAR_9)) {
   FUNC_2(VAR_9);
   goto err_alloc;
  }

  VAR_11->rx_skbuff[VAR_8] = VAR_9;
  VAR_10->cbd_sc = FUNC_0(VAR_0);

  if (VAR_7->bufdesc_ex) {
   struct bufdesc_ex *VAR_12 = (struct bufdesc_ex *)VAR_10;
   VAR_12->cbd_esc = FUNC_1(VAR_1);
  }

  VAR_10 = FUNC_4(VAR_10, &VAR_11->bd);
 }


 VAR_10 = FUNC_5(VAR_10, &VAR_11->bd);
 VAR_10->cbd_sc |= FUNC_0(VAR_2);
 return 0;

 err_alloc:
 FUNC_3(VAR_5);
 return -VAR_3;
}
