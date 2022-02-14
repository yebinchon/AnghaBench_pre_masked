
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum pl353_smc_ecc_mode { ____Placeholder_pl353_smc_ecc_mode } pl353_smc_ecc_mode ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

int FUNC_2(enum pl353_smc_ecc_mode VAR_5)
{
 u32 VAR_6;
 int VAR_7 = 0;

 switch (VAR_5) {
 case 129:
 case 130:
 case 128:

  VAR_6 = FUNC_0(VAR_4 + VAR_3);
  VAR_6 &= ~VAR_1;
  VAR_6 |= VAR_5 << VAR_2;
  FUNC_1(VAR_6, VAR_4 + VAR_3);

  break;
 default:
  VAR_7 = -VAR_0;
 }

 return VAR_7;
}
