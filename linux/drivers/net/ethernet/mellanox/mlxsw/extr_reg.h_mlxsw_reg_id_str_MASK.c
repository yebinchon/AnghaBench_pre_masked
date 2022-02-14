
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_reg_info {scalar_t__ id; char const* name; } ;


 int FUNC_0 (struct mlxsw_reg_info**) ;
 struct mlxsw_reg_info** VAR_0 ;

__attribute__((used)) static inline const char *FUNC_1(u16 VAR_1)
{
 const struct mlxsw_reg_info *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  VAR_2 = VAR_0[VAR_3];
  if (VAR_2->id == VAR_1)
   return VAR_2->name;
 }
 return "*UNKNOWN*";
}
