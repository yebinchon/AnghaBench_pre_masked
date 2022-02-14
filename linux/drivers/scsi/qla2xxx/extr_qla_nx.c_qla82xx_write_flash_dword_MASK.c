
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (int ,int *,int,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 scalar_t__ FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (struct qla_hw_data*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct qla_hw_data *VAR_6, uint32_t VAR_7,
 uint32_t VAR_8)
{
 int VAR_9 = 0;
 scsi_qla_host_t *VAR_10 = FUNC_0(VAR_6->pdev);

 VAR_9 = FUNC_1(VAR_6);
 if (VAR_9 < 0) {
  FUNC_2(VAR_5, VAR_10, 0xb011,
      "ROM lock failed.\n");
  return VAR_9;
 }

 if (FUNC_3(VAR_6))
  goto done_write;

 FUNC_8(VAR_6, VAR_4, VAR_8);
 FUNC_8(VAR_6, VAR_2, VAR_7);
 FUNC_8(VAR_6, VAR_1, 3);
 FUNC_8(VAR_6, VAR_3, VAR_0);
 FUNC_6(VAR_6);
 if (FUNC_7(VAR_6)) {
  FUNC_2(VAR_5, VAR_10, 0xb012,
      "Error waiting for rom done.\n");
  VAR_9 = -1;
  goto done_write;
 }

 VAR_9 = FUNC_4(VAR_6);

done_write:
 FUNC_5(VAR_6);
 return VAR_9;
}
