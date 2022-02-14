
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct qla_hw_data *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_0(VAR_3->pdev);

 FUNC_3(VAR_3, VAR_1, VAR_0);
 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_2, VAR_4, 0xb00f,
      "Error waiting for rom done.\n");
  return -1;
 }
 return 0;
}
