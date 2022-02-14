
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct mlxsw_sp_port {scalar_t__ pvid; } ;



__attribute__((used)) static u16
FUNC_0(const struct mlxsw_sp_port *VAR_0,
        u16 VAR_1, bool VAR_2)
{
 if (VAR_2)
  return VAR_1;
 else if (VAR_0->pvid == VAR_1)
  return 0;
 else
  return VAR_0->pvid;
}
