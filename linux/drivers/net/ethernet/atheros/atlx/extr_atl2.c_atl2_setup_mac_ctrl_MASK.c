
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int flags; int features; } ;
struct atl2_hw {int retry_buf; scalar_t__ preamble_len; } ;
struct atl2_adapter {scalar_t__ link_duplex; struct atl2_hw hw; struct net_device* netdev; } ;


 int FUNC_0 (struct atl2_hw*,int ,int) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int ,int*) ;

__attribute__((used)) static void FUNC_2(struct atl2_adapter *VAR_19)
{
 u32 VAR_20;
 struct atl2_hw *VAR_21 = &VAR_19->hw;
 struct net_device *VAR_22 = VAR_19->netdev;


 VAR_20 = VAR_16 | VAR_14 | VAR_8;


 if (VAR_0 == VAR_19->link_duplex)
  VAR_20 |= VAR_5;


 VAR_20 |= (VAR_17 | VAR_15);


 VAR_20 |= (VAR_3 | VAR_10);


 VAR_20 |= (((u32)VAR_19->hw.preamble_len & VAR_11) <<
  VAR_12);


 FUNC_1(VAR_22->features, &VAR_20);


 VAR_20 |= VAR_4;
 if (VAR_22->flags & VAR_2)
  VAR_20 |= VAR_13;
 else if (VAR_22->flags & VAR_1)
  VAR_20 |= VAR_9;


 VAR_20 |= (((u32)(VAR_19->hw.retry_buf &
  VAR_6)) << VAR_7);

 FUNC_0(VAR_21, VAR_18, VAR_20);
}
