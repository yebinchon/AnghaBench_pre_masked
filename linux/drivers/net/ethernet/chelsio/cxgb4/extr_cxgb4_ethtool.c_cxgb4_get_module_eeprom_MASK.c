
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct port_info {int tx_chan; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int offset; int len; } ;
struct adapter {int mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int) ;
 struct port_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int ,int ,int ,int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
       struct ethtool_eeprom *VAR_4, u8 *VAR_5)
{
 int VAR_6 = 0, VAR_7 = VAR_4->offset, VAR_8 = VAR_4->len;
 struct port_info *VAR_9 = FUNC_1(VAR_3);
 struct adapter *VAR_10 = VAR_9->adapter;

 FUNC_0(VAR_5, 0, VAR_4->len);
 if (VAR_7 + VAR_8 <= VAR_2)
  return FUNC_2(VAR_10, VAR_10->mbox, VAR_9->tx_chan,
     VAR_0, VAR_7, VAR_8, VAR_5);


 if (VAR_7 <= VAR_2) {

  VAR_8 = VAR_2 - VAR_7;
  VAR_6 = FUNC_2(VAR_10, VAR_10->mbox, VAR_9->tx_chan,
     VAR_0, VAR_7, VAR_8, VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_7 = VAR_2;



  VAR_8 = VAR_4->len - VAR_8;
 }

 return FUNC_2(VAR_10, VAR_10->mbox, VAR_9->tx_chan, VAR_1,
    VAR_7, VAR_8, &VAR_5[VAR_4->len - VAR_8]);
}
