
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (int ,int *,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct qla_hw_data*,int*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 int FUNC_6 (struct qla_hw_data*,int) ;

__attribute__((used)) static int
FUNC_7(struct qla_hw_data *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;
 scsi_qla_host_t *VAR_5 = FUNC_0(VAR_2->pdev);

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0) {
  FUNC_2(VAR_1, VAR_5, 0xb014,
      "ROM Lock failed.\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_2, &VAR_4);
 if (VAR_3 < 0)
  goto done_unprotect;

 VAR_4 &= ~(VAR_0 << 2);
 VAR_3 = FUNC_6(VAR_2, VAR_4);
 if (VAR_3 < 0) {
  VAR_4 |= (VAR_0 << 2);
  FUNC_6(VAR_2, VAR_4);
 }

 if (FUNC_5(VAR_2) != 0)
  FUNC_2(VAR_1, VAR_5, 0xb015,
      "Write disable failed.\n");

done_unprotect:
 FUNC_4(VAR_2);
 return VAR_3;
}
