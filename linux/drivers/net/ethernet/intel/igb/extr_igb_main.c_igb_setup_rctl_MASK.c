
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mc_filter_type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {TYPE_2__* netdev; scalar_t__ vfs_allocated_count; struct e1000_hw hw; } ;
struct TYPE_4__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 int VAR_15 ;
 int FUNC_0 (int ) ;
 int VAR_16 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(struct igb_adapter *VAR_17)
{
 struct e1000_hw *VAR_18 = &VAR_17->hw;
 u32 VAR_19;

 VAR_19 = FUNC_1(VAR_2);

 VAR_19 &= ~(3 << VAR_10);
 VAR_19 &= ~(VAR_8 | VAR_7);

 VAR_19 |= VAR_6 | VAR_3 | VAR_12 |
  (VAR_18->mac.mc_filter_type << VAR_10);





 VAR_19 |= VAR_14;


 VAR_19 &= ~(VAR_13 | VAR_15);


 VAR_19 |= VAR_9;


 FUNC_2(FUNC_0(0), 0);





 if (VAR_17->vfs_allocated_count) {

  FUNC_2(VAR_1, VAR_0);
 }


 if (VAR_17->netdev->features & VAR_16) {



  VAR_19 |= (VAR_13 |
    VAR_3 |
    VAR_11);

  VAR_19 &= ~(VAR_5 |
     VAR_4);



 }

 FUNC_2(VAR_2, VAR_19);
}
