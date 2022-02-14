
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct scsi_qla_host*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int ,char*,struct scsi_qla_host*) ;

int
FUNC_6(struct scsi_qla_host *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5->pdev, VAR_2,
   VAR_2, VAR_1);
 if (VAR_6 < 0) {
  FUNC_4(VAR_0, VAR_5,
      "MSI-X: Failed to enable support -- %d/%d\n",
      VAR_2, VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(FUNC_3(VAR_5->pdev, 0),
   VAR_3, 0, "qla4xxx (default)",
   VAR_5);
 if (VAR_6)
  goto out_free_vectors;

 VAR_6 = FUNC_5(FUNC_3(VAR_5->pdev, 1),
   VAR_4, 0, "qla4xxx (rsp_q)", VAR_5);
 if (VAR_6)
  goto out_free_default_irq;

 return 0;

out_free_default_irq:
 FUNC_0(FUNC_3(VAR_5->pdev, 0), VAR_5);
out_free_vectors:
 FUNC_2(VAR_5->pdev);
 return VAR_6;
}
