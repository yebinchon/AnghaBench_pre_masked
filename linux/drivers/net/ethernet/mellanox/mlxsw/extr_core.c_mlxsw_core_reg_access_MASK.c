
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_reg_info {int dummy; } ;
struct TYPE_2__ {int use_emad; } ;
struct mlxsw_core {TYPE_1__ emad; } ;
typedef enum mlxsw_core_reg_access_type { ____Placeholder_mlxsw_core_reg_access_type } mlxsw_core_reg_access_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mlxsw_core*,struct mlxsw_reg_info const*,char*,int) ;
 int FUNC_2 (struct mlxsw_core*,struct mlxsw_reg_info const*,char*,int,int *,int ,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_core *VAR_2,
     const struct mlxsw_reg_info *VAR_3,
     char *VAR_4,
     enum mlxsw_core_reg_access_type VAR_5)
{
 FUNC_0(VAR_0);
 int VAR_6;





 if (!VAR_2->emad.use_emad)
  return FUNC_1(VAR_2, VAR_3,
       VAR_4, VAR_5);

 VAR_6 = FUNC_2(VAR_2, VAR_3,
      VAR_4, VAR_5, &VAR_0,
      VAR_1,
      (unsigned long) VAR_4);
 if (VAR_6)
  return VAR_6;
 return FUNC_3(&VAR_0);
}
