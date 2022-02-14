
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int offload_enabled; scalar_t__ devtype; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct ctlr_info* FUNC_0 (struct scsi_device*) ;
 int FUNC_1 (char*,int,char*,...) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
      struct device_attribute *VAR_4, char *VAR_5)
{
 struct ctlr_info *VAR_6;
 struct scsi_device *VAR_7;
 struct hpsa_scsi_dev_t *VAR_8;
 unsigned long VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_3);
 VAR_6 = FUNC_0(VAR_7);
 FUNC_2(&VAR_6->lock, VAR_9);
 VAR_8 = VAR_7->hostdata;
 if (!VAR_8) {
  FUNC_3(&VAR_6->lock, VAR_9);
  return -VAR_0;
 }
 VAR_10 = VAR_8->offload_enabled;
 FUNC_3(&VAR_6->lock, VAR_9);

 if (VAR_8->devtype == VAR_1 || VAR_8->devtype == VAR_2)
  return FUNC_1(VAR_5, 20, "%d\n", VAR_10);
 else
  return FUNC_1(VAR_5, 40, "%s\n",
    "Not applicable for a controller");
}
