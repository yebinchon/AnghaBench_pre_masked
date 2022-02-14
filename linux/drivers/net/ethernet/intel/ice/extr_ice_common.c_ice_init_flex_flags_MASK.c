
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ice_hw {int dummy; } ;
typedef enum ice_rxdid { ____Placeholder_ice_rxdid } ice_rxdid ;


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
 int FUNC_0 (struct ice_hw*,int,int ,int ,int ,int ,int ) ;


 int FUNC_1 (struct ice_hw*,int ,char*,int) ;

__attribute__((used)) static void FUNC_2(struct ice_hw *VAR_15, enum ice_rxdid VAR_16)
{
 u8 VAR_17 = 0;







 switch (VAR_16) {




 case 129:
 case 128:
  FUNC_0(VAR_15, VAR_16, VAR_5,
       VAR_13, VAR_4,
       VAR_3, VAR_17++);



  FUNC_0(VAR_15, VAR_16, VAR_7, VAR_6,
       VAR_4, VAR_4, VAR_17++);
  FUNC_0(VAR_15, VAR_16, VAR_4,
       VAR_4, VAR_1,
       VAR_2, VAR_17++);
  FUNC_0(VAR_15, VAR_16, VAR_14,
       VAR_12, VAR_11,
       VAR_8, VAR_17++);
  FUNC_0(VAR_15, VAR_16, VAR_9, VAR_10,
       VAR_4, VAR_4, VAR_17);
  break;

 default:
  FUNC_1(VAR_15, VAR_0,
     "Flag programming for profile ID %d not supported\n",
     VAR_16);
 }
}
