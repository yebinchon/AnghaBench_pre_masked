
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_ptp_clock {struct mlxsw_core* core; } ;
struct mlxsw_core {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int,int ) ;
 int FUNC_2 (struct mlxsw_core*,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp_ptp_clock *VAR_3, int VAR_4)
{
 struct mlxsw_core *VAR_5 = VAR_3->core;
 char VAR_6[VAR_0];

 FUNC_1(VAR_6, VAR_1,
        VAR_4, 0);
 return FUNC_2(VAR_5, FUNC_0(VAR_2), VAR_6);
}
