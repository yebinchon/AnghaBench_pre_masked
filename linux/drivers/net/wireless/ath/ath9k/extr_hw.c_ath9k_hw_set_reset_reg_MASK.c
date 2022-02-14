
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int WARegVal; int reset_power_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 int VAR_3 ;



 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_hw*,int) ;
 int FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct ath_hw *VAR_4, u32 VAR_5)
{
 bool VAR_6 = 0;

 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_4, VAR_3, VAR_4->WARegVal);
  FUNC_4(10);
 }

 FUNC_1(VAR_4, VAR_0,
    VAR_1 | VAR_2);

 if (!VAR_4->reset_power_on)
  VAR_5 = 129;

 switch (VAR_5) {
 case 129:
  VAR_6 = FUNC_3(VAR_4);
  if (VAR_6)
   VAR_4->reset_power_on = 1;
  break;
 case 128:
 case 130:
  VAR_6 = FUNC_2(VAR_4, VAR_5);
  break;
 default:
  break;
 }

 return VAR_6;
}
