
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int len; int dev; } ;
struct qmimux_priv {int stats64; int real_dev; int mux_id; } ;
struct qmimux_hdr {int pkt_len; int mux_id; scalar_t__ pad; } ;
struct pcpu_sw_netstats {unsigned int tx_bytes; int syncp; int tx_packets; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
typedef scalar_t__ netdev_tx_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 struct qmimux_priv* FUNC_3 (struct net_device*) ;
 struct qmimux_hdr* FUNC_4 (struct sk_buff*,int) ;
 struct pcpu_sw_netstats* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct qmimux_priv *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5 = VAR_2->len;
 struct qmimux_hdr *VAR_6;
 netdev_tx_t VAR_7;

 VAR_6 = FUNC_4(VAR_2, sizeof(struct qmimux_hdr));
 VAR_6->pad = 0;
 VAR_6->mux_id = VAR_4->mux_id;
 VAR_6->pkt_len = FUNC_0(VAR_5);
 VAR_2->dev = VAR_4->real_dev;
 VAR_7 = FUNC_1(VAR_2);

 if (FUNC_2(VAR_7 == VAR_1 || VAR_7 == VAR_0)) {
  struct pcpu_sw_netstats *VAR_8 = FUNC_5(VAR_4->stats64);

  FUNC_6(&VAR_8->syncp);
  VAR_8->tx_packets++;
  VAR_8->tx_bytes += VAR_5;
  FUNC_7(&VAR_8->syncp);
 } else {
  VAR_3->stats.tx_dropped++;
 }

 return VAR_7;
}
