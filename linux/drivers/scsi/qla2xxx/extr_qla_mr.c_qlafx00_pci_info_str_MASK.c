
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int pdev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,size_t) ;

char *
FUNC_2(struct scsi_qla_host *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;

 if (FUNC_0(VAR_3->pdev))
  FUNC_1(VAR_1, "PCIe iSA", VAR_2);
 return VAR_1;
}
