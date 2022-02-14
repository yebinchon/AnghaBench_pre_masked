
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_3__ {int smFwRev; int smRev; int biuRev; } ;
struct TYPE_4__ {TYPE_1__ rev; } ;
struct lpfc_hba {TYPE_2__ vpd; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
typedef TYPE_2__ lpfc_vpd_t ;


 int VAR_0 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ,char*,char*,int ,int ) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 char VAR_4[9];
 struct Scsi_Host *VAR_5 = FUNC_0(VAR_1);
 struct lpfc_vport *VAR_6 = (struct lpfc_vport *) VAR_5->hostdata;
 struct lpfc_hba *VAR_7 = VAR_6->phba;
 lpfc_vpd_t *VAR_8 = &VAR_7->vpd;

 FUNC_1(VAR_8->rev.biuRev, VAR_4);
 return FUNC_2(VAR_3, VAR_0, "%s %08x %08x\n", VAR_4,
    VAR_8->rev.smRev, VAR_8->rev.smFwRev);
}
