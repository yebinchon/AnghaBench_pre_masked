
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
 int FUNC_2 (struct qla_hw_data*,int,int*) ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static int
FUNC_8(struct qla_hw_data *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6 = 0;
 uint32_t VAR_7 = 0;
 scsi_qla_host_t *VAR_8 = FUNC_0(VAR_2->pdev);

 while ((FUNC_4(VAR_2) != 0) && (VAR_6 < 50000)) {
  FUNC_7(100);
  FUNC_6();
  VAR_6++;
 }
 if (VAR_6 >= 50000) {
  VAR_7 = FUNC_3(VAR_2, VAR_0);
  FUNC_1(VAR_1, VAR_8, 0x00b9,
      "Failed to acquire SEM2 lock, Lock Owner %u.\n",
      VAR_7);
  return -1;
 }
 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
 FUNC_5(VAR_2);
 return VAR_5;
}
