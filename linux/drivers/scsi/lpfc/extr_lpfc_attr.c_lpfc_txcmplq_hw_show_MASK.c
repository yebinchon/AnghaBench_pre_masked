
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_sli_ring {int txcmplq_max; } ;
struct lpfc_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 struct lpfc_sli_ring* FUNC_1 (struct lpfc_hba*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
 char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_0(VAR_1);
 struct lpfc_hba *VAR_5 = ((struct lpfc_vport *) VAR_4->hostdata)->phba;
 struct lpfc_sli_ring *VAR_6 = FUNC_1(VAR_5);

 return FUNC_2(VAR_3, VAR_0, "%d\n",
   VAR_6 ? VAR_6->txcmplq_max : 0);
}
