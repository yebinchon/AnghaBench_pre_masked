
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int flags; int features; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {unsigned int vfs_allocated_count; int max_frame_size; struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct net_device*,int ,int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (struct igb_adapter*) ;
 int FUNC_3 (struct igb_adapter*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct igb_adapter*) ;
 scalar_t__ FUNC_5 (struct igb_adapter*) ;
 int FUNC_6 (struct net_device*) ;
 struct igb_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_19)
{
 struct igb_adapter *VAR_20 = FUNC_7(VAR_19);
 struct e1000_hw *VAR_21 = &VAR_20->hw;
 unsigned int VAR_22 = VAR_20->vfs_allocated_count;
 u32 VAR_23 = 0, VAR_24 = 0, VAR_25 = VAR_13;
 int VAR_26;


 if (VAR_19->flags & VAR_11) {
  VAR_23 |= VAR_2 | VAR_1;
  VAR_24 |= VAR_6;


  if (VAR_21->mac.type == VAR_15)
   VAR_24 |= VAR_9;
 } else {
  if (VAR_19->flags & VAR_10) {
   VAR_23 |= VAR_1;
   VAR_24 |= VAR_6;
  } else {




   VAR_26 = FUNC_6(VAR_19);
   if (VAR_26 < 0) {
    VAR_23 |= VAR_1;
    VAR_24 |= VAR_6;
   } else if (VAR_26) {
    VAR_24 |= VAR_8;
   }
  }
 }





 if (FUNC_1(VAR_19, VAR_17, VAR_18)) {
  VAR_23 |= VAR_2;
  VAR_24 |= VAR_9;
 }


 VAR_23 |= VAR_3;


 if ((VAR_19->flags & VAR_11) ||
     (VAR_19->features & VAR_14)) {

  if (FUNC_5(VAR_20))
   VAR_23 &= ~VAR_3;
 } else {
  FUNC_4(VAR_20);
 }


 VAR_23 |= FUNC_8(VAR_0) & ~(VAR_2 | VAR_1 |
         VAR_3);
 FUNC_9(VAR_0, VAR_23);


 if (!VAR_20->vfs_allocated_count) {
  if (VAR_20->max_frame_size <= VAR_12)
   VAR_25 = VAR_12;
 }

 FUNC_9(VAR_4, VAR_25);






 if ((VAR_21->mac.type < VAR_15) || (VAR_21->mac.type > VAR_16))
  return;


 FUNC_3(VAR_20, !!(VAR_24 & VAR_9));

 VAR_24 |= FUNC_8(FUNC_0(VAR_22)) &
   ~(VAR_9 | VAR_6 | VAR_8);


 VAR_24 &= ~VAR_7;

 if (VAR_20->max_frame_size <= VAR_12)
  VAR_24 |= VAR_12;
 else

  VAR_24 |= VAR_13;
 VAR_24 |= VAR_5;

 FUNC_9(FUNC_0(VAR_22), VAR_24);

 FUNC_2(VAR_20);
}
