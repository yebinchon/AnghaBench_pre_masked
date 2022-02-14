
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct atl1e_hw {scalar_t__ nic_type; int rx_jumbo_th; int indirect_tab; int base_cpu; int rrs_type; } ;
struct atl1e_adapter {struct atl1e_hw hw; } ;


 int FUNC_0 (struct atl1e_hw*,int ) ;
 int FUNC_1 (struct atl1e_hw*,int ,int) ;
 int FUNC_2 (struct atl1e_hw*,int ,int ) ;
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
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static inline void FUNC_3(struct atl1e_adapter *VAR_30)
{
 struct atl1e_hw *VAR_31 = &VAR_30->hw;
 u32 VAR_32 = 0;
 u32 VAR_33 = 0;
 u32 VAR_34 = 0;
 u32 VAR_35 = 0;
 u32 VAR_36 = 0;

 if (VAR_31->nic_type != VAR_24) {
  FUNC_2(VAR_31, VAR_3,
         (u16)((VAR_31->rx_jumbo_th & VAR_16) <<
         VAR_17 |
         (1 & VAR_18) <<
         VAR_19));

  VAR_32 = FUNC_0(VAR_31, VAR_5);
  VAR_34 = VAR_32 * 4 / 5;
  VAR_33 = VAR_32 / 5;
  VAR_35 = ((VAR_34 & VAR_20)
      << VAR_21) |
      ((VAR_33 & VAR_22)
      << VAR_23);

  FUNC_1(VAR_31, VAR_4, VAR_35);
 }


 FUNC_1(VAR_31, VAR_1, VAR_31->indirect_tab);
 FUNC_1(VAR_31, VAR_0, VAR_31->base_cpu);

 if (VAR_31->rrs_type & VAR_26)
  VAR_36 |= VAR_9;

 if (VAR_31->rrs_type & VAR_27)
  VAR_36 |= VAR_10;

 if (VAR_31->rrs_type & VAR_28)
  VAR_36 |= VAR_11;

 if (VAR_31->rrs_type & VAR_29)
  VAR_36 |= VAR_12;

 if (VAR_31->rrs_type != VAR_25)
  VAR_36 |=
   (VAR_8 | VAR_15);

 VAR_36 |= VAR_13 | VAR_14 |
    VAR_6 | VAR_7;

 FUNC_1(VAR_31, VAR_2, VAR_36);
}
