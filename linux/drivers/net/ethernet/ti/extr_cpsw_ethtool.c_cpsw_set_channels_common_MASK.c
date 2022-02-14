
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_channels {scalar_t__ rx_count; scalar_t__ tx_count; } ;
struct cpsw_priv {int dev; struct cpsw_common* cpsw; } ;
struct TYPE_3__ {int slaves; } ;
struct cpsw_common {scalar_t__ rx_ch_num; int tx_ch_num; TYPE_2__* slaves; TYPE_1__ data; scalar_t__ usage_count; } ;
typedef int cpdma_handler_fn ;
struct TYPE_4__ {struct net_device* ndev; } ;


 int FUNC_0 (struct cpsw_common*,struct ethtool_channels*) ;
 int FUNC_1 (struct cpsw_common*) ;
 int FUNC_2 (struct cpsw_common*) ;
 int FUNC_3 (struct cpsw_common*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct cpsw_common*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct cpsw_priv*,scalar_t__,int,int ) ;
 int FUNC_8 (int ,char*) ;
 struct cpsw_priv* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,scalar_t__) ;
 int FUNC_12 (struct net_device*,int ) ;

int FUNC_13(struct net_device *VAR_0,
        struct ethtool_channels *VAR_1,
        cpdma_handler_fn VAR_2)
{
 struct cpsw_priv *VAR_3 = FUNC_9(VAR_0);
 struct cpsw_common *VAR_4 = VAR_3->cpsw;
 struct net_device *VAR_5;
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_4, VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_6(VAR_0);

 VAR_7 = (VAR_1->rx_count != VAR_4->rx_ch_num) && VAR_4->usage_count;

 VAR_8 = FUNC_7(VAR_3, VAR_1->rx_count, 1, VAR_2);
 if (VAR_8)
  goto err;

 VAR_8 = FUNC_7(VAR_3, VAR_1->tx_count, 0, VAR_2);
 if (VAR_8)
  goto err;

 for (VAR_6 = 0; VAR_6 < VAR_4->data.slaves; VAR_6++) {
  VAR_5 = VAR_4->slaves[VAR_6].ndev;
  if (!(VAR_5 && FUNC_10(VAR_5)))
   continue;


  VAR_8 = FUNC_12(VAR_5, VAR_4->tx_ch_num);
  if (VAR_8) {
   FUNC_8(VAR_3->dev, "cannot set real number of tx queues\n");
   goto err;
  }

  VAR_8 = FUNC_11(VAR_5, VAR_4->rx_ch_num);
  if (VAR_8) {
   FUNC_8(VAR_3->dev, "cannot set real number of rx queues\n");
   goto err;
  }
 }

 FUNC_5(VAR_4);

 if (VAR_7) {
  FUNC_2(VAR_4);
  VAR_8 = FUNC_1(VAR_4);
  if (VAR_8)
   goto err;
 }

 VAR_8 = FUNC_4(VAR_0);
 if (!VAR_8)
  return 0;
err:
 FUNC_8(VAR_3->dev, "cannot update channels number, closing device\n");
 FUNC_3(VAR_4);
 return VAR_8;
}
