
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ionic_lif {scalar_t__ nxqs; int state; } ;
struct ethtool_channels {scalar_t__ combined_count; scalar_t__ tx_count; scalar_t__ rx_count; scalar_t__ other_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ionic_lif*,int ) ;
 struct ionic_lif* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
         struct ethtool_channels *VAR_5)
{
 struct ionic_lif *VAR_6 = FUNC_4(VAR_4);
 bool VAR_7;

 if (!VAR_5->combined_count || VAR_5->other_count ||
     VAR_5->rx_count || VAR_5->tx_count)
  return -VAR_1;

 if (VAR_5->combined_count == VAR_6->nxqs)
  return 0;

 if (!FUNC_3(VAR_6, VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_3, VAR_6->state);
 if (VAR_7)
  FUNC_2(VAR_4);

 VAR_6->nxqs = VAR_5->combined_count;

 if (VAR_7)
  FUNC_1(VAR_4);
 FUNC_0(VAR_2, VAR_6->state);

 return 0;
}
