
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct iavf_adapter {int num_active_queues; } ;
struct ethtool_channels {int combined_count; void* other_count; void* max_other; int max_combined; } ;


 int VAR_0 ;
 void* VAR_1 ;
 struct iavf_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2,
         struct ethtool_channels *VAR_3)
{
 struct iavf_adapter *VAR_4 = FUNC_0(VAR_2);


 VAR_3->max_combined = VAR_0;

 VAR_3->max_other = VAR_1;
 VAR_3->other_count = VAR_1;

 VAR_3->combined_count = VAR_4->num_active_queues;
}
