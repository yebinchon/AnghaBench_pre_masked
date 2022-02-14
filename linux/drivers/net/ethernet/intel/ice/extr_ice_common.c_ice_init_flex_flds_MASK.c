
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int dummy; } ;
typedef enum ice_rxdid { ____Placeholder_ice_rxdid } ice_rxdid ;
typedef enum ice_flex_rx_mdid { ____Placeholder_ice_flex_rx_mdid } ice_flex_rx_mdid ;


 int VAR_0 ;
 int FUNC_0 (struct ice_hw*,int,int,int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ice_hw*,int ,char*,int) ;
 int FUNC_2 (struct ice_hw*,int) ;

__attribute__((used)) static void FUNC_3(struct ice_hw *VAR_6, enum ice_rxdid VAR_7)
{
 enum ice_flex_rx_mdid VAR_8;

 switch (VAR_7) {
 case 129:
 case 128:
  FUNC_0(VAR_6, VAR_7, VAR_4, 0);
  FUNC_0(VAR_6, VAR_7, VAR_3, 1);
  FUNC_0(VAR_6, VAR_7, VAR_2, 2);

  VAR_8 = (VAR_7 == 128) ?
   VAR_5 : VAR_1;

  FUNC_0(VAR_6, VAR_7, VAR_8, 3);

  FUNC_2(VAR_6, VAR_7);
  break;

 default:
  FUNC_1(VAR_6, VAR_0,
     "Field init for profile ID %d not supported\n",
     VAR_7);
 }
}
