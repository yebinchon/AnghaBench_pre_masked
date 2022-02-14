
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,char*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct qla_hw_data *VAR_2)
{
 int VAR_3 = 0;
 uint32_t VAR_4 = 0;
 scsi_qla_host_t *VAR_5 = FUNC_1(VAR_2->pdev);

 while ((FUNC_4(VAR_2) != 0) && (VAR_3 < 50000)) {
  FUNC_5(100);
  FUNC_0();
  VAR_3++;
 }
 if (VAR_3 >= 50000) {
  VAR_4 = FUNC_3(VAR_2, VAR_0);
  FUNC_2(VAR_1, VAR_5, 0xb010,
      "ROM lock failed, Lock Owner %u.\n", VAR_4);
  return -1;
 }
 return 0;
}
