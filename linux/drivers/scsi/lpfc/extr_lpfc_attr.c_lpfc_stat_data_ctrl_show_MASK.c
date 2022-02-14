
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {int stat_data_enabled; int stat_data_blocked; struct lpfc_hba* phba; } ;
struct lpfc_hba {int bucket_type; int bucket_base; int bucket_step; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_3);
 struct lpfc_vport *VAR_7 = (struct lpfc_vport *) VAR_6->hostdata;
 struct lpfc_hba *VAR_8 = VAR_7->phba;
 int VAR_9 = 0;
 int VAR_10;
 char *VAR_11;
 unsigned long VAR_12;

 switch (VAR_8->bucket_type) {
 case 129:
  VAR_11 = "linear";
  break;
 case 128:
  VAR_11 = "power2";
  break;
 default:
  VAR_11 = "No Bucket";
  break;
 }

 FUNC_1(&VAR_5[VAR_9], "Statistical Data enabled :%d, "
  "blocked :%d, Bucket type :%s, Bucket base :%d,"
  " Bucket step :%d\nLatency Ranges :",
  VAR_7->stat_data_enabled, VAR_7->stat_data_blocked,
  VAR_11, VAR_8->bucket_base, VAR_8->bucket_step);
 VAR_9 = FUNC_2(VAR_5);
 if (VAR_8->bucket_type != VAR_1) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_8->bucket_type == 129)
    VAR_12 = VAR_8->bucket_base +
     VAR_8->bucket_step * VAR_10;
   else
    VAR_12 = VAR_8->bucket_base +
    (1 << VAR_10) * VAR_8->bucket_step;

   if (VAR_9 + 10 > VAR_2)
    break;
   FUNC_1(&VAR_5[VAR_9], "%08ld ", VAR_12);
   VAR_9 = FUNC_2(VAR_5);
  }
 }
 FUNC_1(&VAR_5[VAR_9], "\n");
 return FUNC_2(VAR_5);
}
