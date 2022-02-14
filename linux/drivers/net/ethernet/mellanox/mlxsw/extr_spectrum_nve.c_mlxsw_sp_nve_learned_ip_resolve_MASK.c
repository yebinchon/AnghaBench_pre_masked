
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union mlxsw_sp_l3addr {int addr4; } ;
typedef int u32 ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct mlxsw_sp *VAR_1, u32 VAR_2,
        enum mlxsw_sp_l3proto VAR_3,
        union mlxsw_sp_l3addr *VAR_4)
{
 switch (VAR_3) {
 case 128:
  VAR_4->addr4 = FUNC_1(VAR_2);
  return 0;
 default:
  FUNC_0(1);
  return -VAR_0;
 }
}
