
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct pcpu_dstats {int syncp; int tx_bytes; int tx_packets; } ;
struct net_device {int dstats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct pcpu_dstats* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct pcpu_dstats *VAR_3 = FUNC_2(VAR_2->dstats);

 FUNC_3(&VAR_3->syncp);
 VAR_3->tx_packets++;
 VAR_3->tx_bytes += VAR_1->len;
 FUNC_4(&VAR_3->syncp);

 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 return VAR_0;
}
