
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {unsigned char raid_level; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct hpsa_scsi_dev_t*) ;
 char** VAR_3 ;
 struct ctlr_info* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,int ,char*,...) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_4,
      struct device_attribute *VAR_5, char *VAR_6)
{
 ssize_t VAR_7 = 0;
 unsigned char VAR_8;
 struct ctlr_info *VAR_9;
 struct scsi_device *VAR_10;
 struct hpsa_scsi_dev_t *VAR_11;
 unsigned long VAR_12;

 VAR_10 = FUNC_5(VAR_4);
 VAR_9 = FUNC_1(VAR_10);
 FUNC_3(&VAR_9->lock, VAR_12);
 VAR_11 = VAR_10->hostdata;
 if (!VAR_11) {
  FUNC_4(&VAR_9->lock, VAR_12);
  return -VAR_0;
 }


 if (!FUNC_0(VAR_11)) {
  FUNC_4(&VAR_9->lock, VAR_12);
  VAR_7 = FUNC_2(VAR_6, VAR_1, "N/A\n");
  return VAR_7;
 }

 VAR_8 = VAR_11->raid_level;
 FUNC_4(&VAR_9->lock, VAR_12);
 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;
 VAR_7 = FUNC_2(VAR_6, VAR_1, "RAID %s\n", VAR_3[VAR_8]);
 return VAR_7;
}
