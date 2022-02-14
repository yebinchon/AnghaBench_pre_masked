
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_reg_ralxx_protocol { ____Placeholder_mlxsw_reg_ralxx_protocol } mlxsw_reg_ralxx_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mlxsw_sp*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp *VAR_3)
{
 enum mlxsw_reg_ralxx_protocol VAR_4 = VAR_0;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4,
            VAR_2);
 if (VAR_5)
  return VAR_5;





 VAR_4 = VAR_1;
 return FUNC_0(VAR_3, VAR_4,
      VAR_2 + 1);
}
