
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ptp_system_timestamp {int dummy; } ;
struct mlxsw_sp_ptp_clock {struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_core*) ;
 scalar_t__ FUNC_1 (struct mlxsw_core*) ;
 int FUNC_2 (struct ptp_system_timestamp*) ;
 int FUNC_3 (struct ptp_system_timestamp*) ;

__attribute__((used)) static u64 FUNC_4(struct mlxsw_sp_ptp_clock *VAR_0,
        struct ptp_system_timestamp *VAR_1)
{
 struct mlxsw_core *VAR_2 = VAR_0->core;
 u32 VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(VAR_1);
 VAR_5 = FUNC_1(VAR_2);
 FUNC_2(VAR_1);
 VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 != VAR_4) {

  FUNC_3(VAR_1);
  VAR_5 = FUNC_1(VAR_2);
  FUNC_2(VAR_1);
 }

 return (u64) VAR_5 | (u64) VAR_4 << 32;
}
