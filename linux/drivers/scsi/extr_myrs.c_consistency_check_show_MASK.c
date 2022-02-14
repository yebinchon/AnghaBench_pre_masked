
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ channel; struct myrs_ldev_info* hostdata; int host; } ;
struct myrs_ldev_info {unsigned short ldev_num; scalar_t__ cfg_devsize; scalar_t__ cc_lba; scalar_t__ cc_active; } ;
struct myrs_hba {TYPE_1__* ctlr_info; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ physchan_present; } ;


 int VAR_0 ;
 unsigned char FUNC_0 (struct myrs_hba*,unsigned short,struct myrs_ldev_info*) ;
 struct myrs_hba* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,...) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_3(VAR_1);
 struct myrs_hba *VAR_5 = FUNC_1(VAR_4->host);
 struct myrs_ldev_info *VAR_6;
 unsigned short VAR_7;
 unsigned char VAR_8;

 if (VAR_4->channel < VAR_5->ctlr_info->physchan_present)
  return FUNC_2(VAR_3, 32, "physical device - not checking\n");

 VAR_6 = VAR_4->hostdata;
 if (!VAR_6)
  return -VAR_0;
 VAR_7 = VAR_6->ldev_num;
 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_6);
 if (VAR_6->cc_active)
  return FUNC_2(VAR_3, 32, "checking block %zu of %zu\n",
    (size_t)VAR_6->cc_lba,
    (size_t)VAR_6->cfg_devsize);
 else
  return FUNC_2(VAR_3, 32, "not checking\n");
}
