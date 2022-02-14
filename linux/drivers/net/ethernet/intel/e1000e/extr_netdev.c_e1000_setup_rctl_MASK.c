
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ type; int mc_filter_type; } ;
struct e1000_hw {TYPE_2__ phy; TYPE_1__ mac; } ;
struct e1000_adapter {int flags2; int rx_buffer_len; int rx_ps_pages; int rx_ps_bsize0; int flags; TYPE_3__* netdev; struct e1000_hw hw; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {scalar_t__ mtu; int features; } ;


 int FUNC_0 (int) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,int) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_4 (struct e1000_hw*,int,int*) ;
 int FUNC_5 (struct e1000_hw*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static void FUNC_9(struct e1000_adapter *VAR_33)
{
 struct e1000_hw *VAR_34 = &VAR_33->hw;
 u32 VAR_35, VAR_36;
 u32 VAR_37 = 0;





 if (VAR_34->mac.type >= VAR_31) {
  s32 VAR_38;

  if (VAR_33->netdev->mtu > VAR_23)
   VAR_38 = FUNC_3(VAR_34, 1);
  else
   VAR_38 = FUNC_3(VAR_34, 0);

  if (VAR_38)
   FUNC_6("failed to enable|disable jumbo frame workaround mode\n");
 }


 VAR_35 = FUNC_7(VAR_29);
 VAR_35 &= ~(3 << VAR_12);
 VAR_35 |= VAR_9 | VAR_4 |
     VAR_10 | VAR_14 |
     (VAR_33->hw.mac.mc_filter_type << VAR_12);


 VAR_35 &= ~VAR_15;


 if (VAR_33->netdev->mtu <= VAR_23)
  VAR_35 &= ~VAR_11;
 else
  VAR_35 |= VAR_11;





 if (VAR_33->flags2 & VAR_24)
  VAR_35 |= VAR_16;


 if ((VAR_34->phy.type == VAR_32) && (VAR_35 & VAR_11)) {
  u16 VAR_39;

  FUNC_4(VAR_34, FUNC_2(770, 26), &VAR_39);
  VAR_39 &= 0xfff8;
  VAR_39 |= FUNC_0(2);
  FUNC_5(VAR_34, FUNC_2(770, 26), VAR_39);

  FUNC_4(VAR_34, 22, &VAR_39);
  VAR_39 &= 0x0fff;
  VAR_39 |= FUNC_0(14);
  FUNC_5(VAR_34, 0x10, 0x2823);
  FUNC_5(VAR_34, 0x11, 0x0003);
  FUNC_5(VAR_34, 22, VAR_39);
 }


 VAR_35 &= ~VAR_19;
 VAR_35 |= VAR_5;
 switch (VAR_33->rx_buffer_len) {
 case 2048:
 default:
  VAR_35 |= VAR_18;
  VAR_35 &= ~VAR_5;
  break;
 case 4096:
  VAR_35 |= VAR_19;
  break;
 case 8192:
  VAR_35 |= VAR_20;
  break;
 case 16384:
  VAR_35 |= VAR_17;
  break;
 }


 VAR_36 = FUNC_7(VAR_30);
 VAR_36 |= VAR_22;
 FUNC_8(VAR_30, VAR_36);
 VAR_37 = FUNC_1(VAR_33->netdev->mtu);
 if ((VAR_37 <= 3) && (VAR_27 <= 16384) && (VAR_35 & VAR_11))
  VAR_33->rx_ps_pages = VAR_37;
 else
  VAR_33->rx_ps_pages = 0;

 if (VAR_33->rx_ps_pages) {
  u32 VAR_40 = 0;


  VAR_35 |= VAR_8;

  VAR_40 |= VAR_33->rx_ps_bsize0 >> VAR_0;

  switch (VAR_33->rx_ps_pages) {
  case 3:
   VAR_40 |= VAR_27 << VAR_3;

  case 2:
   VAR_40 |= VAR_27 << VAR_2;

  case 1:
   VAR_40 |= VAR_27 >> VAR_1;
   break;
  }

  FUNC_8(VAR_28, VAR_40);
 }


 if (VAR_33->netdev->features & VAR_26) {



  VAR_35 |= (VAR_15 |
    VAR_4 |
    VAR_13);

  VAR_35 &= ~(VAR_21 |
     VAR_7 |
     VAR_6);



 }

 FUNC_8(VAR_29, VAR_35);

 VAR_33->flags &= ~VAR_25;
}
