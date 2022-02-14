
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {scalar_t__ ntxq_descs; scalar_t__ nrxq_descs; int state; } ;
struct ethtool_ringparam {scalar_t__ tx_pending; scalar_t__ rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ionic_lif*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct net_device*,char*) ;
 struct ionic_lif* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
          struct ethtool_ringparam *VAR_5)
{
 struct ionic_lif *VAR_6 = FUNC_6(VAR_4);
 bool VAR_7;

 if (VAR_5->rx_mini_pending || VAR_5->rx_jumbo_pending) {
  FUNC_5(VAR_4, "Changing jumbo or mini descriptors not supported\n");
  return -VAR_1;
 }

 if (!FUNC_4(VAR_5->tx_pending) ||
     !FUNC_4(VAR_5->rx_pending)) {
  FUNC_5(VAR_4, "Descriptor count must be a power of 2\n");
  return -VAR_1;
 }


 if (VAR_5->tx_pending == VAR_6->ntxq_descs &&
     VAR_5->rx_pending == VAR_6->nrxq_descs)
  return 0;

 if (!FUNC_3(VAR_6, VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_3, VAR_6->state);
 if (VAR_7)
  FUNC_2(VAR_4);

 VAR_6->ntxq_descs = VAR_5->tx_pending;
 VAR_6->nrxq_descs = VAR_5->rx_pending;

 if (VAR_7)
  FUNC_1(VAR_4);
 FUNC_0(VAR_2, VAR_6->state);

 return 0;
}
