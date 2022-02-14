
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int mac_duplex; int preamble_len; int mac_speed; } ;
struct atl1c_adapter {scalar_t__ link_duplex; scalar_t__ link_speed; struct atl1c_hw hw; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
 int FUNC_2 (int,int ,int ) ;
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
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_3(struct atl1c_adapter *VAR_21)
{
 struct atl1c_hw *VAR_22 = &VAR_21->hw;
 u32 VAR_23, VAR_24, VAR_25;

 VAR_22->mac_duplex = VAR_21->link_duplex == VAR_0 ? 1 : 0;
 VAR_22->mac_speed = VAR_21->link_speed == VAR_17 ?
  VAR_19 : VAR_20;

 FUNC_0(VAR_22, VAR_15, &VAR_24);
 FUNC_0(VAR_22, VAR_14, &VAR_25);
 FUNC_0(VAR_22, VAR_13, &VAR_23);

 VAR_24 |= VAR_18;
 VAR_25 |= VAR_16;
 VAR_23 |= VAR_11 | VAR_12 |
        VAR_7 | VAR_8 |
        VAR_1 | VAR_5 |
        VAR_2 | VAR_9 |
        VAR_4;
 if (VAR_22->mac_duplex)
  VAR_23 |= VAR_3;
 else
  VAR_23 &= ~VAR_3;
 VAR_23 = FUNC_2(VAR_23, VAR_10, VAR_22->mac_speed);
 VAR_23 = FUNC_2(VAR_23, VAR_6, VAR_22->preamble_len);

 FUNC_1(VAR_22, VAR_15, VAR_24);
 FUNC_1(VAR_22, VAR_14, VAR_25);
 FUNC_1(VAR_22, VAR_13, VAR_23);
}
