
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int sas_address; int expose_device; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct hpsa_scsi_dev_t*) ;
 struct ctlr_info* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,int ,char*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
       struct device_attribute *VAR_3, char *VAR_4)
{
 struct ctlr_info *VAR_5;
 struct scsi_device *VAR_6;
 struct hpsa_scsi_dev_t *VAR_7;
 unsigned long VAR_8;
 u64 VAR_9;

 VAR_6 = FUNC_5(VAR_2);
 VAR_5 = FUNC_1(VAR_6);
 FUNC_3(&VAR_5->lock, VAR_8);
 VAR_7 = VAR_6->hostdata;
 if (!VAR_7 || FUNC_0(VAR_7) || !VAR_7->expose_device) {
  FUNC_4(&VAR_5->lock, VAR_8);
  return -VAR_0;
 }
 VAR_9 = VAR_7->sas_address;
 FUNC_4(&VAR_5->lock, VAR_8);

 return FUNC_2(VAR_4, VAR_1, "0x%016llx\n", VAR_9);
}
