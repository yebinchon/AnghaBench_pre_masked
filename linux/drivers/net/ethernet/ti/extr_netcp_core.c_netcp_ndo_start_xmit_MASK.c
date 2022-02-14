
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct netcp_stats {int tx_dropped; } ;
struct netcp_intf {int tx_pause_threshold; int ndev_dev; int tx_pool; struct netcp_stats stats; } ;
struct net_device {int dummy; } ;
struct knav_dma_desc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct netcp_intf*,struct knav_dma_desc*,int) ;
 struct knav_dma_desc* FUNC_5 (struct sk_buff*,struct netcp_intf*) ;
 int FUNC_6 (struct netcp_intf*,struct sk_buff*,struct knav_dma_desc*) ;
 struct netcp_intf* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct netcp_intf *VAR_5 = FUNC_7(VAR_4);
 struct netcp_stats *VAR_6 = &VAR_5->stats;
 int VAR_7 = FUNC_9(VAR_3);
 struct knav_dma_desc *VAR_8;
 int VAR_9, VAR_10 = 0;

 if (FUNC_11(VAR_3->len <= 0)) {
  FUNC_1(VAR_3);
  return VAR_2;
 }

 if (FUNC_11(VAR_3->len < VAR_1)) {
  VAR_10 = FUNC_10(VAR_3, VAR_1);
  if (VAR_10 < 0) {

   FUNC_2(VAR_5->ndev_dev, "padding failed (%d), packet dropped\n",
     VAR_10);
   VAR_6->tx_dropped++;
   return VAR_10;
  }
  VAR_3->len = VAR_1;
 }

 VAR_8 = FUNC_5(VAR_3, VAR_5);
 if (FUNC_11(!VAR_8)) {
  FUNC_8(VAR_4, VAR_7);
  VAR_10 = -VAR_0;
  goto drop;
 }

 VAR_10 = FUNC_6(VAR_5, VAR_3, VAR_8);
 if (VAR_10)
  goto drop;


 VAR_9 = FUNC_3(VAR_5->tx_pool);
 if (VAR_9 < VAR_5->tx_pause_threshold) {
  FUNC_0(VAR_5->ndev_dev, "pausing tx, count(%d)\n", VAR_9);
  FUNC_8(VAR_4, VAR_7);
 }
 return VAR_2;

drop:
 VAR_6->tx_dropped++;
 if (VAR_8)
  FUNC_4(VAR_5, VAR_8, sizeof(*VAR_8));
 FUNC_1(VAR_3);
 return VAR_10;
}
