
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct lp855x {int chip_id; } ;







 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static bool FUNC_0(struct lp855x *VAR_8, u8 VAR_9)
{
 u8 VAR_10, VAR_11;

 switch (VAR_8->chip_id) {
 case 134:
 case 133:
 case 132:
 case 131:
  VAR_10 = VAR_7;
  VAR_11 = VAR_6;
  break;
 case 129:
  VAR_10 = VAR_3;
  VAR_11 = VAR_2;
  break;
 case 130:
  VAR_10 = VAR_1;
  VAR_11 = VAR_0;
  break;
 case 128:
  VAR_10 = VAR_5;
  VAR_11 = VAR_4;
  break;
 default:
  return 0;
 }

 return VAR_9 >= VAR_10 && VAR_9 <= VAR_11;
}
