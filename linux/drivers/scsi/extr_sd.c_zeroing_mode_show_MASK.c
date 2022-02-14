
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_disk {size_t zeroing_mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 struct scsi_disk* FUNC_1 (struct device*) ;
 char** VAR_0 ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_1, struct device_attribute *VAR_2,
    char *VAR_3)
{
 struct scsi_disk *VAR_4 = FUNC_1(VAR_1);

 return FUNC_0(VAR_3, "%s\n", VAR_0[VAR_4->zeroing_mode]);
}
