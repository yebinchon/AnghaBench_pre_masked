
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int flags; int dev_addr; } ;
struct fm10k_l2_accel {int size; scalar_t__ dglort; struct net_device** macvlan; } ;
struct TYPE_3__ {int (* update_xcast_mode ) (struct fm10k_hw*,scalar_t__,int) ;int (* update_lport_state ) (struct fm10k_hw*,scalar_t__,int ,int) ;} ;
struct TYPE_4__ {scalar_t__ default_vid; TYPE_1__ ops; int addr; } ;
struct fm10k_hw {TYPE_2__ mac; } ;
struct fm10k_intfc {scalar_t__ glort; int xcast_mode; int glort_count; struct fm10k_hw hw; struct net_device* netdev; struct fm10k_l2_accel* l2_accel; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct net_device*,int ,int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_2 (struct fm10k_intfc*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct fm10k_intfc*) ;
 int FUNC_4 (struct fm10k_intfc*) ;
 int FUNC_5 (struct fm10k_intfc*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (struct fm10k_intfc*,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_7 (struct fm10k_intfc*,scalar_t__,int ,int) ;
 int FUNC_8 (struct fm10k_intfc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct fm10k_hw*,scalar_t__,int ,int) ;
 int FUNC_10 (struct fm10k_hw*,scalar_t__,int) ;
 int FUNC_11 (struct fm10k_hw*,scalar_t__,int) ;

void FUNC_12(struct fm10k_intfc *VAR_14)
{
 struct fm10k_l2_accel *VAR_15 = VAR_14->l2_accel;
 struct net_device *VAR_16 = VAR_14->netdev;
 struct fm10k_hw *VAR_17 = &VAR_14->hw;
 int VAR_18, VAR_19;
 u16 VAR_20, VAR_21;


 VAR_21 = VAR_14->glort;


 if (VAR_16->flags & VAR_8)
  VAR_18 = VAR_4;
 else if (VAR_16->flags & VAR_5)
  VAR_18 = VAR_1;
 else if (VAR_16->flags & (VAR_6 | VAR_7))
  VAR_18 = VAR_2;
 else
  VAR_18 = VAR_3;

 FUNC_4(VAR_14);


 if (FUNC_3(VAR_14))
  VAR_17->mac.ops.update_lport_state(VAR_17, VAR_21,
            VAR_14->glort_count, 1);


 FUNC_7(VAR_14, VAR_0, 0,
     VAR_18 == VAR_4);


 for (VAR_20 = FUNC_2(VAR_14, 0);
      VAR_20 < VAR_9;
      VAR_20 = FUNC_2(VAR_14, VAR_20)) {
  FUNC_7(VAR_14, VAR_20, 0, 1);

  FUNC_6(VAR_14, VAR_21,
     VAR_17->mac.addr, VAR_20, 1);


  if (VAR_15) {
   for (VAR_19 = 0; VAR_19 < VAR_15->size; VAR_19++) {
    struct net_device *VAR_22 = VAR_15->macvlan[VAR_19];

    if (!VAR_22)
     continue;

    VAR_21 = VAR_15->dglort + 1 + VAR_19;

    FUNC_6(VAR_14, VAR_21,
       VAR_22->dev_addr,
       VAR_20, 1);
   }
  }
 }




 if (FUNC_3(VAR_14))
  VAR_17->mac.ops.update_xcast_mode(VAR_17, VAR_21, VAR_18);


 FUNC_1(VAR_16, VAR_12, VAR_13);
 FUNC_0(VAR_16, VAR_10, VAR_11);


 if (VAR_15) {
  for (VAR_19 = 0; VAR_19 < VAR_15->size; VAR_19++) {
   struct net_device *VAR_23 = VAR_15->macvlan[VAR_19];

   if (!VAR_23)
    continue;

   VAR_21 = VAR_15->dglort + 1 + VAR_19;

   VAR_17->mac.ops.update_xcast_mode(VAR_17, VAR_21,
            VAR_3);
   FUNC_6(VAR_14, VAR_21,
      VAR_23->dev_addr,
      VAR_17->mac.default_vid, 1);
  }
 }

 FUNC_5(VAR_14);


 VAR_14->xcast_mode = VAR_18;


 FUNC_8(VAR_14);
}
