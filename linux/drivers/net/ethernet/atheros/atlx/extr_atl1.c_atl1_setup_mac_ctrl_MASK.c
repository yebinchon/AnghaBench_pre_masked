
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; int features; } ;
struct atl1_hw {scalar_t__ hw_addr; scalar_t__ preamble_len; } ;
struct atl1_adapter {scalar_t__ link_duplex; scalar_t__ link_speed; struct atl1_hw hw; struct net_device* netdev; } ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct atl1_adapter *VAR_20)
{
 u32 VAR_21;
 struct atl1_hw *VAR_22 = &VAR_20->hw;
 struct net_device *VAR_23 = VAR_20->netdev;

 VAR_21 = VAR_16 | VAR_11;

 if (VAR_0 == VAR_20->link_duplex)
  VAR_21 |= VAR_5;

 VAR_21 |= ((u32) ((VAR_19 == VAR_20->link_speed) ?
    VAR_13 : VAR_14) <<
    VAR_15);

 VAR_21 |= (VAR_17 | VAR_12);

 VAR_21 |= (VAR_3 | VAR_7);

 VAR_21 |= (((u32) VAR_20->hw.preamble_len
     & VAR_8) << VAR_9);

 FUNC_0(VAR_23->features, &VAR_21);





 VAR_21 |= VAR_4;
 if (VAR_23->flags & VAR_2)
  VAR_21 |= VAR_10;
 else if (VAR_23->flags & VAR_1)
  VAR_21 |= VAR_6;

 FUNC_1(VAR_21, VAR_22->hw_addr + VAR_18);
}
