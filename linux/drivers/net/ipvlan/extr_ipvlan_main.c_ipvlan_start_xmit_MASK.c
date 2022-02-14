
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_device {int dummy; } ;
struct ipvl_pcpu_stats {int tx_bytes; int syncp; int tx_pkts; } ;
struct ipvl_dev {TYPE_1__* pcpu_stats; } ;
typedef int netdev_tx_t ;
struct TYPE_2__ {int tx_drps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 struct ipvl_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct ipvl_pcpu_stats* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_2,
         struct net_device *VAR_3)
{
 const struct ipvl_dev *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = VAR_2->len;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_2, VAR_3);
 if (FUNC_1(VAR_6 == VAR_1 || VAR_6 == VAR_0)) {
  struct ipvl_pcpu_stats *VAR_7;

  VAR_7 = FUNC_4(VAR_4->pcpu_stats);

  FUNC_5(&VAR_7->syncp);
  VAR_7->tx_pkts++;
  VAR_7->tx_bytes += VAR_5;
  FUNC_6(&VAR_7->syncp);
 } else {
  FUNC_3(VAR_4->pcpu_stats->tx_drps);
 }
 return VAR_6;
}
