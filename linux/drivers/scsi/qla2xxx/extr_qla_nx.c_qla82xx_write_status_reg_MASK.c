
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct qla_hw_data *VAR_3, uint32_t VAR_4)
{
 scsi_qla_host_t *VAR_5 = FUNC_0(VAR_3->pdev);

 if (FUNC_2(VAR_3))
  return -1;
 FUNC_5(VAR_3, VAR_1, VAR_4);
 FUNC_5(VAR_3, VAR_0, 0x1);
 if (FUNC_4(VAR_3)) {
  FUNC_1(VAR_2, VAR_5, 0xb00e,
      "Error waiting for rom done.\n");
  return -1;
 }
 return FUNC_3(VAR_3);
}
