
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int mc_filter_type; int tbi_compatibility_on; } ;
struct e1000_adapter {int rx_buffer_len; TYPE_1__* netdev; struct e1000_hw hw; } ;
struct TYPE_2__ {scalar_t__ mtu; int features; } ;


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




 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct e1000_adapter *VAR_18)
{
 struct e1000_hw *VAR_19 = &VAR_18->hw;
 u32 VAR_20;

 VAR_20 = FUNC_0(VAR_17);

 VAR_20 &= ~(3 << VAR_6);

 VAR_20 |= VAR_0 | VAR_4 |
  VAR_8 |
  (VAR_19->mc_filter_type << VAR_6);

 if (VAR_19->tbi_compatibility_on == 1)
  VAR_20 |= VAR_9;
 else
  VAR_20 &= ~VAR_9;

 if (VAR_18->netdev->mtu <= VAR_15)
  VAR_20 &= ~VAR_5;
 else
  VAR_20 |= VAR_5;


 VAR_20 &= ~VAR_12;
 VAR_20 |= VAR_1;
 switch (VAR_18->rx_buffer_len) {
 case 130:
 default:
  VAR_20 |= VAR_11;
  VAR_20 &= ~VAR_1;
  break;
 case 129:
  VAR_20 |= VAR_12;
  break;
 case 128:
  VAR_20 |= VAR_13;
  break;
 case 131:
  VAR_20 |= VAR_10;
  break;
 }


 if (VAR_18->netdev->features & VAR_16) {



  VAR_20 |= (VAR_9 |
    VAR_0 |
    VAR_7);

  VAR_20 &= ~(VAR_14 |
     VAR_3 |
     VAR_2);



 }

 FUNC_1(VAR_17, VAR_20);
}
