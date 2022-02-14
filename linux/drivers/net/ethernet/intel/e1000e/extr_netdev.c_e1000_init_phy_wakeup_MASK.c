
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_5__ {int (* acquire ) (struct e1000_hw*) ;int (* release ) (struct e1000_hw*) ;int (* write_reg_page ) (struct e1000_hw*,scalar_t__,scalar_t__) ;int (* read_reg_page ) (struct e1000_hw*,scalar_t__,scalar_t__*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ mta_reg_count; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_4 (struct e1000_hw*,scalar_t__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_11 (struct e1000_hw*,scalar_t__,scalar_t__*) ;
 int FUNC_12 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_14 (struct e1000_hw*,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_16(struct e1000_adapter *VAR_31, u32 VAR_32)
{
 struct e1000_hw *VAR_33 = &VAR_31->hw;
 u32 VAR_34, VAR_35, VAR_36;
 u16 VAR_37, VAR_38;
 int VAR_39;


 FUNC_2(VAR_33);

 VAR_39 = VAR_33->phy.ops.acquire(VAR_33);
 if (VAR_39) {
  FUNC_5("Could not acquire PHY\n");
  return VAR_39;
 }


 VAR_39 = FUNC_4(VAR_33, &VAR_38);
 if (VAR_39)
  goto release;


 for (VAR_34 = 0; VAR_34 < VAR_31->hw.mac.mta_reg_count; VAR_34++) {
  VAR_35 = FUNC_1(VAR_33, VAR_14, VAR_34);
  VAR_33->phy.ops.write_reg_page(VAR_33, FUNC_0(VAR_34),
        (u16)(VAR_35 & 0xFFFF));
  VAR_33->phy.ops.write_reg_page(VAR_33, FUNC_0(VAR_34) + 1,
        (u16)((VAR_35 >> 16) & 0xFFFF));
 }


 VAR_33->phy.ops.read_reg_page(&VAR_31->hw, VAR_0, &VAR_37);
 VAR_35 = FUNC_6(VAR_28);
 if (VAR_35 & VAR_20)
  VAR_37 |= VAR_7;
 if (VAR_35 & VAR_18)
  VAR_37 |= VAR_4;
 VAR_37 &= ~(VAR_2);
 if (VAR_35 & VAR_16)
  VAR_37 |= (((VAR_35 & VAR_16) >> VAR_17)
       << VAR_3);
 if (VAR_35 & VAR_15)
  VAR_37 |= VAR_1;
 if (VAR_35 & VAR_19)
  VAR_37 |= VAR_5;
 VAR_35 = FUNC_6(VAR_12);
 if (VAR_35 & VAR_13)
  VAR_37 |= VAR_6;
 VAR_33->phy.ops.write_reg_page(&VAR_31->hw, VAR_0, VAR_37);

 VAR_36 = VAR_24;
 if (VAR_32 & (VAR_27 | VAR_26))
  VAR_36 |= VAR_21;


 FUNC_7(VAR_30, VAR_32);
 FUNC_7(VAR_29, (VAR_23 | VAR_22 |
     VAR_25 | VAR_36));


 VAR_33->phy.ops.write_reg_page(&VAR_31->hw, VAR_11, VAR_32);
 VAR_33->phy.ops.write_reg_page(&VAR_31->hw, VAR_8, VAR_36);


 VAR_38 |= VAR_9 | VAR_10;
 VAR_39 = FUNC_3(VAR_33, &VAR_38);
 if (VAR_39)
  FUNC_5("Could not set PHY Host Wakeup bit\n");
release:
 VAR_33->phy.ops.release(VAR_33);

 return VAR_39;
}
