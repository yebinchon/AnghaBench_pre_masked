
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct qla_hw_data*,int ) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;

__attribute__((used)) static void
FUNC_5(struct qla_hw_data *VAR_2)
{
 scsi_qla_host_t *VAR_3 = FUNC_0(VAR_2->pdev);
 uint32_t VAR_4 = 0;

 if (FUNC_3(VAR_2)) {
  VAR_4 = FUNC_2(VAR_2, VAR_0);

  FUNC_1(VAR_1, VAR_3, 0xb022,
      "Resetting rom_lock, Lock Owner %u.\n", VAR_4);
 }





 FUNC_4(VAR_2);
}
