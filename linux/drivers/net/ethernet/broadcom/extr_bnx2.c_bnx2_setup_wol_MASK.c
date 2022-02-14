
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bnx2 {int advertising; scalar_t__ phy_port; scalar_t__ line_speed; int flags; scalar_t__ fw_last_msg; TYPE_1__* dev; int autoneg; int phy_lock; scalar_t__ wol; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct bnx2*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_1 (struct bnx2*,scalar_t__) ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_2 (struct bnx2*,scalar_t__,int) ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_3 (struct bnx2*,int,int,int ) ;
 int FUNC_4 (struct bnx2*,int ,int ) ;
 int FUNC_5 (struct bnx2*,scalar_t__) ;
 int FUNC_6 (struct bnx2*,int ) ;
 int FUNC_7 (struct bnx2*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct bnx2 *VAR_37)
{
 int VAR_38;
 u32 VAR_39, VAR_40;

 if (VAR_37->wol) {
  u32 VAR_41;
  u8 VAR_42;

  VAR_42 = VAR_37->autoneg;
  VAR_41 = VAR_37->advertising;

  if (VAR_37->phy_port == VAR_35) {
   VAR_37->autoneg = VAR_5;
   VAR_37->advertising = VAR_3 |
    VAR_2 |
    VAR_1 |
    VAR_0 |
    VAR_4;
  }

  FUNC_8(&VAR_37->phy_lock);
  FUNC_5(VAR_37, VAR_37->phy_port);
  FUNC_9(&VAR_37->phy_lock);

  VAR_37->autoneg = VAR_42;
  VAR_37->advertising = VAR_41;

  FUNC_4(VAR_37, VAR_37->dev->dev_addr, 0);

  VAR_39 = FUNC_1(VAR_37, VAR_10);


  VAR_39 &= ~VAR_15;
  VAR_39 |= VAR_14 |
         VAR_12 |
         VAR_13;
  if (VAR_37->phy_port == VAR_35) {
   VAR_39 |= VAR_17;
  } else {
   VAR_39 |= VAR_16;
   if (VAR_37->line_speed == VAR_36)
    VAR_39 |= VAR_11;
  }

  FUNC_2(VAR_37, VAR_10, VAR_39);


  for (VAR_38 = 0; VAR_38 < VAR_34; VAR_38++) {
   FUNC_2(VAR_37, VAR_18 + (VAR_38 * 4),
    0xffffffff);
  }
  FUNC_2(VAR_37, VAR_19, VAR_20);

  VAR_39 = 1 | VAR_31 | VAR_33;
  FUNC_2(VAR_37, VAR_30, 0x0);
  FUNC_2(VAR_37, VAR_30, VAR_39);
  FUNC_2(VAR_37, VAR_30, VAR_39 | VAR_32);


  FUNC_2(VAR_37, VAR_22,
   VAR_24 |
   VAR_25 |
   VAR_23);

  VAR_39 = FUNC_1(VAR_37, VAR_28);
  VAR_39 &= ~VAR_29;
  FUNC_2(VAR_37, VAR_28, VAR_39);

  VAR_40 = VAR_8;
 } else {
   VAR_40 = VAR_7;
 }

 if (!(VAR_37->flags & VAR_21)) {
  u32 VAR_43;

  VAR_40 |= VAR_9;
  if (VAR_37->fw_last_msg || FUNC_0(VAR_37) != VAR_6) {
   FUNC_3(VAR_37, VAR_40, 1, 0);
   return;
  }



  VAR_43 = FUNC_6(VAR_37, VAR_26);
  FUNC_7(VAR_37, VAR_26,
         VAR_43 | VAR_27);
  FUNC_3(VAR_37, VAR_40, 1, 0);
  FUNC_7(VAR_37, VAR_26, VAR_43);
 }

}
