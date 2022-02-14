
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrs_hba {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 unsigned char FUNC_1 (struct myrs_hba*,int ,int ) ;
 int FUNC_2 (int ,struct Scsi_Host*,char*,...) ;
 struct myrs_hba* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_5);
 struct myrs_hba *VAR_10 = FUNC_3(VAR_9);
 unsigned char VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_2,
        VAR_3);
 if (VAR_11 == VAR_4) {
  FUNC_2(VAR_1, VAR_9, "Cache Flush Completed\n");
  return VAR_8;
 }
 FUNC_2(VAR_1, VAR_9,
       "Cache Flush failed, status 0x%02x\n", VAR_11);
 return -VAR_0;
}
