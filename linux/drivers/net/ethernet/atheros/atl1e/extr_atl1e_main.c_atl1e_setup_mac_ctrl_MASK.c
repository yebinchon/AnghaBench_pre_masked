
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int features; int flags; } ;
struct atl1e_hw {scalar_t__ preamble_len; } ;
struct atl1e_adapter {scalar_t__ link_duplex; scalar_t__ link_speed; struct atl1e_hw hw; struct net_device* netdev; } ;


 int FUNC_0 (struct atl1e_hw*,int ,int) ;
 scalar_t__ VAR_0 ;
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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int,int*) ;

__attribute__((used)) static void FUNC_2(struct atl1e_adapter *VAR_22)
{
 u32 VAR_23;
 struct atl1e_hw *VAR_24 = &VAR_22->hw;
 struct net_device *VAR_25 = VAR_22->netdev;


 VAR_23 = VAR_17 |
  VAR_12 ;

 if (VAR_0 == VAR_22->link_duplex)
  VAR_23 |= VAR_6;

 VAR_23 |= ((u32)((VAR_21 == VAR_22->link_speed) ?
     VAR_14 : VAR_15) <<
     VAR_16);
 VAR_23 |= (VAR_18 | VAR_13);

 VAR_23 |= (VAR_3 | VAR_8);
 VAR_23 |= (((u32)VAR_22->hw.preamble_len &
    VAR_9) << VAR_10);

 FUNC_1(VAR_25->features, &VAR_23);

 VAR_23 |= VAR_4;
 if (VAR_25->flags & VAR_2)
  VAR_23 |= VAR_11;
 if (VAR_25->flags & VAR_1)
  VAR_23 |= VAR_7;
 if (VAR_25->features & VAR_19)
  VAR_23 |= VAR_5;
 FUNC_0(VAR_24, VAR_20, VAR_23);
}
