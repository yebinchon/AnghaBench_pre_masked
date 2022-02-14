
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rxd_cnt; scalar_t__ txd_cnt; } ;
struct nfp_net {TYPE_1__ dp; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nfp_net* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_net*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct nfp_net*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
     struct ethtool_ringparam *VAR_6)
{
 struct nfp_net *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8, VAR_9;


 if (VAR_6->rx_mini_pending || VAR_6->rx_jumbo_pending)
  return -VAR_0;


 VAR_8 = FUNC_3(VAR_6->rx_pending);
 VAR_9 = FUNC_3(VAR_6->tx_pending);

 if (VAR_8 < VAR_3 || VAR_8 > VAR_1 ||
     VAR_9 < VAR_4 || VAR_9 > VAR_2)
  return -VAR_0;

 if (VAR_7->dp.rxd_cnt == VAR_8 && VAR_7->dp.txd_cnt == VAR_9)
  return 0;

 FUNC_2(VAR_7, "Change ring size: RxQ %u->%u, TxQ %u->%u\n",
        VAR_7->dp.rxd_cnt, VAR_8, VAR_7->dp.txd_cnt, VAR_9);

 return FUNC_1(VAR_7, VAR_8, VAR_9);
}
