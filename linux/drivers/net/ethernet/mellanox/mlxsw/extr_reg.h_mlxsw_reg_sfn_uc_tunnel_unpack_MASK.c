
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef enum mlxsw_reg_sfn_uc_tunnel_protocol { ____Placeholder_mlxsw_reg_sfn_uc_tunnel_protocol } mlxsw_reg_sfn_uc_tunnel_protocol ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;

__attribute__((used)) static inline void
FUNC_5(char *VAR_0, int VAR_1, char *VAR_2,
          u16 *VAR_3, u32 *VAR_4,
          enum mlxsw_reg_sfn_uc_tunnel_protocol *VAR_5)
{
 u32 VAR_6, VAR_7;

 FUNC_1(VAR_0, VAR_1, VAR_2);
 *VAR_3 = FUNC_0(VAR_0, VAR_1);
 VAR_6 = FUNC_4(VAR_0, VAR_1);
 VAR_7 = FUNC_3(VAR_0, VAR_1);
 *VAR_4 = VAR_6 << 24 | VAR_7;
 *VAR_5 = FUNC_2(VAR_0, VAR_1);
}
