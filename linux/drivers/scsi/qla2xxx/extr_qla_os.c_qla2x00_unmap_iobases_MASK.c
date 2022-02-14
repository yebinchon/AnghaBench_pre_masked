
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int * msixbase; int * mqiobase; int * cregbase; int * iobase; scalar_t__ nxdb_wr_ptr; scalar_t__ nx_pcibase; } ;
typedef int device_reg_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct qla_hw_data *VAR_1)
{
 if (FUNC_2(VAR_1)) {

  FUNC_4((device_reg_t *)VAR_1->nx_pcibase);
  if (!VAR_0)
   FUNC_4((device_reg_t *)VAR_1->nxdb_wr_ptr);
 } else {
  if (VAR_1->iobase)
   FUNC_4(VAR_1->iobase);

  if (VAR_1->cregbase)
   FUNC_4(VAR_1->cregbase);

  if (VAR_1->mqiobase)
   FUNC_4(VAR_1->mqiobase);

  if ((FUNC_3(VAR_1) || FUNC_0(VAR_1) || FUNC_1(VAR_1)) &&
      VAR_1->msixbase)
   FUNC_4(VAR_1->msixbase);
 }
}
