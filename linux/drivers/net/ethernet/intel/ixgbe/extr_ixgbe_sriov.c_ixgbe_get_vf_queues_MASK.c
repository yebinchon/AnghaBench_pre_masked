
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct net_device {int dummy; } ;
struct ixgbe_ring_feature {int mask; } ;
struct ixgbe_adapter {int hw_tcs; TYPE_1__* vfinfo; int default_up; struct ixgbe_ring_feature* ring_feature; struct net_device* netdev; } ;
struct TYPE_2__ {int vf_api; scalar_t__ pf_qos; scalar_t__ pf_vlan; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_0 (int,int ) ;





 unsigned int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_5,
          u32 *VAR_6, u32 VAR_7)
{
 struct net_device *VAR_8 = VAR_5->netdev;
 struct ixgbe_ring_feature *VAR_9 = &VAR_5->ring_feature[VAR_4];
 unsigned int VAR_10 = 0;
 u8 VAR_11 = VAR_5->hw_tcs;


 switch (VAR_5->vfinfo[VAR_7].vf_api) {
 case 128:
 case 132:
 case 131:
 case 130:
 case 129:
  break;
 default:
  return -1;
 }


 VAR_6[VAR_3] = FUNC_0(1, ~VAR_9->mask);
 VAR_6[VAR_1] = FUNC_0(1, ~VAR_9->mask);


 if (VAR_11 > 1)
  VAR_10 = FUNC_1(VAR_8, VAR_5->default_up);


 if (VAR_11)
  VAR_6[VAR_2] = VAR_11;
 else if (VAR_5->vfinfo[VAR_7].pf_vlan || VAR_5->vfinfo[VAR_7].pf_qos)
  VAR_6[VAR_2] = 1;
 else
  VAR_6[VAR_2] = 0;


 VAR_6[VAR_0] = VAR_10;

 return 0;
}
