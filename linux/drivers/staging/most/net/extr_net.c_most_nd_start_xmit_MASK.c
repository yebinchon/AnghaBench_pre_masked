
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; int tx_dropped; int tx_fifo_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {int ch_id; } ;
struct net_dev_context {scalar_t__ is_mamac; TYPE_1__ tx; int iface; } ;
struct mbo {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct mbo* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (struct mbo*) ;
 int FUNC_3 (struct mbo*) ;
 struct net_dev_context* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,struct mbo*) ;
 int FUNC_7 (struct sk_buff*,struct mbo*) ;

__attribute__((used)) static netdev_tx_t FUNC_8(struct sk_buff *VAR_3,
          struct net_device *VAR_4)
{
 struct net_dev_context *VAR_5 = FUNC_4(VAR_4);
 struct mbo *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_5->iface, VAR_5->tx.ch_id, &VAR_2);

 if (!VAR_6) {
  FUNC_5(VAR_4);
  VAR_4->stats.tx_fifo_errors++;
  return VAR_0;
 }

 if (VAR_5->is_mamac)
  VAR_7 = FUNC_6(VAR_3, VAR_6);
 else
  VAR_7 = FUNC_7(VAR_3, VAR_6);

 if (VAR_7) {
  FUNC_2(VAR_6);
  VAR_4->stats.tx_dropped++;
  FUNC_0(VAR_3);
  return VAR_1;
 }

 FUNC_3(VAR_6);
 VAR_4->stats.tx_packets++;
 VAR_4->stats.tx_bytes += VAR_3->len;
 FUNC_0(VAR_3);
 return VAR_1;
}
