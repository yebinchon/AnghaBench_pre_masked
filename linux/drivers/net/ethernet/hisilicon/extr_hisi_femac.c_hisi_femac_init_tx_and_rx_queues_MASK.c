
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_femac_priv {scalar_t__ tx_fifo_used_cnt; int rxq; int dev; int txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct hisi_femac_priv *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev, &VAR_2->txq, VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2->dev, &VAR_2->rxq, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_2->tx_fifo_used_cnt = 0;

 return 0;
}
