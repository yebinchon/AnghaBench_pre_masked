
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int temp; } ;
struct mt76x02_dev {int tx_hang_reset; TYPE_2__ mt76; int enable_tpc; TYPE_1__ cal; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (char*,int,struct dentry*,int *) ;
 int FUNC_1 (int ,char*,struct dentry*,int ) ;
 int FUNC_2 (char*,int,struct dentry*,struct mt76x02_dev*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dentry* FUNC_5 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_6(struct mt76x02_dev *VAR_5)
{
 struct dentry *VAR_6;

 VAR_6 = FUNC_5(&VAR_5->mt76);
 if (!VAR_6)
  return;

 FUNC_4("temperature", 0400, VAR_6, &VAR_5->cal.temp);
 FUNC_0("tpc", 0600, VAR_6, &VAR_5->enable_tpc);

 FUNC_2("edcca", 0600, VAR_6, VAR_5, &VAR_2);
 FUNC_2("ampdu_stat", 0400, VAR_6, VAR_5, &VAR_0);
 FUNC_2("dfs_stats", 0400, VAR_6, VAR_5, &VAR_1);
 FUNC_1(VAR_5->mt76.dev, "txpower", VAR_6,
        VAR_4);

 FUNC_1(VAR_5->mt76.dev, "agc", VAR_6, VAR_3);

 FUNC_3("tx_hang_reset", 0400, VAR_6, &VAR_5->tx_hang_reset);
}
