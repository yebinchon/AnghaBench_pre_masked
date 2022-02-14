
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int tstamp; int len; int addr; } ;
union mgmt_port_ring_entry {TYPE_2__ s; int d64; } ;
struct TYPE_4__ {int orcnt; } ;
union cvmx_mixx_orcnt {void* u64; TYPE_1__ s; } ;
typedef void* u64 ;
typedef int ts ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {int lock; } ;
struct octeon_mgmt {size_t tx_next_clean; int netdev; scalar_t__ mix; int port; int dev; TYPE_3__ tx_list; int tx_current_fill; int * tx_ring; int tx_ring_handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_2 (TYPE_3__*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,void*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (struct skb_shared_hwtstamps*,int ,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct sk_buff*,struct skb_shared_hwtstamps*) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(struct octeon_mgmt *VAR_4)
{
 union cvmx_mixx_orcnt VAR_5;
 union mgmt_port_ring_entry VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8 = 0;
 unsigned long VAR_9;

 VAR_5.u64 = FUNC_3(VAR_4->mix + VAR_2);
 while (VAR_5.s.orcnt) {
  FUNC_14(&VAR_4->tx_list.lock, VAR_9);

  VAR_5.u64 = FUNC_3(VAR_4->mix + VAR_2);

  if (VAR_5.s.orcnt == 0) {
   FUNC_15(&VAR_4->tx_list.lock, VAR_9);
   break;
  }

  FUNC_6(VAR_4->dev, VAR_4->tx_ring_handle,
     FUNC_12(VAR_3),
     VAR_0);

  VAR_6.d64 = VAR_4->tx_ring[VAR_4->tx_next_clean];
  VAR_4->tx_next_clean =
   (VAR_4->tx_next_clean + 1) % VAR_3;
  VAR_7 = FUNC_2(&VAR_4->tx_list);

  VAR_5.u64 = 0;
  VAR_5.s.orcnt = 1;


  FUNC_4(VAR_4->mix + VAR_2, VAR_5.u64);
  VAR_4->tx_current_fill--;

  FUNC_15(&VAR_4->tx_list.lock, VAR_9);

  FUNC_7(VAR_4->dev, VAR_6.s.addr, VAR_6.s.len,
     VAR_1);


  if (FUNC_16(VAR_6.s.tstamp)) {
   struct skb_shared_hwtstamps VAR_10;
   u64 VAR_11;

   FUNC_8(&VAR_10, 0, sizeof(VAR_10));

   VAR_11 = FUNC_3(FUNC_1(VAR_4->port));

   FUNC_4(FUNC_0(VAR_4->port), 0);

   VAR_10.hwtstamp = FUNC_11(VAR_11);
   FUNC_13(VAR_7, &VAR_10);
  }

  FUNC_5(VAR_7);
  VAR_8++;

  VAR_5.u64 = FUNC_3(VAR_4->mix + VAR_2);
 }

 if (VAR_8 && FUNC_9(VAR_4->netdev))
  FUNC_10(VAR_4->netdev);
}
