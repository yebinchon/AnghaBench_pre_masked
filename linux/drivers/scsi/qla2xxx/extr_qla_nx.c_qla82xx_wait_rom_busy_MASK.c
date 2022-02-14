
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qla_hw_data {int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,char*,int ) ;
 int VAR_2 ;
 long FUNC_2 (struct qla_hw_data*,int ) ;
 long VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct qla_hw_data *VAR_4)
{
 long VAR_5 = 0;
 long VAR_6 = 0 ;
 scsi_qla_host_t *VAR_7 = FUNC_0(VAR_4->pdev);

 while (VAR_6 == 0) {
  VAR_6 = FUNC_2(VAR_4, VAR_1);
  VAR_6 &= 4;
  VAR_5++;
  if (VAR_5 >= VAR_3) {
   FUNC_1(VAR_2, VAR_7, 0xb00a,
       "%s: Timeout reached waiting for rom busy.\n",
       VAR_0);
   return -1;
  }
 }
 return 0;
}
