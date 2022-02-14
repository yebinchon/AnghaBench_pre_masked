
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; scalar_t__ mac_type; scalar_t__ dsp_config_state; int mdix; int master_slave; scalar_t__ ffe_config_state; scalar_t__ autoneg_advertised; int original_master_slave; scalar_t__ autoneg; scalar_t__ phy_reset_disable; } ;
typedef scalar_t__ s32 ;
typedef int e1000_ms_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;



 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_22)
{
 u32 VAR_23;
 s32 VAR_24;
 u16 VAR_25;

 if (VAR_22->phy_reset_disable)
  return VAR_3;

 VAR_24 = FUNC_0(VAR_22);
 if (VAR_24) {
  FUNC_4("Error Resetting the PHY\n");
  return VAR_24;
 }


 FUNC_7(15);

 VAR_23 = FUNC_5(VAR_12);
 VAR_23 &= VAR_10;
 VAR_23 |= (VAR_9 | VAR_11);
 FUNC_6(VAR_12, VAR_23);


 if (VAR_22->phy_type == VAR_21) {

  VAR_24 = FUNC_2(VAR_22, 0);
  if (VAR_24) {
   FUNC_4("Error Disabling LPLU D3\n");
   return VAR_24;
  }
 }


 VAR_24 = FUNC_1(VAR_22, VAR_5, &VAR_25);
 if (VAR_24)
  return VAR_24;

 if ((VAR_22->mac_type == VAR_14) || (VAR_22->mac_type == VAR_15)) {
  VAR_22->dsp_config_state = VAR_17;

  VAR_25 &=
      ~(VAR_7 |
        VAR_8);
  VAR_22->mdix = 1;

 } else {
  VAR_22->dsp_config_state = VAR_18;
  VAR_25 &= ~VAR_7;

  switch (VAR_22->mdix) {
  case 1:
   VAR_25 &= ~VAR_8;
   break;
  case 2:
   VAR_25 |= VAR_8;
   break;
  case 0:
  default:
   VAR_25 |= VAR_7;
   break;
  }
 }
 VAR_24 = FUNC_3(VAR_22, VAR_5, VAR_25);
 if (VAR_24)
  return VAR_24;


 if (VAR_22->autoneg) {
  e1000_ms_type VAR_26 = VAR_22->master_slave;

  if (VAR_22->ffe_config_state == VAR_19)
   VAR_22->ffe_config_state = VAR_20;

  if (VAR_22->dsp_config_state == VAR_16)
   VAR_22->dsp_config_state = VAR_18;





  if (VAR_22->autoneg_advertised == VAR_0) {

   VAR_24 =
       FUNC_1(VAR_22, VAR_4,
            &VAR_25);
   if (VAR_24)
    return VAR_24;
   VAR_25 &= ~VAR_6;
   VAR_24 =
       FUNC_3(VAR_22, VAR_4,
      VAR_25);
   if (VAR_24)
    return VAR_24;

   VAR_24 =
       FUNC_1(VAR_22, VAR_13, &VAR_25);
   if (VAR_24)
    return VAR_24;
   VAR_25 &= ~VAR_1;
   VAR_24 =
       FUNC_3(VAR_22, VAR_13, VAR_25);
   if (VAR_24)
    return VAR_24;
  }

  VAR_24 = FUNC_1(VAR_22, VAR_13, &VAR_25);
  if (VAR_24)
   return VAR_24;


  VAR_22->original_master_slave = (VAR_25 & VAR_1) ?
      ((VAR_25 & VAR_2) ?
       129 :
       128) : 130;

  switch (VAR_26) {
  case 129:
   VAR_25 |= (VAR_1 | VAR_2);
   break;
  case 128:
   VAR_25 |= VAR_1;
   VAR_25 &= ~(VAR_2);
   break;
  case 130:
   VAR_25 &= ~VAR_1;
  default:
   break;
  }
  VAR_24 = FUNC_3(VAR_22, VAR_13, VAR_25);
  if (VAR_24)
   return VAR_24;
 }

 return VAR_3;
}
