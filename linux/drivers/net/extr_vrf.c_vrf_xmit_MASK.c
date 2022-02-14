
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct pcpu_dstats {int tx_bytes; int syncp; int tx_pkts; } ;
struct net_device {TYPE_1__* dstats; } ;
typedef scalar_t__ netdev_tx_t ;
struct TYPE_2__ {int tx_drps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 struct pcpu_dstats* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 int VAR_4 = VAR_2->len;
 netdev_tx_t VAR_5 = FUNC_0(VAR_2, VAR_3);

 if (FUNC_1(VAR_5 == VAR_1 || VAR_5 == VAR_0)) {
  struct pcpu_dstats *VAR_6 = FUNC_3(VAR_3->dstats);

  FUNC_4(&VAR_6->syncp);
  VAR_6->tx_pkts++;
  VAR_6->tx_bytes += VAR_4;
  FUNC_5(&VAR_6->syncp);
 } else {
  FUNC_2(VAR_3->dstats->tx_drps);
 }

 return VAR_5;
}
