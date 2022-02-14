
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct cpsw_slave {struct net_device* ndev; } ;
struct cpsw_priv {int dev; struct cpsw_common* cpsw; } ;
struct TYPE_5__ {int slaves; } ;
struct cpsw_common {int speed; struct cpsw_slave* slaves; TYPE_2__ data; int dev; TYPE_1__* txv; int dma; } ;
struct TYPE_6__ {int tx_maxrate; } ;
struct TYPE_4__ {int ch; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct cpsw_common*) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_3__* FUNC_4 (struct net_device*,int) ;
 struct cpsw_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1, int VAR_2, u32 VAR_3)
{
 struct cpsw_priv *VAR_4 = FUNC_5(VAR_1);
 struct cpsw_common *VAR_5 = VAR_4->cpsw;
 struct cpsw_slave *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = FUNC_4(VAR_1, VAR_2)->tx_maxrate;
 if (VAR_8 == VAR_3)
  return 0;

 VAR_8 = VAR_3 * 1000;
 VAR_7 = FUNC_0(VAR_5->dma);
 if ((VAR_8 < VAR_7 && VAR_8)) {
  FUNC_3(VAR_4->dev, "The channel rate cannot be less than %dMbps",
   VAR_7);
  return -VAR_0;
 }

 if (VAR_3 > VAR_5->speed) {
  FUNC_3(VAR_4->dev, "The channel rate cannot be more than 2Gbps");
  return -VAR_0;
 }

 VAR_10 = FUNC_6(VAR_5->dev);
 if (VAR_10 < 0) {
  FUNC_8(VAR_5->dev);
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_5->txv[VAR_2].ch, VAR_8);
 FUNC_7(VAR_5->dev);

 if (VAR_10)
  return VAR_10;


 for (VAR_9 = 0; VAR_9 < VAR_5->data.slaves; VAR_9++) {
  VAR_6 = &VAR_5->slaves[VAR_9];
  if (!VAR_6->ndev)
   continue;

  FUNC_4(VAR_6->ndev, VAR_2)->tx_maxrate = VAR_3;
 }

 FUNC_2(VAR_5);
 return VAR_10;
}
