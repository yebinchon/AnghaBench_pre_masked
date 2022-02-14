
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrb_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 unsigned short FUNC_1 (struct myrb_hba*,int ,int ) ;
 int FUNC_2 (int ,struct Scsi_Host*,char*,...) ;
 struct myrb_hba* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_4,
  struct device_attribute *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_4);
 struct myrb_hba *VAR_9 = FUNC_3(VAR_8);
 unsigned short VAR_10;

 VAR_10 = FUNC_1(VAR_9, VAR_2, 0);
 if (VAR_10 == VAR_3) {
  FUNC_2(VAR_1, VAR_8,
        "Cache Flush Completed\n");
  return VAR_7;
 }
 FUNC_2(VAR_1, VAR_8,
       "Cache Flush Failed, status %x\n", VAR_10);
 return -VAR_0;
}
