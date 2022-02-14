
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device_info {unsigned int num_chn; } ;
struct netvsc_device {scalar_t__ nvsp_version; unsigned int max_chn; unsigned int num_chn; scalar_t__ destroy; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {unsigned int combined_count; scalar_t__ other_count; scalar_t__ tx_count; scalar_t__ rx_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct netvsc_device_info*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct netvsc_device_info*) ;
 int FUNC_4 (struct net_device*,struct netvsc_device*) ;
 struct netvsc_device_info* FUNC_5 (struct netvsc_device*) ;
 struct netvsc_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4,
          struct ethtool_channels *VAR_5)
{
 struct net_device_context *VAR_6 = FUNC_2(VAR_4);
 struct netvsc_device *VAR_7 = FUNC_6(VAR_6->nvdev);
 unsigned int VAR_8, VAR_9 = VAR_5->combined_count;
 struct netvsc_device_info *VAR_10;
 int VAR_11;


 if (VAR_9 == 0 ||
     VAR_5->rx_count || VAR_5->tx_count || VAR_5->other_count)
  return -VAR_0;

 if (!VAR_7 || VAR_7->destroy)
  return -VAR_1;

 if (VAR_7->nvsp_version < VAR_3)
  return -VAR_0;

 if (VAR_9 > VAR_7->max_chn)
  return -VAR_0;

 VAR_8 = VAR_7->num_chn;

 VAR_10 = FUNC_5(VAR_7);

 if (!VAR_10)
  return -VAR_2;

 VAR_10->num_chn = VAR_9;

 VAR_11 = FUNC_4(VAR_4, VAR_7);
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_3(VAR_4, VAR_10);
 if (VAR_11) {
  VAR_10->num_chn = VAR_8;
  if (FUNC_3(VAR_4, VAR_10))
   FUNC_1(VAR_4, "restoring channel setting failed\n");
 }

out:
 FUNC_0(VAR_10);
 return VAR_11;
}
