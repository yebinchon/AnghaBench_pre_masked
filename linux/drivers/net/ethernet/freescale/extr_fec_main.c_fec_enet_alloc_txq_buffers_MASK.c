
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ bufdesc_ex; struct fec_enet_priv_tx_q** tx_queue; } ;
struct TYPE_3__ {unsigned int ring_size; struct bufdesc* base; } ;
struct fec_enet_priv_tx_q {TYPE_1__ bd; int * tx_bounce; } ;
struct bufdesc_ex {void* cbd_esc; } ;
struct bufdesc {int cbd_sc; void* cbd_bufaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 struct bufdesc* FUNC_3 (struct bufdesc*,TYPE_1__*) ;
 struct bufdesc* FUNC_4 (struct bufdesc*,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 struct fec_enet_private* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int
FUNC_7(struct net_device *VAR_5, unsigned int VAR_6)
{
 struct fec_enet_private *VAR_7 = FUNC_6(VAR_5);
 unsigned int VAR_8;
 struct bufdesc *VAR_9;
 struct fec_enet_priv_tx_q *VAR_10;

 VAR_10 = VAR_7->tx_queue[VAR_6];
 VAR_9 = VAR_10->bd.base;
 for (VAR_8 = 0; VAR_8 < VAR_10->bd.ring_size; VAR_8++) {
  VAR_10->tx_bounce[VAR_8] = FUNC_5(VAR_3, VAR_4);
  if (!VAR_10->tx_bounce[VAR_8])
   goto err_alloc;

  VAR_9->cbd_sc = FUNC_0(0);
  VAR_9->cbd_bufaddr = FUNC_1(0);

  if (VAR_7->bufdesc_ex) {
   struct bufdesc_ex *VAR_11 = (struct bufdesc_ex *)VAR_9;
   VAR_11->cbd_esc = FUNC_1(VAR_0);
  }

  VAR_9 = FUNC_3(VAR_9, &VAR_10->bd);
 }


 VAR_9 = FUNC_4(VAR_9, &VAR_10->bd);
 VAR_9->cbd_sc |= FUNC_0(VAR_1);

 return 0;

 err_alloc:
 FUNC_2(VAR_5);
 return -VAR_2;
}
