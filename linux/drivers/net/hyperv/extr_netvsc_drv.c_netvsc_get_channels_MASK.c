
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int num_chn; int max_chn; } ;
struct net_device_context {int nvdev; } ;
struct net_device {int dummy; } ;
struct ethtool_channels {int combined_count; int max_combined; } ;


 struct net_device_context* FUNC_0 (struct net_device*) ;
 struct netvsc_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct ethtool_channels *VAR_1)
{
 struct net_device_context *VAR_2 = FUNC_0(VAR_0);
 struct netvsc_device *VAR_3 = FUNC_1(VAR_2->nvdev);

 if (VAR_3) {
  VAR_1->max_combined = VAR_3->max_chn;
  VAR_1->combined_count = VAR_3->num_chn;
 }
}
