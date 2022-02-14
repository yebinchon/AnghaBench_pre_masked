
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum mlxsw_reg_ritr_counter_set_type { ____Placeholder_mlxsw_reg_ritr_counter_set_type } mlxsw_reg_ritr_counter_set_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static inline void FUNC_3(char *VAR_2, u32 VAR_3,
            bool VAR_4, bool VAR_5)
{
 enum mlxsw_reg_ritr_counter_set_type VAR_6;

 if (VAR_4)
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;
 FUNC_1(VAR_2, VAR_6);

 if (VAR_5)
  FUNC_0(VAR_2, VAR_3);
 else
  FUNC_2(VAR_2, VAR_3);
}
