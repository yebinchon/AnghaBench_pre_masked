
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_port {scalar_t__ pvid; } ;


 int FUNC_0 (struct mlxsw_sp_port*,scalar_t__) ;
 int FUNC_1 (struct mlxsw_sp_port*,int) ;

int FUNC_2(struct mlxsw_sp_port *VAR_0, u16 VAR_1)
{
 int VAR_2;

 if (!VAR_1) {
  VAR_2 = FUNC_1(VAR_0, 0);
  if (VAR_2)
   return VAR_2;
 } else {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
  VAR_2 = FUNC_1(VAR_0, 1);
  if (VAR_2)
   goto err_port_allow_untagged_set;
 }

 VAR_0->pvid = VAR_1;
 return 0;

err_port_allow_untagged_set:
 FUNC_0(VAR_0, VAR_0->pvid);
 return VAR_2;
}
