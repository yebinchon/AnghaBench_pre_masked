
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
 int FUNC_2 (int ,int *,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct qla_hw_data*,int*) ;
 int FUNC_4 (struct qla_hw_data*,int ,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int
FUNC_6(struct qla_hw_data *VAR_2)
{
 long VAR_3 = 0;
 uint32_t VAR_4 = 1 ;
 uint32_t VAR_5;
 int VAR_6 = 0;
 scsi_qla_host_t *VAR_7 = FUNC_1(VAR_2->pdev);

 FUNC_4(VAR_2, VAR_0, 0);
 while ((VAR_4 != 0) && (VAR_6 == 0)) {
  VAR_6 = FUNC_3(VAR_2, &VAR_5);
  VAR_4 = VAR_5 & 1;
  VAR_3++;
  FUNC_5(10);
  FUNC_0();
  if (VAR_3 >= 50000) {
   FUNC_2(VAR_1, VAR_7, 0xb00d,
       "Timeout reached waiting for write finish.\n");
   return -1;
  }
 }
 return VAR_6;
}
