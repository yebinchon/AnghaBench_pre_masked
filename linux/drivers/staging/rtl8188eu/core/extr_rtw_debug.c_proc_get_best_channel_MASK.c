
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct net_device {int dummy; } ;
struct mlme_ext_priv {TYPE_1__* channel_set; } ;
struct adapter {struct mlme_ext_priv mlmeextpriv; } ;
typedef int off_t ;
struct TYPE_2__ {int ChannelNum; scalar_t__ rx_count; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (char*,int,char*,size_t,...) ;

int FUNC_2(char *VAR_0, char **VAR_1,
     off_t VAR_2, int VAR_3,
     int *VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct adapter *VAR_7 = (struct adapter *)FUNC_0(VAR_6);
 struct mlme_ext_priv *VAR_8 = &VAR_7->mlmeextpriv;
 int VAR_9 = 0;
 u32 VAR_10, VAR_11 = 1, VAR_12 = 0;

 for (VAR_10 = 0; VAR_8->channel_set[VAR_10].ChannelNum != 0; VAR_10++) {
  if (VAR_8->channel_set[VAR_10].ChannelNum == 1)
   VAR_12 = VAR_10;
 }

 for (VAR_10 = 0; VAR_8->channel_set[VAR_10].ChannelNum != 0; VAR_10++) {

  if (VAR_8->channel_set[VAR_10].ChannelNum == 6) {
   if (VAR_8->channel_set[VAR_10].rx_count < VAR_8->channel_set[VAR_12].rx_count) {
    VAR_12 = VAR_10;
    VAR_11 = VAR_8->channel_set[VAR_10].ChannelNum;
   }
  }


  VAR_9 += FUNC_1(VAR_0 + VAR_9, VAR_3 - VAR_9, "The rx cnt of channel %3d = %d\n",
     VAR_8->channel_set[VAR_10].ChannelNum, VAR_8->channel_set[VAR_10].rx_count);
 }

 VAR_9 += FUNC_1(VAR_0 + VAR_9, VAR_3 - VAR_9, "best_channel_24G = %d\n", VAR_11);

 *VAR_4 = 1;
 return VAR_9;
}
