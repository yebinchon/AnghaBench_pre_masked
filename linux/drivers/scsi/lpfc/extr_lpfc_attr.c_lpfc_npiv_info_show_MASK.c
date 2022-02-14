
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {scalar_t__ port_type; int vpi; struct lpfc_hba* phba; } ;
struct lpfc_hba {int max_vpi; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
      char *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_2);
 struct lpfc_vport *VAR_6 = (struct lpfc_vport *) VAR_5->hostdata;
 struct lpfc_hba *VAR_7 = VAR_6->phba;

 if (!(VAR_7->max_vpi))
  return FUNC_1(VAR_4, VAR_1, "NPIV Not Supported\n");
 if (VAR_6->port_type == VAR_0)
  return FUNC_1(VAR_4, VAR_1, "NPIV Physical\n");
 return FUNC_1(VAR_4, VAR_1, "NPIV Virtual (VPI %d)\n", VAR_6->vpi);
}
