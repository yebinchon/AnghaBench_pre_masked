
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct vnic_stats {int rx; int tx; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct enic {int gen_stats; } ;
struct TYPE_6__ {size_t index; } ;
struct TYPE_5__ {size_t index; } ;
struct TYPE_4__ {size_t index; } ;


 int VAR_0 ;
 int FUNC_0 (struct enic*,struct vnic_stats**) ;
 TYPE_3__* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 struct enic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_7,
 struct ethtool_stats *VAR_8, u64 *VAR_9)
{
 struct enic *VAR_10 = FUNC_1(VAR_7);
 struct vnic_stats *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_0(VAR_10, &VAR_11);




 if (VAR_13 == -VAR_0)
  return;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
  *(VAR_9++) = ((u64 *)&VAR_11->tx)[VAR_6[VAR_12].index];
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
  *(VAR_9++) = ((u64 *)&VAR_11->rx)[VAR_5[VAR_12].index];
 for (VAR_12 = 0; VAR_12 < VAR_2; VAR_12++)
  *(VAR_9++) = ((u64 *)&VAR_10->gen_stats)[VAR_1[VAR_12].index];
}
