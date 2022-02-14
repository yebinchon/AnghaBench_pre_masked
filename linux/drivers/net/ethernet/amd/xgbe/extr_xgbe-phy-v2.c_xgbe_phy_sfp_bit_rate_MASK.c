
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct xgbe_sfp_eeprom {scalar_t__* base; } ;
typedef enum xgbe_sfp_speed { ____Placeholder_xgbe_sfp_speed } xgbe_sfp_speed ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;



__attribute__((used)) static bool FUNC_0(struct xgbe_sfp_eeprom *VAR_5,
      enum xgbe_sfp_speed VAR_6)
{
 u8 *VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_5->base;

 switch (VAR_6) {
 case 129:
  VAR_8 = VAR_4;
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_8 = VAR_2;
  VAR_9 = VAR_1;
  break;
 default:
  return 0;
 }

 return ((VAR_7[VAR_0] >= VAR_8) &&
  (VAR_7[VAR_0] <= VAR_9));
}
