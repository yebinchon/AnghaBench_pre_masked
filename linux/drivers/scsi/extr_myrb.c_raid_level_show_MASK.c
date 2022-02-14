
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; struct myrb_ldev_info* hostdata; int host; } ;
struct myrb_ldev_info {int state; int raid_level; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,...) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_3(VAR_1);

 if (VAR_4->channel == FUNC_0(VAR_4->host)) {
  struct myrb_ldev_info *VAR_5 = VAR_4->hostdata;
  const char *VAR_6;

  if (!VAR_5)
   return -VAR_0;

  VAR_6 = FUNC_1(VAR_5->raid_level);
  if (!VAR_6)
   return FUNC_2(VAR_3, 32, "Invalid (%02X)\n",
     VAR_5->state);
  return FUNC_2(VAR_3, 32, "%s\n", VAR_6);
 }
 return FUNC_2(VAR_3, 32, "Physical Drive\n");
}
