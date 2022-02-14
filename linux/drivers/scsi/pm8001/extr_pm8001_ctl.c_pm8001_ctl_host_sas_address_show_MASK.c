
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_hba_info {scalar_t__ sas_addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
typedef int __be64 ;


 int VAR_0 ;
 struct sas_ha_struct* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int ) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct Scsi_Host *VAR_4 = FUNC_2(VAR_1);
 struct sas_ha_struct *VAR_5 = FUNC_0(VAR_4);
 struct pm8001_hba_info *VAR_6 = VAR_5->lldd_ha;
 return FUNC_3(VAR_3, VAR_0, "0x%016llx\n",
   FUNC_1(*(__be64 *)VAR_6->sas_addr));
}
