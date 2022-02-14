
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ channel; scalar_t__ id; int host; } ;
struct myrb_rbld_progress {scalar_t__ ldev_num; int ldev_size; int blocks_left; } ;
struct myrb_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (struct myrb_hba*,struct myrb_rbld_progress*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct myrb_hba* FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,...) ;
 struct scsi_device* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_4(VAR_1);
 struct myrb_hba *VAR_5 = FUNC_2(VAR_4->host);
 struct myrb_rbld_progress VAR_6;
 unsigned char VAR_7;

 if (VAR_4->channel < FUNC_1(VAR_4->host))
  return FUNC_3(VAR_3, 32, "physical device - not rebuilding\n");

 VAR_7 = FUNC_0(VAR_5, &VAR_6);

 if (VAR_6.ldev_num != VAR_4->id ||
     VAR_7 != VAR_0)
  return FUNC_3(VAR_3, 32, "not rebuilding\n");

 return FUNC_3(VAR_3, 32, "rebuilding block %u of %u\n",
   VAR_6.ldev_size - VAR_6.blocks_left,
   VAR_6.ldev_size);
}
