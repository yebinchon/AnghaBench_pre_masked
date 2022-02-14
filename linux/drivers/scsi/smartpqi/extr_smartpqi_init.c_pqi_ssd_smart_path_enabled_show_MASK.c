
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct pqi_scsi_dev* hostdata; int host; } ;
struct pqi_scsi_dev {scalar_t__ raid_bypass_enabled; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct pqi_ctrl_info* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct scsi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct pqi_ctrl_info *VAR_3;
 struct scsi_device *VAR_4;
 struct pqi_scsi_dev *VAR_5;
 unsigned long VAR_6;

 VAR_4 = FUNC_3(VAR_0);
 VAR_3 = FUNC_0(VAR_4->host);

 FUNC_1(&VAR_3->scsi_device_list_lock, VAR_6);

 VAR_5 = VAR_4->hostdata;
 VAR_2[0] = VAR_5->raid_bypass_enabled ? '1' : '0';
 VAR_2[1] = '\n';
 VAR_2[2] = '\0';

 FUNC_2(&VAR_3->scsi_device_list_lock, VAR_6);

 return 2;
}
