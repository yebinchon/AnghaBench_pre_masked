
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct hpsa_scsi_dev_t* hostdata; } ;
struct hpsa_scsi_dev_t {int scsi3addr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct ctlr_info {int lock; } ;
typedef int ssize_t ;
typedef int lunid ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 struct ctlr_info* FUNC_1 (struct scsi_device*) ;
 int FUNC_2 (char*,int,char*,unsigned char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
      struct device_attribute *VAR_2, char *VAR_3)
{
 struct ctlr_info *VAR_4;
 struct scsi_device *VAR_5;
 struct hpsa_scsi_dev_t *VAR_6;
 unsigned long VAR_7;
 unsigned char VAR_8[8];

 VAR_5 = FUNC_5(VAR_1);
 VAR_4 = FUNC_1(VAR_5);
 FUNC_3(&VAR_4->lock, VAR_7);
 VAR_6 = VAR_5->hostdata;
 if (!VAR_6) {
  FUNC_4(&VAR_4->lock, VAR_7);
  return -VAR_0;
 }
 FUNC_0(VAR_8, VAR_6->scsi3addr, sizeof(VAR_8));
 FUNC_4(&VAR_4->lock, VAR_7);
 return FUNC_2(VAR_3, 20, "0x%8phN\n", VAR_8);
}
