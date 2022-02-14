
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int num_vfs; TYPE_3__* vfinfo; TYPE_2__ hw; } ;
struct TYPE_6__ {int rss_query_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;

int FUNC_1(struct net_device *VAR_4, int VAR_5,
      bool VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_0(VAR_4);




 if (VAR_7->hw.mac.type < VAR_2 ||
     VAR_7->hw.mac.type >= VAR_3)
  return -VAR_1;

 if (VAR_5 >= VAR_7->num_vfs)
  return -VAR_0;

 VAR_7->vfinfo[VAR_5].rss_query_enabled = VAR_6;

 return 0;
}
