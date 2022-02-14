
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mlxsw_core_reg_access_type { ____Placeholder_mlxsw_core_reg_access_type } mlxsw_core_reg_access_type ;


 int FUNC_0 () ;



__attribute__((used)) static inline const char *
FUNC_1(enum mlxsw_core_reg_access_type VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "query";
 case 128:
  return "write";
 }
 FUNC_0();
}
