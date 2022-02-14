
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_4__ {int weight; } ;
struct pcnet32_private {int tx_ring_size; int rx_ring_size; int lock; TYPE_2__ napi; TYPE_1__* a; } ;
struct net_device {int base_addr; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct TYPE_3__ {int (* write_csr ) (int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_0 (int ,unsigned int) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pcnet32_private*,int ,struct net_device*,char*,int,int) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct pcnet32_private*,int) ;
 int FUNC_7 (struct net_device*,struct pcnet32_private*,int) ;
 int FUNC_8 (struct net_device*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_9,
     struct ethtool_ringparam *VAR_10)
{
 struct pcnet32_private *VAR_11 = FUNC_1(VAR_9);
 unsigned long VAR_12;
 unsigned int VAR_13;
 ulong VAR_14 = VAR_9->base_addr;
 int VAR_15;

 if (VAR_10->rx_mini_pending || VAR_10->rx_jumbo_pending)
  return -VAR_3;

 if (FUNC_3(VAR_9))
  FUNC_5(VAR_9);

 FUNC_9(&VAR_11->lock, VAR_12);
 VAR_11->a->write_csr(VAR_14, VAR_0, VAR_2);

 VAR_13 = FUNC_0(VAR_10->tx_pending, (unsigned int)VAR_7);




 for (VAR_15 = 2; VAR_15 <= VAR_5; VAR_15++) {
  if (VAR_13 <= (1 << VAR_15))
   break;
 }
 if ((1 << VAR_15) != VAR_11->tx_ring_size)
  FUNC_7(VAR_9, VAR_11, VAR_15);

 VAR_13 = FUNC_0(VAR_10->rx_pending, (unsigned int)VAR_6);
 for (VAR_15 = 2; VAR_15 <= VAR_4; VAR_15++) {
  if (VAR_13 <= (1 << VAR_15))
   break;
 }
 if ((1 << VAR_15) != VAR_11->rx_ring_size)
  FUNC_6(VAR_9, VAR_11, VAR_15);

 VAR_11->napi.weight = VAR_11->rx_ring_size / 2;

 if (FUNC_3(VAR_9)) {
  FUNC_4(VAR_9);
  FUNC_8(VAR_9, VAR_1);
 }

 FUNC_10(&VAR_11->lock, VAR_12);

 FUNC_2(VAR_11, VAR_8, VAR_9, "Ring Param Settings: RX: %d, TX: %d\n",
     VAR_11->rx_ring_size, VAR_11->tx_ring_size);

 return 0;
}
