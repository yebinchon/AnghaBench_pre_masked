
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp {scalar_t__ clock; TYPE_1__* ptp_ops; int ptp_state; int netdevice_nb; } ;
struct mlxsw_core {int dummy; } ;
struct TYPE_2__ {int (* clock_fini ) (scalar_t__) ;int (* fini ) (int ) ;} ;


 struct mlxsw_sp* FUNC_0 (struct mlxsw_core*) ;
 int FUNC_1 (struct mlxsw_sp*) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int FUNC_3 (struct mlxsw_sp*) ;
 int FUNC_4 (struct mlxsw_sp*) ;
 int FUNC_5 (struct mlxsw_sp*) ;
 int FUNC_6 (struct mlxsw_sp*) ;
 int FUNC_7 (struct mlxsw_sp*) ;
 int FUNC_8 (struct mlxsw_sp*) ;
 int FUNC_9 (struct mlxsw_sp*) ;
 int FUNC_10 (struct mlxsw_sp*) ;
 int FUNC_11 (struct mlxsw_sp*) ;
 int FUNC_12 (struct mlxsw_sp*) ;
 int FUNC_13 (struct mlxsw_sp*) ;
 int FUNC_14 (struct mlxsw_sp*) ;
 int FUNC_15 (struct mlxsw_sp*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(struct mlxsw_core *VAR_0)
{
 struct mlxsw_sp *VAR_1 = FUNC_0(VAR_0);

 FUNC_11(VAR_1);
 FUNC_6(VAR_1);
 FUNC_18(&VAR_1->netdevice_nb);
 if (VAR_1->clock) {
  VAR_1->ptp_ops->fini(VAR_1->ptp_state);
  VAR_1->ptp_ops->clock_fini(VAR_1->clock);
 }
 FUNC_12(VAR_1);
 FUNC_1(VAR_1);
 FUNC_10(VAR_1);
 FUNC_2(VAR_1);
 FUNC_4(VAR_1);
 FUNC_14(VAR_1);
 FUNC_13(VAR_1);
 FUNC_9(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_15(VAR_1);
 FUNC_7(VAR_1);
 FUNC_8(VAR_1);
}
