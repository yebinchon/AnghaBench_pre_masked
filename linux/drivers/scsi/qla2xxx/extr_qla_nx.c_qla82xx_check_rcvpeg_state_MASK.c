
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qla_hw_data {int hw_lock; int pdev; } ;
typedef int scsi_qla_host_t ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int,char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct qla_hw_data*,int ) ;
 int FUNC_4 (struct qla_hw_data*,int ,int const) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct qla_hw_data *VAR_5)
{
 u32 VAR_6 = 0;
 int VAR_7 = 60;
 scsi_qla_host_t *VAR_8 = FUNC_1(VAR_5->pdev);

 do {
  FUNC_5(&VAR_5->hw_lock);
  VAR_6 = FUNC_3(VAR_5, VAR_0);
  FUNC_6(&VAR_5->hw_lock);

  switch (VAR_6) {
  case 129:
  case 130:
   return VAR_2;
  case 128:
   break;
  default:
   break;
  }
  FUNC_2(VAR_4, VAR_8, 0x00ab,
      "CRB_RCVPEG_STATE: 0x%x and retries: 0x%x.\n",
      VAR_6, VAR_7);

  FUNC_0(500);

 } while (--VAR_7);

 FUNC_2(VAR_3, VAR_8, 0x00ac,
     "Rcv Peg initialization failed: 0x%x.\n", VAR_6);
 FUNC_5(&VAR_5->hw_lock);
 FUNC_4(VAR_5, VAR_0, 128);
 FUNC_6(&VAR_5->hw_lock);
 return VAR_1;
}
