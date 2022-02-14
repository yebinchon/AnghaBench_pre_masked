
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int ) ;
 struct scsi_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct scsi_device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct scsi_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "0x%016llx\n", FUNC_2(VAR_3));
}
