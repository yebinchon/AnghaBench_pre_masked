
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int advertising; int supported; } ;
struct TYPE_3__ {int duplex; void* speed; int autoneg; int phy_address; int port; } ;
struct ethtool_link_ksettings {TYPE_2__ link_modes; TYPE_1__ base; } ;
struct cas {int cas_flags; int lstate; int link_cntl; int lock; scalar_t__ regs; scalar_t__ hw_running; int phy_addr; int phy_type; } ;
typedef enum link_state { ____Placeholder_link_state } link_state ;


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
 scalar_t__ FUNC_0 (int ) ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (struct cas*,int) ;
 int FUNC_2 (struct cas*,int ) ;
 int FUNC_3 (struct cas*,int*,int*,int*) ;
 int FUNC_4 (struct cas*,int*,int*,int*) ;
 int FUNC_5 (int ,int) ;
 int VAR_34 ;
 struct cas* FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_35,
      struct ethtool_link_ksettings *VAR_36)
{
 struct cas *VAR_37 = FUNC_6(VAR_35);
 u16 VAR_38;
 int VAR_39, VAR_40, VAR_41;
 unsigned long VAR_42;
 enum link_state VAR_43 = VAR_34;
 u32 VAR_44, VAR_45;

 VAR_45 = 0;
 VAR_44 = VAR_30;
 if (VAR_37->cas_flags & VAR_15) {
  VAR_44 |= VAR_25;
  VAR_45 |= VAR_0;
 }


 FUNC_8(&VAR_37->lock, VAR_42);
 VAR_38 = 0;
 VAR_43 = VAR_37->lstate;
 if (FUNC_0(VAR_37->phy_type)) {
  VAR_36->base.port = VAR_20;
  VAR_36->base.phy_address = VAR_37->phy_addr;
  VAR_45 |= VAR_8 | VAR_7 |
   VAR_4 |
   VAR_3 |
   VAR_2 |
   VAR_1;

  VAR_44 |=
   (VAR_29 |
    VAR_28 |
    VAR_27 |
    VAR_26 |
    VAR_33 | VAR_32);

  if (VAR_37->hw_running) {
   FUNC_1(VAR_37, 0);
   VAR_38 = FUNC_2(VAR_37, VAR_18);
   FUNC_3(VAR_37, &VAR_39,
            &VAR_40, &VAR_41);
   FUNC_1(VAR_37, 1);
  }

 } else {
  VAR_36->base.port = VAR_19;
  VAR_36->base.phy_address = 0;
  VAR_44 |= VAR_31;
  VAR_45 |= VAR_6;

  if (VAR_37->hw_running) {

   VAR_38 = FUNC_7(VAR_37->regs + VAR_21);
   FUNC_4(VAR_37, &VAR_39,
            &VAR_40, &VAR_41);
  }
 }
 FUNC_9(&VAR_37->lock, VAR_42);

 if (VAR_38 & VAR_11) {
  VAR_45 |= VAR_5;
  VAR_36->base.autoneg = VAR_10;
  VAR_36->base.speed = ((VAR_40 == 10) ?
         VAR_22 :
         ((VAR_40 == 1000) ?
          VAR_24 : VAR_23));
  VAR_36->base.duplex = VAR_39 ? VAR_16 : VAR_17;
 } else {
  VAR_36->base.autoneg = VAR_9;
  VAR_36->base.speed = ((VAR_38 & VAR_14) ?
         VAR_24 :
         ((VAR_38 & VAR_13) ?
          VAR_23 : VAR_22));
  VAR_36->base.duplex = (VAR_38 & VAR_12) ?
   VAR_16 : VAR_17;
 }
 if (VAR_43 != VAR_34) {
  if (VAR_37->link_cntl & VAR_11) {
   VAR_36->base.speed = 0;
   VAR_36->base.duplex = 0xff;
  } else {
   VAR_36->base.speed = VAR_22;
   if (VAR_37->link_cntl & VAR_13) {
    VAR_36->base.speed = VAR_23;
   } else if (VAR_37->link_cntl & VAR_14) {
    VAR_36->base.speed = VAR_24;
   }
   VAR_36->base.duplex = (VAR_37->link_cntl & VAR_12) ?
    VAR_16 : VAR_17;
  }
 }

 FUNC_5(VAR_36->link_modes.supported,
      VAR_44);
 FUNC_5(VAR_36->link_modes.advertising,
      VAR_45);

 return 0;
}
