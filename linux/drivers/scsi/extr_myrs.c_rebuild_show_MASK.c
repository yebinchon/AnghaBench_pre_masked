
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; struct myrs_ldev_info* hostdata; int host; } ;
struct myrs_ldev_info {unsigned short ldev_num; scalar_t__ cfg_devsize; scalar_t__ rbld_lba; scalar_t__ rbld_active; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ physchan_present; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char FUNC_0 (struct myrs_hba*,unsigned short,struct myrs_ldev_info*) ;
 int FUNC_1 (int ,struct scsi_device*,char*,unsigned char) ;
 struct myrs_hba* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,...) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
  struct device_attribute *VAR_4, char *VAR_5)
{
 struct scsi_device *VAR_6 = FUNC_4(VAR_3);
 struct myrs_hba *VAR_7 = FUNC_2(VAR_6->host);
 struct myrs_ldev_info *VAR_8;
 unsigned short VAR_9;
 unsigned char VAR_10;

 if (VAR_6->channel < VAR_7->ctlr_info->physchan_present)
  return FUNC_3(VAR_5, 32, "physical device - not rebuilding\n");

 VAR_8 = VAR_6->hostdata;
 VAR_9 = VAR_8->ldev_num;
 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_8);
 if (VAR_10 != VAR_2) {
  FUNC_1(VAR_1, VAR_6,
       "Failed to get device information, status 0x%02x\n",
       VAR_10);
  return -VAR_0;
 }
 if (VAR_8->rbld_active) {
  return FUNC_3(VAR_5, 32, "rebuilding block %zu of %zu\n",
    (size_t)VAR_8->rbld_lba,
    (size_t)VAR_8->cfg_devsize);
 } else
  return FUNC_3(VAR_5, 32, "not rebuilding\n");
}
