
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (int ,int *,int,char*) ;
 int VAR_4 ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (struct qla_hw_data*,int ,int) ;

__attribute__((used)) static int
FUNC_8(struct qla_hw_data *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 scsi_qla_host_t *VAR_8 = FUNC_0(VAR_5->pdev);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4, VAR_8, 0xb019,
      "ROM Lock failed.\n");
  return VAR_7;
 }

 FUNC_3(VAR_5);
 FUNC_7(VAR_5, VAR_2, VAR_6);
 FUNC_7(VAR_5, VAR_1, 3);
 FUNC_7(VAR_5, VAR_3, VAR_0);

 if (FUNC_6(VAR_5)) {
  FUNC_2(VAR_4, VAR_8, 0xb01a,
      "Error waiting for rom done.\n");
  VAR_7 = -1;
  goto done;
 }
 VAR_7 = FUNC_4(VAR_5);
done:
 FUNC_5(VAR_5);
 return VAR_7;
}
