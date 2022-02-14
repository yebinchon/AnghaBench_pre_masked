
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lp872x {int dvs_pin; } ;
typedef enum lp872x_regulator_id { ____Placeholder_lp872x_regulator_id } lp872x_regulator_id ;


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
 scalar_t__ FUNC_0 (struct lp872x*,int ,int*) ;

__attribute__((used)) static u8 FUNC_1(struct lp872x *VAR_13,
    enum lp872x_regulator_id VAR_14)
{
 u8 VAR_15, VAR_16;

 if (FUNC_0(VAR_13, VAR_12, &VAR_15))
  return 0;

 switch (VAR_14) {
 case 130:
  if (VAR_15 & VAR_5) {
   VAR_16 = (VAR_13->dvs_pin == VAR_0) ?
    VAR_1 : VAR_2;
  } else {
   if (FUNC_0(VAR_13, VAR_4, &VAR_15))
    return 0;

   VAR_16 = VAR_15 & VAR_3 ?
    VAR_1 : VAR_2;
  }
  break;
 case 129:
  if (VAR_15 & VAR_10)
   VAR_16 = VAR_6;
  else
   VAR_16 = (VAR_13->dvs_pin == VAR_0) ?
    VAR_6 : VAR_7;
  break;
 case 128:
  VAR_16 = VAR_15 & VAR_11 ?
   VAR_8 : VAR_9;
  break;
 default:
  return 0;
 }

 return VAR_16;
}
