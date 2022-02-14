
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct net_device {int dev; } ;
struct hnae3_knic_private_info {int rss_size; int num_tqps; } ;
struct hnae3_handle {struct hnae3_knic_private_info kinfo; } ;
struct ethtool_channels {int combined_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct hnae3_handle*,int,int) ;
 struct hnae3_handle* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct hnae3_handle*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct hnae3_handle*,int ) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct net_device*,char*) ;
 int FUNC_8 (struct hnae3_handle*,int ,struct net_device*,char*,int,int) ;
 int FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_5,
        struct ethtool_channels *VAR_6)
{
 struct hnae3_handle *VAR_7 = FUNC_2(VAR_5);
 struct hnae3_knic_private_info *VAR_8 = &VAR_7->kinfo;
 bool VAR_9 = FUNC_9(VAR_5);
 u32 VAR_10 = VAR_6->combined_count;
 u16 VAR_11;
 int VAR_12;

 if (FUNC_4(VAR_5))
  return -VAR_0;

 if (VAR_6->rx_count || VAR_6->tx_count)
  return -VAR_1;

 if (VAR_10 > FUNC_3(VAR_7) ||
     VAR_10 < 1) {
  FUNC_0(&VAR_5->dev,
   "Change tqps fail, the tqp range is from 1 to %d",
   FUNC_3(VAR_7));
  return -VAR_1;
 }

 if (VAR_8->rss_size == VAR_10)
  return 0;

 FUNC_8(VAR_7, VAR_4, VAR_5,
    "set channels: tqp_num=%u, rxfh=%d\n",
    VAR_10, VAR_9);

 VAR_12 = FUNC_5(VAR_7, VAR_2);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_5(VAR_7, VAR_3);
 if (VAR_12)
  return VAR_12;

 VAR_11 = VAR_7->kinfo.num_tqps;
 VAR_12 = FUNC_1(VAR_7, VAR_10, VAR_9);
 if (VAR_12) {
  int VAR_13;

  FUNC_7(VAR_5,
       "Change channels fail, revert to old value\n");
  VAR_13 = FUNC_1(VAR_7, VAR_11, VAR_9);
  if (VAR_13) {
   FUNC_6(VAR_5,
       "revert to old channel fail\n");
   return VAR_13;
  }

  return VAR_12;
 }

 return 0;
}
