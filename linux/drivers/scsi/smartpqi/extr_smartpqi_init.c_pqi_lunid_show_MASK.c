
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {struct pqi_scsi_dev* hostdata; int host; } ;
struct pqi_scsi_dev {int scsi3addr; } ;
struct pqi_ctrl_info {int scsi_device_list_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int lunid ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct pqi_ctrl_info* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct scsi_device* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct pqi_ctrl_info *VAR_5;
 struct scsi_device *VAR_6;
 struct pqi_scsi_dev *VAR_7;
 unsigned long VAR_8;
 u8 VAR_9[8];

 VAR_6 = FUNC_5(VAR_2);
 VAR_5 = FUNC_1(VAR_6->host);

 FUNC_3(&VAR_5->scsi_device_list_lock, VAR_8);

 VAR_7 = VAR_6->hostdata;
 if (!VAR_7) {
  FUNC_4(&VAR_5->scsi_device_list_lock,
   VAR_8);
  return -VAR_0;
 }
 FUNC_0(VAR_9, VAR_7->scsi3addr, sizeof(VAR_9));

 FUNC_4(&VAR_5->scsi_device_list_lock, VAR_8);

 return FUNC_2(VAR_4, VAR_1, "0x%8phN\n", VAR_9);
}
