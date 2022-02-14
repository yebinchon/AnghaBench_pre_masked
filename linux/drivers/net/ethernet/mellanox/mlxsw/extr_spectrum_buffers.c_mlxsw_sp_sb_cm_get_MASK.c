
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlxsw_sp_sb_port {struct mlxsw_sp_sb_cm* eg_cms; struct mlxsw_sp_sb_cm* ing_cms; } ;
struct mlxsw_sp_sb_cm {int dummy; } ;
struct mlxsw_sp {TYPE_1__* sb; } ;
typedef enum mlxsw_reg_sbxx_dir { ____Placeholder_mlxsw_reg_sbxx_dir } mlxsw_reg_sbxx_dir ;
struct TYPE_2__ {struct mlxsw_sp_sb_port* ports; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (size_t,int) ;

__attribute__((used)) static struct mlxsw_sp_sb_cm *FUNC_2(struct mlxsw_sp *VAR_1,
       u8 VAR_2, u8 VAR_3,
       enum mlxsw_reg_sbxx_dir VAR_4)
{
 struct mlxsw_sp_sb_port *VAR_5 = &VAR_1->sb->ports[VAR_2];

 FUNC_0(!FUNC_1(VAR_3, VAR_4));
 if (VAR_4 == VAR_0)
  return &VAR_5->ing_cms[VAR_3];
 else
  return &VAR_5->eg_cms[VAR_3];
}
