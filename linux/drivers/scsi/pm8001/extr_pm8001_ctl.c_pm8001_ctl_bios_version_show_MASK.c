
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sas_ha_struct {struct pm8001_hba_info* lldd_ha; } ;
struct pm8001_ioctl_payload {int minor_function; int length; int* func_specific; scalar_t__ offset; } ;
struct pm8001_hba_info {int * nvmd_completion; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ (* get_nvmd_req ) (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct sas_ha_struct* FUNC_1 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_2 (struct device*) ;
 int VAR_5 ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (char*,char*,int) ;
 scalar_t__ FUNC_6 (struct pm8001_hba_info*,struct pm8001_ioctl_payload*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_6,
 struct device_attribute *VAR_7, char *VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_2(VAR_6);
 struct sas_ha_struct *VAR_10 = FUNC_1(VAR_9);
 struct pm8001_hba_info *VAR_11 = VAR_10->lldd_ha;
 char *VAR_12 = VAR_8;
 int VAR_13;
 FUNC_0(VAR_5);
 struct pm8001_ioctl_payload VAR_14;

 VAR_11->nvmd_completion = &VAR_5;
 VAR_14.minor_function = 7;
 VAR_14.offset = 0;
 VAR_14.length = 4096;
 VAR_14.func_specific = FUNC_4(4096, VAR_3);
 if (!VAR_14.func_specific)
  return -VAR_2;
 if (VAR_4->get_nvmd_req(VAR_11, &VAR_14)) {
  FUNC_3(VAR_14.func_specific);
  return -VAR_2;
 }
 FUNC_7(&VAR_5);
 for (VAR_13 = VAR_0; VAR_13 < VAR_1;
  VAR_13++)
  VAR_12 += FUNC_5(VAR_12, "%c",
   *(VAR_14.func_specific+VAR_13));
 FUNC_3(VAR_14.func_specific);
 return VAR_12 - VAR_8;
}
