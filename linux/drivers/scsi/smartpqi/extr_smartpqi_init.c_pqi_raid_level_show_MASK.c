
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct pqi_scsi_dev* hostdata; int host; } ;
struct pqi_scsi_dev {int raid_level; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pqi_scsi_dev*) ;
 char* FUNC_1 (int ) ;
 struct pqi_ctrl_info* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,char*,char*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 struct scsi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct pqi_ctrl_info *VAR_4;
 struct scsi_device *VAR_5;
 struct pqi_scsi_dev *VAR_6;
 unsigned long VAR_7;
 char *VAR_8;

 VAR_5 = FUNC_6(VAR_1);
 VAR_4 = FUNC_2(VAR_5->host);

 FUNC_4(&VAR_4->scsi_device_list_lock, VAR_7);

 VAR_6 = VAR_5->hostdata;

 if (FUNC_0(VAR_6))
  VAR_8 = FUNC_1(VAR_6->raid_level);
 else
  VAR_8 = "N/A";

 FUNC_5(&VAR_4->scsi_device_list_lock, VAR_7);

 return FUNC_3(VAR_3, VAR_0, "%s\n", VAR_8);
}
