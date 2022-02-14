
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct tc_red_qopt_offload_params {int probability; int is_ecn; int max; int min; } ;
struct mlxsw_sp_qdisc {int tclass_num; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ,int ,int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_port *VAR_0,
      struct mlxsw_sp_qdisc *VAR_1,
      void *VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_0->mlxsw_sp;
 struct tc_red_qopt_offload_params *VAR_4 = VAR_2;
 u8 VAR_5 = VAR_1->tclass_num;
 u32 VAR_6, VAR_7;
 u64 VAR_8;


 VAR_8 = VAR_4->probability;
 VAR_8 *= 100;
 VAR_8 = FUNC_0(VAR_8, 1 << 16);
 VAR_8 = FUNC_0(VAR_8, 1 << 16);
 VAR_6 = FUNC_1(VAR_3, VAR_4->min);
 VAR_7 = FUNC_1(VAR_3, VAR_4->max);
 return FUNC_2(VAR_0, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_4->is_ecn);
}
