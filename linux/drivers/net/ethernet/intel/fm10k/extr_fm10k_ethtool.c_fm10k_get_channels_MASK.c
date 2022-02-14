
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fm10k_intfc {TYPE_1__* ring_feature; } ;
struct ethtool_channels {int combined_count; int max_other; int other_count; int max_combined; } ;
struct TYPE_2__ {int indices; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct fm10k_intfc* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
          struct ethtool_channels *VAR_3)
{
 struct fm10k_intfc *VAR_4 = FUNC_1(VAR_2);


 VAR_3->max_combined = FUNC_0(VAR_2);


 VAR_3->max_other = VAR_0;
 VAR_3->other_count = VAR_3->max_other;


 VAR_3->combined_count = VAR_4->ring_feature[VAR_1].indices;
}
