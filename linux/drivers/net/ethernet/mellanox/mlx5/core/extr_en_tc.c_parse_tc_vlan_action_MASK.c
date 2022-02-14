
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct mlx5e_priv {int mdev; } ;
struct mlx5_esw_flow_attr {scalar_t__ total_vlan; int * vlan_proto; int * vlan_prio; int * vlan_vid; } ;
struct TYPE_2__ {int prio; int proto; int vid; } ;
struct flow_action_entry {int id; TYPE_1__ vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_priv *VAR_8,
    const struct flow_action_entry *VAR_9,
    struct mlx5_esw_flow_attr *VAR_10,
    u32 *VAR_11)
{
 u8 VAR_12 = VAR_10->total_vlan;

 if (VAR_12 >= VAR_7)
  return -VAR_1;

 switch (VAR_9->id) {
 case 129:
  if (VAR_12) {
   if (!FUNC_1(VAR_8->mdev,
         VAR_7))
    return -VAR_1;

   *VAR_11 |= VAR_4;
  } else {
   *VAR_11 |= VAR_3;
  }
  break;
 case 128:
  VAR_10->vlan_vid[VAR_12] = VAR_9->vlan.vid;
  VAR_10->vlan_prio[VAR_12] = VAR_9->vlan.prio;
  VAR_10->vlan_proto[VAR_12] = VAR_9->vlan.proto;
  if (!VAR_10->vlan_proto[VAR_12])
   VAR_10->vlan_proto[VAR_12] = FUNC_0(VAR_2);

  if (VAR_12) {
   if (!FUNC_1(VAR_8->mdev,
         VAR_7))
    return -VAR_1;

   *VAR_11 |= VAR_6;
  } else {
   if (!FUNC_1(VAR_8->mdev, 1) &&
       (VAR_9->vlan.proto != FUNC_0(VAR_2) ||
        VAR_9->vlan.prio))
    return -VAR_1;

   *VAR_11 |= VAR_5;
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_10->total_vlan = VAR_12 + 1;

 return 0;
}
