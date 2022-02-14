
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int flags; int dev_addr; } ;
struct fm10k_ring {int vid; } ;
struct fm10k_l2_accel {int size; int dglort; struct net_device** macvlan; } ;
struct TYPE_2__ {int default_vid; int addr; scalar_t__ vlan_override; } ;
struct fm10k_hw {TYPE_1__ mac; } ;
struct fm10k_intfc {int num_rx_queues; int glort; int vid; int state; int active_vlans; struct fm10k_ring** rx_ring; struct fm10k_hw hw; struct fm10k_l2_accel* l2_accel; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int VAR_6 ;
 int FUNC_5 (struct fm10k_intfc*,int,int ,int,int) ;
 int FUNC_6 (struct fm10k_intfc*,int,int ,int) ;
 int VAR_7 ;
 struct fm10k_intfc* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_8, u16 VAR_9, bool VAR_10)
{
 struct fm10k_intfc *VAR_11 = FUNC_7(VAR_8);
 struct fm10k_l2_accel *VAR_12 = VAR_11->l2_accel;
 struct fm10k_hw *VAR_13 = &VAR_11->hw;
 u16 VAR_14;
 s32 VAR_15;
 int VAR_16;


 if (!VAR_9)
  return 0;

 if (VAR_9 >= VAR_4)
  return -VAR_1;






 if (VAR_10 && VAR_13->mac.vlan_override)
  return -VAR_0;


 FUNC_8(VAR_9, VAR_11->active_vlans);
 if (!VAR_10)
  FUNC_2(VAR_9, VAR_11->active_vlans);


 for (VAR_16 = 0; VAR_16 < VAR_11->num_rx_queues; VAR_16++) {
  struct fm10k_ring *VAR_17 = VAR_11->rx_ring[VAR_16];
  u16 VAR_18 = VAR_17->vid & (VAR_4 - 1);

  if (FUNC_9(VAR_18, VAR_11->active_vlans))
   VAR_17->vid |= VAR_2;
  else
   VAR_17->vid &= ~VAR_2;
 }




 if (VAR_13->mac.vlan_override)
  return 0;




 if (!VAR_10 && VAR_9 == VAR_13->mac.default_vid)
  return 0;




 if (FUNC_9(VAR_5, VAR_11->state))
  return 0;

 FUNC_3(VAR_11);


 if (!(VAR_8->flags & VAR_3)) {
  VAR_15 = FUNC_6(VAR_11, VAR_9, 0, VAR_10);
  if (VAR_15)
   goto err_out;
 }


 VAR_15 = FUNC_5(VAR_11, VAR_11->glort,
          VAR_13->mac.addr, VAR_9, VAR_10);
 if (VAR_15)
  goto err_out;


 if (VAR_12) {
  for (VAR_16 = 0; VAR_16 < VAR_12->size; VAR_16++) {
   struct net_device *VAR_19 = VAR_12->macvlan[VAR_16];

   if (!VAR_19)
    continue;

   VAR_14 = VAR_12->dglort + 1 + VAR_16;

   FUNC_5(VAR_11, VAR_14,
      VAR_19->dev_addr,
      VAR_9, VAR_10);
  }
 }


 VAR_11->vid = VAR_9 + (VAR_10 ? VAR_4 : 0);


 FUNC_1(VAR_8, VAR_7);
 FUNC_0(VAR_8, VAR_6);

err_out:
 FUNC_4(VAR_11);

 return VAR_15;
}
