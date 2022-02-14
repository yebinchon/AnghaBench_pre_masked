
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct antenna_setup {int tx; int rx; scalar_t__ tx_chain_num; scalar_t__ rx_chain_num; } ;
struct link_ant {int flags; } ;
struct TYPE_2__ {struct link_ant ant; } ;
struct rt2x00_dev {struct antenna_setup default_ant; TYPE_1__ link; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rt2x00_dev*,struct antenna_setup) ;

int FUNC_1(struct ieee80211_hw *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct rt2x00_dev *VAR_7 = VAR_4->priv;
 struct link_ant *VAR_8 = &VAR_7->link.ant;
 struct antenna_setup *VAR_9 = &VAR_7->default_ant;
 struct antenna_setup VAR_10;



 if (!VAR_5 || (VAR_5 & ~3) || !VAR_6 || (VAR_6 & ~3))
  return -VAR_3;




 if (VAR_8->flags & VAR_2 && VAR_5 != 3)
  VAR_8->flags &= ~VAR_2;
 if (VAR_8->flags & VAR_0 && VAR_6 != 3)
  VAR_8->flags &= ~VAR_0;





 if (VAR_5 == 3 && VAR_9->tx == VAR_1) {
  VAR_5 = VAR_1;
  VAR_8->flags |= VAR_2;
 }

 if (VAR_6 == 3 && VAR_9->rx == VAR_1) {
  VAR_6 = VAR_1;
  VAR_8->flags |= VAR_0;
 }

 VAR_10.tx = VAR_5;
 VAR_10.rx = VAR_6;
 VAR_10.rx_chain_num = 0;
 VAR_10.tx_chain_num = 0;

 FUNC_0(VAR_7, VAR_10);

 return 0;
}
