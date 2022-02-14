
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int mc_filter_type; } ;
struct igc_hw {TYPE_1__ mac; } ;
struct igc_adapter {TYPE_2__* netdev; struct igc_hw hw; } ;
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
 int FUNC_0 (int ) ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct igc_adapter *VAR_15)
{
 struct igc_hw *VAR_16 = &VAR_15->hw;
 u32 VAR_17;

 VAR_17 = FUNC_1(VAR_0);

 VAR_17 &= ~(3 << VAR_8);
 VAR_17 &= ~(VAR_6 | VAR_5);

 VAR_17 |= VAR_4 | VAR_1 | VAR_10 |
  (VAR_16->mac.mc_filter_type << VAR_8);




 VAR_17 |= VAR_12;


 VAR_17 &= ~(VAR_11 | VAR_13);


 VAR_17 |= VAR_7;


 FUNC_2(FUNC_0(0), 0);


 if (VAR_15->netdev->features & VAR_14) {



  VAR_17 |= (VAR_11 |
    VAR_1 |
    VAR_9);

  VAR_17 &= ~(VAR_3 |
     VAR_2);
 }

 FUNC_2(VAR_0, VAR_17);
}
