
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hisi_hba {scalar_t__ intr_coal_ticks; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 size_t VAR_0 ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (char const*,int,scalar_t__*) ;
 struct hisi_hba* FUNC_5 (struct Scsi_Host*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
        struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_1);
 struct hisi_hba *VAR_6 = FUNC_5(VAR_5);
 u32 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3, 10, &VAR_7);
 if (VAR_8) {
  FUNC_3(VAR_1, "Input data of interrupt coalesce unmatch\n");
  return -VAR_0;
 }

 if (VAR_7 >= FUNC_0(24)) {
  FUNC_3(VAR_1, "intr_coal_ticks must be less than 2^24!\n");
  return -VAR_0;
 }

 VAR_6->intr_coal_ticks = VAR_7;

 FUNC_2(VAR_6);

 return VAR_4;
}
