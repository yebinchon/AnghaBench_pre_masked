
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct netdev_queue {int dummy; } ;
struct TYPE_7__ {int tx_dropped; } ;
struct net_device {TYPE_3__ stats; } ;
struct cpts {int dummy; } ;
struct cpsw_priv {scalar_t__ emac_port; scalar_t__ tx_ts_enabled; struct cpsw_common* cpsw; } ;
struct TYPE_6__ {scalar_t__ dual_emac; } ;
struct cpsw_common {int tx_ch_num; TYPE_2__ data; TYPE_1__* txv; struct cpts* cpts; } ;
struct cpdma_chan {int dummy; } ;
typedef int netdev_tx_t ;
struct TYPE_8__ {int tx_flags; } ;
struct TYPE_5__ {struct cpdma_chan* ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cpdma_chan*,struct sk_buff*,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (struct cpdma_chan*) ;
 int FUNC_2 (struct cpsw_priv*,int ,char*) ;
 scalar_t__ FUNC_3 (struct cpts*,struct sk_buff*) ;
 struct netdev_queue* FUNC_4 (struct net_device*,int) ;
 struct cpsw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 TYPE_4__* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 () ;
 int VAR_6 ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_7,
           struct net_device *VAR_8)
{
 struct cpsw_priv *VAR_9 = FUNC_5(VAR_8);
 struct cpsw_common *VAR_10 = VAR_9->cpsw;
 struct cpts *VAR_11 = VAR_10->cpts;
 struct netdev_queue *VAR_12;
 struct cpdma_chan *VAR_13;
 int VAR_14, VAR_15;

 if (FUNC_9(VAR_7, VAR_0)) {
  FUNC_2(VAR_9, VAR_6, "packet pad failed\n");
  VAR_8->stats.tx_dropped++;
  return VAR_3;
 }

 if (FUNC_10(VAR_7)->tx_flags & VAR_4 &&
     VAR_9->tx_ts_enabled && FUNC_3(VAR_11, VAR_7))
  FUNC_10(VAR_7)->tx_flags |= VAR_5;

 VAR_15 = FUNC_8(VAR_7);
 if (VAR_15 >= VAR_10->tx_ch_num)
  VAR_15 = VAR_15 % VAR_10->tx_ch_num;

 VAR_13 = VAR_10->txv[VAR_15].ch;
 VAR_12 = FUNC_4(VAR_8, VAR_15);
 FUNC_11(VAR_7);
 VAR_14 = FUNC_0(VAR_13, VAR_7, VAR_7->data, VAR_7->len,
    VAR_9->emac_port + VAR_10->data.dual_emac);
 if (FUNC_13(VAR_14 != 0)) {
  FUNC_2(VAR_9, VAR_6, "desc submit failed\n");
  goto fail;
 }




 if (FUNC_13(!FUNC_1(VAR_13))) {
  FUNC_6(VAR_12);


  FUNC_12();

  if (FUNC_1(VAR_13))
   FUNC_7(VAR_12);
 }

 return VAR_2;
fail:
 VAR_8->stats.tx_dropped++;
 FUNC_6(VAR_12);


 FUNC_12();

 if (FUNC_1(VAR_13))
  FUNC_7(VAR_12);

 return VAR_1;
}
