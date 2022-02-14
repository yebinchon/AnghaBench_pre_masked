
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,int) ;
 int FUNC_1 (struct mlxsw_sp_port*,int,int) ;
 int FUNC_2 (struct mlxsw_sp_port*,int,int,int,int) ;
 int FUNC_3 (struct mlxsw_sp_port*,int) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_1)
{
 u16 VAR_2 = 1;
 int VAR_3;

 VAR_3 = FUNC_3(VAR_1, 1);
 if (VAR_3)
  return VAR_3;
 VAR_3 = FUNC_0(VAR_1, 1);
 if (VAR_3)
  goto err_port_stp_set;
 VAR_3 = FUNC_2(VAR_1, 1, VAR_0 - 2,
         1, 0);
 if (VAR_3)
  goto err_port_vlan_set;

 for (; VAR_2 <= VAR_0 - 1; VAR_2++) {
  VAR_3 = FUNC_1(VAR_1,
           VAR_2, 0);
  if (VAR_3)
   goto err_vid_learning_set;
 }

 return 0;

err_vid_learning_set:
 for (VAR_2--; VAR_2 >= 1; VAR_2--)
  FUNC_1(VAR_1, VAR_2, 1);
err_port_vlan_set:
 FUNC_0(VAR_1, 0);
err_port_stp_set:
 FUNC_3(VAR_1, 0);
 return VAR_3;
}
