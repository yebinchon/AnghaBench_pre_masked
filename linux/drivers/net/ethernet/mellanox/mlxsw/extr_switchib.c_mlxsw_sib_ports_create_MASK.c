
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sib_port {int dummy; } ;
struct mlxsw_sib {int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (struct mlxsw_sib*,int,int ,int ) ;
 scalar_t__ FUNC_3 (struct mlxsw_sib*,int) ;
 int FUNC_4 (struct mlxsw_sib*,int,int *,int *) ;
 int FUNC_5 (struct mlxsw_sib*,int) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sib *VAR_3)
{
 size_t VAR_4;
 u8 VAR_5, VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_4 = sizeof(struct mlxsw_sib_port *) * VAR_2;
 VAR_3->ports = FUNC_1(VAR_4, VAR_1);
 if (!VAR_3->ports)
  return -VAR_0;

 for (VAR_7 = 1; VAR_7 < VAR_2; VAR_7++) {
  VAR_8 = FUNC_4(VAR_3, VAR_7, &VAR_5,
           &VAR_6);
  if (VAR_8)
   goto err_port_module_info_get;
  if (!VAR_6)
   continue;
  VAR_8 = FUNC_2(VAR_3, VAR_7, VAR_5, VAR_6);
  if (VAR_8)
   goto err_port_create;
 }
 return 0;

err_port_create:
err_port_module_info_get:
 for (VAR_7--; VAR_7 >= 1; VAR_7--)
  if (FUNC_3(VAR_3, VAR_7))
   FUNC_5(VAR_3, VAR_7);
 FUNC_0(VAR_3->ports);
 return VAR_8;
}
