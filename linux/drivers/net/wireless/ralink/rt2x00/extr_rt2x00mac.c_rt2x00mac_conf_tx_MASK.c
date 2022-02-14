
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {scalar_t__ cw_min; scalar_t__ cw_max; int txop; int aifs; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct data_queue {int cw_min; int cw_max; int txop; int aifs; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct rt2x00_dev*,char*,int ,int,int,int ,int ) ;
 struct data_queue* FUNC_2 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ieee80211_hw *VAR_1,
        struct ieee80211_vif *VAR_2, u16 VAR_3,
        const struct ieee80211_tx_queue_params *VAR_4)
{
 struct rt2x00_dev *VAR_5 = VAR_1->priv;
 struct data_queue *VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_3);
 if (FUNC_3(!VAR_6))
  return -VAR_0;





 if (VAR_4->cw_min > 0)
  VAR_6->cw_min = FUNC_0(VAR_4->cw_min);
 else
  VAR_6->cw_min = 5;

 if (VAR_4->cw_max > 0)
  VAR_6->cw_max = FUNC_0(VAR_4->cw_max);
 else
  VAR_6->cw_max = 10;

 VAR_6->aifs = VAR_4->aifs;
 VAR_6->txop = VAR_4->txop;

 FUNC_1(VAR_5,
     "Configured TX queue %d - CWmin: %d, CWmax: %d, Aifs: %d, TXop: %d\n",
     VAR_3, VAR_6->cw_min, VAR_6->cw_max, VAR_6->aifs,
     VAR_6->txop);

 return 0;
}
