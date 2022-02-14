
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_driver_ops {int dummy; } ;
struct mt76_dev {int tx_tasklet; int status_list; int tx_wait; int mutex; int cc_lock; int lock; int rx_lock; struct mt76_driver_ops const* drv; struct device* dev; struct ieee80211_hw* hw; } ;
struct ieee80211_ops {int dummy; } ;
struct ieee80211_hw {struct mt76_dev* priv; } ;
struct device {int dummy; } ;


 struct ieee80211_hw* FUNC_0 (unsigned int,struct ieee80211_ops const*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,unsigned long) ;

struct mt76_dev *
FUNC_6(struct device *VAR_1, unsigned int VAR_2,
    const struct ieee80211_ops *VAR_3,
    const struct mt76_driver_ops *VAR_4)
{
 struct ieee80211_hw *VAR_5;
 struct mt76_dev *VAR_6;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = VAR_5->priv;
 VAR_6->hw = VAR_5;
 VAR_6->dev = VAR_1;
 VAR_6->drv = VAR_4;

 FUNC_4(&VAR_6->rx_lock);
 FUNC_4(&VAR_6->lock);
 FUNC_4(&VAR_6->cc_lock);
 FUNC_2(&VAR_6->mutex);
 FUNC_1(&VAR_6->tx_wait);
 FUNC_3(&VAR_6->status_list);

 FUNC_5(&VAR_6->tx_tasklet, VAR_0, (unsigned long)VAR_6);

 return VAR_6;
}
