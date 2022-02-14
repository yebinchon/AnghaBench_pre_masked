
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct atl1c_hw {int ctrl_flags; scalar_t__ nic_type; int ict; int tx_imt; int rx_imt; int smb_timer; int max_frame_size; } ;
struct atl1c_adapter {struct atl1c_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atl1c_hw*,int ,int*) ;
 int FUNC_1 (struct atl1c_hw*,int ,int) ;
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
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_2 (struct atl1c_adapter*) ;
 int FUNC_3 (struct atl1c_adapter*) ;
 int FUNC_4 (struct atl1c_adapter*) ;
 int FUNC_5 (struct atl1c_adapter*) ;

__attribute__((used)) static int FUNC_6(struct atl1c_adapter *VAR_26)
{
 struct atl1c_hw *VAR_27 = &VAR_26->hw;
 u32 VAR_28 = 0;
 u32 VAR_29;
 u32 VAR_30;

 FUNC_0(VAR_27, VAR_19, &VAR_28);
 VAR_28 &= ~(VAR_14 |
         VAR_12 |
         VAR_11);

 FUNC_1(VAR_27, VAR_18, 0xFFFFFFFF);

 FUNC_1(VAR_27, VAR_22, 0);





 VAR_30 = VAR_3;
 if (VAR_27->ctrl_flags & VAR_0) {
  if (VAR_27->nic_type == VAR_25)
   VAR_30 &= ~VAR_4;
 } else
  VAR_30 = 0;
 FUNC_1(VAR_27, VAR_15, VAR_30);

 FUNC_1(VAR_27, VAR_16,
  VAR_27->ict & VAR_7);

 FUNC_2(VAR_26);

 if (VAR_27->ctrl_flags & VAR_2) {
  VAR_29 = (VAR_27->tx_imt & VAR_9) <<
     VAR_10;
  VAR_29 |= (VAR_27->rx_imt & VAR_9) <<
     VAR_8;
  FUNC_1(VAR_27, VAR_17, VAR_29);
  VAR_28 |=
   VAR_14 | VAR_12;
 }

 if (VAR_27->ctrl_flags & VAR_1)
  VAR_28 |= VAR_11;

 VAR_28 |= VAR_13;
 FUNC_1(VAR_27, VAR_19, VAR_28);

 FUNC_1(VAR_27, VAR_21,
  VAR_27->smb_timer & VAR_23);


 FUNC_1(VAR_27, VAR_20, VAR_27->max_frame_size + VAR_6 +
   VAR_24 + VAR_5);

 FUNC_5(VAR_26);
 FUNC_4(VAR_26);
 FUNC_3(VAR_26);

 return 0;
}
