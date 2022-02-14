
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef enum cros_ec_lpc_mec_emi_access_mode { ____Placeholder_cros_ec_lpc_mec_emi_access_mode } cros_ec_lpc_mec_emi_access_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(u16 VAR_1,
   enum cros_ec_lpc_mec_emi_access_mode VAR_2)
{
 FUNC_2((VAR_1 & 0xfc) | VAR_2, FUNC_0(VAR_0));
 FUNC_2((VAR_1 >> 8) & 0x7f, FUNC_1(VAR_0));
}
