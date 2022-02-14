
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ufs_hba {int dummy; } ;
struct scsi_device {int lun; int host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ufs_hba* FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct scsi_device* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct ufs_hba*,int ,int ,int ,int ,int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
 struct device_attribute *VAR_4, char *VAR_5)
{
 u32 VAR_6;
 struct scsi_device *VAR_7 = FUNC_2(VAR_3);
 struct ufs_hba *VAR_8 = FUNC_0(VAR_7->host);
 u8 VAR_9 = FUNC_4(VAR_7->lun);

 if (FUNC_3(VAR_8, VAR_2,
  VAR_1, VAR_9, 0, &VAR_6))
  return -VAR_0;
 return FUNC_1(VAR_5, "0x%08X\n", VAR_6);
}
