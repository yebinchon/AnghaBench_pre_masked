
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum mlxsw_reg_flow_counter_set_type { ____Placeholder_mlxsw_reg_flow_counter_set_type } mlxsw_reg_flow_counter_set_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static inline void FUNC_2(char *VAR_2, u64 VAR_3,
            bool VAR_4)
{
 enum mlxsw_reg_flow_counter_set_type VAR_5;

 if (VAR_4)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 FUNC_0(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_5);
}
