
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int mpi_port_cfg_work; int mpi_core_to_log; int mpi_idc_work; int mpi_work; int mpi_reset_work; int asic_reset_work; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_1)
{




 if (FUNC_1(VAR_0, &VAR_1->flags))
  FUNC_0(&VAR_1->asic_reset_work);
 FUNC_0(&VAR_1->mpi_reset_work);
 FUNC_0(&VAR_1->mpi_work);
 FUNC_0(&VAR_1->mpi_idc_work);
 FUNC_0(&VAR_1->mpi_core_to_log);
 FUNC_0(&VAR_1->mpi_port_cfg_work);
}
