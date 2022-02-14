
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int sdev_state; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,char const*) ;
 struct scsi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_2(VAR_1);
 const char *VAR_5 = FUNC_0(VAR_4->sdev_state);

 if (!VAR_5)
  return -VAR_0;

 return FUNC_1(VAR_3, 20, "%s\n", VAR_5);
}
