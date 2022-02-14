
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_rauhtd_type { ____Placeholder_mlxsw_reg_rauhtd_type } mlxsw_reg_rauhtd_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlxsw_sp*,char*,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mlxsw_sp *VAR_5)
{
 enum mlxsw_reg_rauhtd_type VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = VAR_3;
 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6);
 if (VAR_8)
  goto out;

 VAR_6 = VAR_4;
 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6);
out:
 FUNC_1(VAR_7);
 return VAR_8;
}
